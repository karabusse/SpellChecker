/**
 * Kara Busse
 * Spell Checker
 */

/*
 * Build Dictionary of correctly spelled words
 * Read words from file dict.txt in current directory
 */

/*
 * Ask user for name of text file to spell check
 */
#include <iostream>
#include <fstream>
#include "FileManage.h"

using namespace std;

int main() {
//    string fileName;
//    Manage theFile;
//    cout<<"Enter the filepath of the dictionary you would like to use"<<endl;
//    cin>> fileName;    string line;
//    theFile.readFile(fileName); //This is not finding the filepath

    string line;
    cout<<"Enter the name of the file"<< endl;
    cin>>line;
    ifstream myfile ("inputSmall.txt");
    getline(myfile, line);
    while (getline(myfile, line)) {
        cout << line << '\n';
    }
        myfile.close();


    //Perform operations on information with AVL tree

    /*
     * Check to see if entry is in AVL tree (find entry)
     * If entry is not in AVL tree, add it (add entry)
     * else ???
     */

    //Output data
}

/*
 * Print out list of misspelled words and lines where they occur
 * For each misspelled word, list any words in dictionary that can be obtained by these rules:
 * 1) Add one letter to word at any position
 * 2) Remove one letter from word at any position
 * 3) Switch around characters that are next to each other
 *
 * Line numbers start at 1 in files
 */

