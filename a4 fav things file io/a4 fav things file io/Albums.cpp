//
//  Albums.cpp
//  a4 fav things file io
//
//  Created by Noah Wolf on 11/23/19.
//  Copyright © 2019 Noah Wolf. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include "Albums.hpp"
using namespace std;

Albums::Albums()
{
    aTitle = " ";
    aArtist = " ";
    yearReleased = " ";
    favSong = " ";
    aRating = 0;
}

Albums::Albums(string t, string a, string y, string f, int r)
{
    aTitle = t;
    aArtist = a;
    yearReleased = y;
    favSong = f;
    aRating = r;
}

string Albums::getTitle()
{
    return aTitle;
}
string Albums::getArtist()
{
    return aArtist;
}
string Albums::getYearReleased()
{
    return yearReleased;
}
string Albums::getFavSong()
{
    return favSong;
}
int Albums::getRating()
{
    return aRating;
}

void Albums::setTitle(string t)
{
    aTitle = t;
}
void Albums::setArtist(string a)
{
    aArtist = a;
}
void Albums::setYearReleased(string y)
{
    yearReleased = y;
}
void Albums::setFavSong(string f)
{
    favSong = f;
}
void Albums::setRating(int r)
{
    aRating = r;
}

void Albums::getAlbumsInput()
{
    cout << "Please enter the title of your favorite album: " << endl;
    getline(cin, aTitle, '\n');
    cout << "Enter the album artist's name: " << endl;
    getline(cin, aArtist, '\n');
    cout << "Enter the year the album was released: " << endl;
    getline(cin, yearReleased, '\n');
    cout << "Enter your favorite song on the album: " << endl;
    getline(cin, favSong, '\n');
    cout << "Enter a number that you would rate this album: " << endl;
    cin >> aRating;
    cin.ignore();
}

ostream& operator << (ostream& output, Albums &i)
{
    
    output << "Title: " << i.aTitle << " | " << "Artist: " << i.aArtist << " | " << "Year: " << i.yearReleased << " | " << "Favorite Song: " << i.favSong << " | " << "Rating: " << i.aRating << endl;
    
    output << endl;
    
    return output;
}
