//
//  Albums.hpp
//  a4 fav things file io
//
//  Created by Noah Wolf on 11/23/19.
//  Copyright © 2019 Noah Wolf. All rights reserved.
//

#include <stdio.h>

#pragma once
#include <iostream>
#include <string>
#include <fstream>
#ifndef Albums_hpp
#define Albums_hpp
using namespace std;

class Albums
{
private:
    string aTitle;
    string aArtist;
    string yearReleased;
    string favSong;
    int aRating;
public:
    Albums();
    Albums(string t, string a, string y, string f, int r);
    string getTitle();
    string getArtist();
    string getYearReleased();
    string getFavSong();
    int getRating();
    void setTitle(string t);
    void setArtist(string a);
    void setYearReleased(string y);
    void setFavSong(string f);
    void setRating(int r);
    void getAlbumsInput();
    
    friend ostream& operator << (ostream& output, Albums &i);
};

#endif /* Albums_hpp */
