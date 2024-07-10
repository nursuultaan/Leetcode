#include <iostream>
#include <string>
#include "stack"
#include "set"

using namespace std;


string reverse_vowels(string str) {
    std::stack<char> stack ;
    std::set<char> vowels_set= {'a','e','i','o','u'};


    for(int i = 0;i<str.length();i++){
        if(vowels_set.find((char) tolower(str[i])) != vowels_set.end()){
            stack.push(str[i]);
        }
    }


    for(int i = 0;i<str.length();i++){
        if(vowels_set.find((char) tolower(str[i])) != vowels_set.end()){
            if(!stack.empty() ){
                char ch = stack.top();
                stack.pop();
                str[i] = ch;

            }
        }

    }

    return str ;
}

int main() {
    string test1 = "hello";

    cout << reverse_vowels(test1);

    return 0;
}
