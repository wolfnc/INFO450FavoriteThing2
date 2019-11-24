//
//  FavoriteThings.cpp
//  a4 fav things file io
//
//  Created by Noah Wolf on 11/23/19.
//  Copyright © 2019 Noah Wolf. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include "Albums.hpp"
#include "AlbumsList.hpp"
using namespace std;

void instructions();
void menu();
void chooseOption();
void runAgain();

int main()
{
    char answer;
    char raAnswer;
    Albums myAlbum;
    AlbumsList myList;
    instructions();
    
    do
    {
        menu();
        chooseOption();
        cin >> answer;
        cout << endl;
        cin.clear();
        cin.ignore();
        
        if (answer == '1')
        {
            myList.ReadList();
        }
        else if (answer == '2')
        {
            myList.AddItem();
        }
        else if (answer == '3')
        {
            myList.ShowList();
        }
        else if (answer == '4')
        {
            myList.SaveList();
        }
        else if (answer == '5')
        {
            return 0;
        }
    
        runAgain();
        cin >> raAnswer;
        
        cout << endl;
        
    } while (raAnswer == 'Y' || raAnswer == 'y');
    
    
        return 0;
}
    
void instructions()
{
    cout << endl;
    cout << "This program will allow you to read a list from a text file, add new items to a list of your favorite albums, show the list of your favorite albums, and/or save your list to a file!" << endl;
    cout << endl;
}

void menu()
{
    cout << "*********************************" << endl;
    cout << "** Choose from an option below **" << endl;
    cout << "* 1. Read inventory from a file *" << endl;
    cout << "* 2. Add new albums to the list *" << endl;
    cout << "* 3. Display the current list ***" << endl;
    cout << "* 4. Save current list to file **" << endl;
    cout << "* 5. Exit the program ***********" << endl;
    cout << "*********************************" << endl;
    cout << endl;
}

void chooseOption()
{
    cout << "Please enter the corresponding number of the action you want from the menu above (1-5): " << endl;
    cout << endl;
}
void runAgain()
{
    cout << endl;
    cout << "Enter Y if you would like to view the menu again (if not the program will close): " << endl;
    cout << endl;
}


