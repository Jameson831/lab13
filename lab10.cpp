#include<iostream>
#include<fstream>

using namespace std;

int main() {
    string filename;
    
    string output;
    string decision;
    int countlines;
    int c;
    
    do{
        cout << "What file do you want to open? ";
        cin >> filename;
        cin.ignore();
        ifstream myReadFile(filename.c_str());
        countlines = 0;
        c = 0;
    if (myReadFile.is_open()) {
        cout << filename << " opened." << endl;;
        cout << "FILE CONTENTS:" << endl;
        while (getline(myReadFile, output) && !myReadFile.eof()) {
            countlines++;
            cout<< output<< endl;
            c += output.length();
            
        }
        
        }
        else{
            cout << filename << " could not be opened." << endl;;
        }
        cout << "METADATA" << endl;
        cout<< "File: " << filename << endl;
        cout << "Lines: " << countlines << endl;
        cout << "Characters: " << c << endl;
        myReadFile.close();

        
        cout << "Analyze another file (y/n)? ";
        cin >> decision;
        cin.ignore();
        }while (decision == "y");
    
    
    
   
    return 0;
}






