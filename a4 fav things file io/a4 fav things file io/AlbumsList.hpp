//
//  AlbumsList.hpp
//  a4 fav things file io
//
//  Created by Noah Wolf on 11/23/19.
//  Copyright © 2019 Noah Wolf. All rights reserved.
//

#include <stdio.h>
#pragma once
#ifndef AlbumsList_hpp
#define AlbumsList_hpp
#include <iostream>
#include <fstream>
#include <string>
#include "Albums.hpp"
using namespace std;

class AlbumsList
{
private:
    Albums items[1000];
    int numItems;
public:
    AlbumsList();
    void AddItem();
    void ShowList();
    int ReadList();
    int SaveList();
};

#endif /* AlbumsList_hpp */
