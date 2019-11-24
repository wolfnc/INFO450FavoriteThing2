//
//  AlbumsList.cpp
//  a4 fav things file io
//
//  Created by Noah Wolf on 11/23/19.
//  Copyright © 2019 Noah Wolf. All rights reserved.
//

#include "AlbumsList.hpp"
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include "Albums.hpp"
using namespace std;

AlbumsList::AlbumsList()
{
    numItems = 0;
}

void AlbumsList::AddItem()
{
    items[numItems].getAlbumsInput();
    numItems++;
}

void AlbumsList::ShowList()
{
    int i;
    for (i = 0; i < numItems; i++)
    {
        cout << items[i];
    }
}

int AlbumsList::ReadList()
{
    int i;
    string filename;
    cout << "Please enter the address of a text file you would like to read from: " << endl;
    cin >> filename;
    ofstream outputFile;
    outputFile.open(filename, ios::trunc); //use ios::trunc to delete contents of file if it exists
    if (!outputFile)
    {
        cout << "ERRROR - file open failed!" << endl;
        return -2;
    }
    for (i = 0; i < numItems; i++)
    {
        outputFile << items[i].getTitle() << " | ";
        outputFile << items[i].getArtist() << " | ";
        outputFile << items[i].getYearReleased() << " | ";
        outputFile << items[i].getFavSong() << " | ";
        outputFile << items[i].getRating() << " | " << endl;
    }
    outputFile.close();
    return 0;
}

int AlbumsList::SaveList()
{
    string filename;
    cout << "Please enter the address of a text file you would like to save to: " << endl;
    cin >> filename;
    ifstream inputFile;
    inputFile.open(filename, ios::in);
    if (!inputFile)
    {
        cout << "ERROR: could not open file" << endl;
        return -2;
    }

    //create temp placeholder for items
    string title;
    string artist;
    string year;
    string favesong;
    int rating;
    string inputstring;
    while (!inputFile.eof())
    {
        // reading from the file
        getline(inputFile,inputstring, '|');
        if (inputstring.length() >= 1)
        {
            getline(inputFile, title, '|');
            getline(inputFile, artist, '|');
            getline(inputFile, year, '|');
            getline(inputFile, favesong, '|');
            rating = stoi(inputstring);
            getline(inputFile, inputstring, '\n');

            // now add data to objects in list
            items[numItems].setTitle(title);
            items[numItems].setArtist(artist);
            items[numItems].setYearReleased(year);
            items[numItems].setFavSong(favesong);
            items[numItems].setRating(rating);
            numItems++;
        }
    }
    
    inputFile.close();
    return 0;
}
