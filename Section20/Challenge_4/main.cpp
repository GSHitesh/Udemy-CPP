// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool is_palindrome(const std::string& s)

{
    queue <char> s1;
    stack <char> s2;
    for(auto i : s){
        if(isalpha(i)){
        i = toupper(i);
        s1.push(i);
        s2.push(i);
    }
    }
    
    while(!s1.empty()){
        char a = s1.front();
        char b = s2.top();
        if(a != b)
            return false;
            s1.pop();
            s2.pop();
        
    }
    // You must implement this function.
    // Since we are learning the STL - use a stack and a queue to solve the problem.
    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}