//contains implementation of the editor in class
#pragma once


//#ifndef lineeditor.H    // conditional preprocessor directive
//#define lineeditor.h    // if I have more than one header file

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <iterator>

using namespace std;


class LineEdit {

public:
    //LineEdit(int argc, char *argv[]);    //opening/creating file
    //void doRun();        //program runs until user quits
    void write();        //program writes contents of current "buffer" to a file
    void jump (int num);        //function jumps to a line in the file
    void insert(string newString);        //function inserts text at the current line
    void append(string newString);        //function inserts text after current line
    void listContents(int start, int end);        //functions lists contents of the buffer a.k.a prints
    void deleted(int start, int end);         // function deletes one or more lines
    bool keepAlive();           //function quits editor if false
    int getLineNum();
    void updateLine();


private:
    ifstream textFile;     //file that user wants to edit
    ofstream storedFile;   //file after saving (updated file) 
    string file;           //file without saving
    vector <string> fileLines; //stores the input in vector 
    int currentLine = 1;   //currentLine
    char fileName[80];
};

//text gets written in textFile
void LineEdit::write() {

  //if user inputted an exisiting file
  textFile.open("loremipsum.txt");  //open the file
  //get contents of current buffer
  //copy into file by looping through vector (similar to an array)
  storedFile.close();
  cout << "Contents are saved into file" << endl;

  //else no textfile was open or does not exist
  cout << "A file name must be given" << endl;
};

void LineEdit::jump(int number) {
    currentLine = number;   //updates current line to current position
    cout << "Jumped to line: " << endl; 
    cout << getLineNum() << "> ";    //line is now updated

  //if number is -1
  //jump to the end of the file using
  //updateLine() = vector[vector.size()-1]  //update to current position

  //if else number is 0
  //jump to the beginning of file: number = 0
  //updateLine() position
  
  //print out the line that was jumped to
  //use the list function to print out line
  }
};

void insert(string nstring, int line) {
  //prompt the user to type in the text they want to insert
  // getline text
  // go to "line" position (index)
  // insert text into file
  // save file

  //if theres no text given
  //getLineNum()
  // cout << endl;  //enter blank line
};


void append(string nstring, int line) {
  //user enters line (string)
  cout << "Enter your text" <<  endl;   //prompt the user to type in the text they want to insert
  getline(line);   // getline text
  // go to "line" position (index) + 1 
  // insert text into file
  // save file

  //if theres no text given
  //getLineNum()
  // cout << endl;  //enter blank line
};

void listContents(int start, int end) {}       //functions lists contents of the buffer a.k.a prints
    start = testFile.cbegin(start);  //making the line number "start" -  the beginning of the vector
    end = textFile.cend(end);    //making the ending line number be "end"

    cout << "Contents of the vector: " << endl;
    for(auto itr = end - 1;
         itr >= start();
         --itr)
        cout << *itr << endl;
};

void deleted(int start, int end) { // function deletes one or more lines
  
    for (auto i = textFile.begin(); i != textFile.end(); ++i) {
        if (*i % 2 == 0) {
            textFile.erase(i);
            i--;
        }
    }

  };

bool keepAlive();           //function quits editor if false


int getLineNum() {
  return currentLine; //returns currentLine
};

void updateLine() {

  currentLine += 1;
};


//#endif

