/*
 * Name: Angelica Vargas
 * Class: CptS 223
 * Assignment: Line editor - user can input command and modify text file
 */

#include "lineedit.h"

int main(int argc, char *argv[]) {

  string command;        // stores user command
  vector<int> input;     // vector to keep buffer
  LineEdit *lineEdit;    // detect file on command line
  bool keepAlive = true; // keeps program running while keepAlive is true

  // searching and opening file
  fstream dataFile;
  string name;
  vector<string> file;
  char fileName[80];

  while (keepAlive == true) {
    cout << "Please enter the file name: ";
    cin >> fileName;
    dataFile.open(fileName);
    if (dataFile.fail()) {

      cout << "File does not exist." << endl;

      continue;
    }
    break;

    cout << "File opened.\n";
    cout << "Viewing the file" << endl;

    while (!dataFile.fail() && !dataFile.eof()) {

      dataFile >> name;
      file.push_back(name);
    }

    cout << "Enter command: ";
    getline(cin, command);

    if (command == "W") {
      dataFile.write(); // calling the "write" function to print file
    } else if (command.substr(0, 2) == "J ") {
      dataFile.jump(stoi(command.substr(2)));
      
    } else if (command == "I") {
      int line = dataFile.getLineNum();
      dataFile.insert(command, line);
      
    } else if (command == "A") {
      int line = dataFile.getLineNum();
      dataFile.append()
    }

    else if(command == "L") {
      (command.substr(0, 2) == "L ") {
      dataFile.list(stoi(command.substr(2)));
    }

    else if(command == "D") {
      (command.substr(0, 2) == "D ") {
      dataFile.list(stoi(command.substr(2)))
    }

    else if(command == "Q") {
        keepAlive = false;
    }
  dataFile.close();
 
  return 0; 
  }  
}
}
*/
