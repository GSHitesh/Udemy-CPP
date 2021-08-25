// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main() {
    fstream fin;
    fin.open("../romeoandjuliet.txt");
    if(!fin)
        cerr<<"File not found";
    string  word1{};
    string word{};
    int count{};
    cout<<"Enter the word: ";
    cin>>word;
    while(fin>>word1){
    std::size_t found = word1.find(word);
    if (found == std::string::npos){
        
    }
        
    else
        
        count++;
    }
    cout<<"The number of times the word is present: "<<count;
    fin.close();
    
    
    cout << endl;
    return 0;
}

