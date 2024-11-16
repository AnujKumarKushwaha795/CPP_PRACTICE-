// #include <bits/stdc++.h>
#include <fstream> 
// ifstream for reading. ifstream is a class in C++ that allows you to read from files. It is an input file stream that provides a way to read data from a file into your program.

// ofstream for writing. ofstream is a class in C++ that allows you to write to files. It is an output file stream that provides a way to write data from your program to a file.

#include <iostream> // for input/output operations
#include <iomanip> // for formatted output
#include <string> // for string operations
#include <vector> // for vector operations
#include <algorithm> // for sorting and searching
#include <cmath> // for mathematical operations
#include<unordered_map>
using namespace std;
#define ll long long


void FileWrite(){
  ofstream file("sample.txt"); // open the file in write mode
  if(file.is_open()){
    file << "ofstream is a class in C++ that allows you to write to files.\n It is an output file stream that provides a way to write data from your program to a file." << endl; // write to the file
    file.close(); // close the file
  }
}

void FileWrite1(){
  cout<<"Write your content in file:"<<endl;
  ofstream file;
  file.open("file1.txt");
  if(file.is_open()){
    string str;
    while(getline(cin,str)){
       if(str=="-1")break; 
       file<<str<<endl;
    }
    file.close();
  }
}
void FileWrite2(){
  unordered_map<int,int>mp;
  mp[100]=10;
  mp[200]=20;
  mp[300]=30;
  mp[400]=100;
  ofstream file;
  file.open("mapFile.txt",ios::app);
  if(file.is_open()){
    for(auto& i:mp){
      file<<i.first<<" "<<i.second<<endl;
    }
    file.close();
  }
}

void FileRead2(){
  ifstream file;
  file.open("mapFile.txt");
  unordered_map<int,int>mp;
  if(file.is_open()){
    string str;
    while(getline(file,str)){
      cout<<str<<endl;
    }
  }

}


// Read file line by line
void FileRead(){
  // read the file?
  ifstream file_obj;
  file_obj.open("mapFile.txt"); // this will open the file if exist. if file does not exist it will create new file in present working directory.

  if(file_obj.is_open()){
    cout << "File opened successfully.\n";
    string line;
    while (getline(file_obj,line)){
      cout<<line<<endl;
    }
    file_obj.close();    
  }
  else{
    cout << "Unable to open file";
  }
}
// Read file character by character.
void FileRead1(){
  ifstream file;
  file.open("file1.txt");
  if(file.is_open()){
    char ch;
    // file>>ch; // this will ignore space and new line
    ch=file.get();
    while(!file.eof()){
      cout<<ch;
      // file>>ch;
      ch=file.get();
    }
    file.close();
  }
}




int main() {

// FileWrite();
// FileWrite1();
FileWrite2();
// FileRead();
// FileRead1();
FileRead2();




    
return 0;
}


