//
// Created by Kara on 4/14/18.
//

#ifndef SPELLCHECKER_FILEMANAGE_H
#define SPELLCHECKER_FILEMANAGE_H

#endif //SPELLCHECKER_FILEMANAGE_H

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

class Manage {
public:
    stringstream ss;
    size_t fileLength = 0;
    string* inputDynamArray; //This takes in input from the user
    void readFile(string inputFileName); //This will read in

};