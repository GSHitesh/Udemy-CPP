// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ifstream in_file{"../romeoandjuliet.txt"};
    ofstream out_file{"../romeoandjuliet_out.txt"};
    if(!in_file.is_open()){
        cerr<<"Input file not found";
        return 1;
    }
    if(!out_file.is_open()){
        cerr<<"Output file not found";
        return 1;
    }
    string word{};
    int num{0};
    
    while(getline(in_file,word)){
        if(word == ""){
            out_file<<endl;
            }
        else{
            ++num;
            out_file<<setw(15)<<left<<num;
        out_file<<word<<endl;
    }
    }
    cout<<"Copied Successfully"<<endl;
    in_file.close();
    out_file.close();
    
    
    return 0;
}

