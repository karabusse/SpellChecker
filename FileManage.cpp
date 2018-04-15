//
// Created by Kara on 4/14/18.
//

#include "FileManage.h"

void Manage::readFile(string inputFileName){

    cout<<"Reading File"<<endl;
    //Temp variables to hold data from a line
    string line;
    int int_line = 0;


    //Take that file name (obtained from command line in main) and attempt access the file
    ifstream inputFile (inputFileName);

    //Try to read the file stream, if that fails output a message.
    if (!inputFile){
        cout<<"Cannot open file (file may not exist in the given location)"<<endl;
    }
    else {
        while (getline(inputFile, line))
            fileLength++;
        }

        //Closing and reopening the file to make getline start at the beginning of the file
        inputFile.close();
        inputFile.open(inputFileName);

        cout << "File Length: " << fileLength << endl;

        inputDynamArray = new string[fileLength];
        int iterator = 0;
        while (getline(inputFile, line)) {
            //get the input from the file and store it
            if (!line.empty()) {

                //Store Integers in dynamic array
                inputDynamArray[iterator] = line;
                ++iterator;

            }
        }
        cout << "File Read and Stored" << endl;
    inputFile.close();

    }
