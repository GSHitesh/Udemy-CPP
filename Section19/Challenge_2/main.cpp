// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
void display(string s,int v){
    cout<<setw(10)<<left<<s<<" "<<setw(15)<<right<<v<<endl;
}
int evalution(string answer, string  score){
    int s{};
    for(int i{};i<score.length();i++){
        if(answer[i] == score[i])
        s++;
    }
    return s;
        
    
    
}

int main() {
    fstream fin;
    fin.open("../responses.txt");
   if(!fin)
        cerr<<"File not found"<<endl;
        
    string answer;
    string name;
    string solution;
    fin>>answer;
    int score;
    int total{};
    int no{};
    
    while(fin>>name>>solution){
        ++no;
        score = evalution(answer,solution);
        total += score;
        display(name,score);
        
        
    }
    cout<<"Average score is: "<<static_cast<double>(total)/no<<endl;
    fin.close();
    
        
            
            
        
    }

