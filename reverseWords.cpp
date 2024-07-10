#include <vector>
#include "iostream"
#include "stack"
#include "string"
using namespace std;


string reverseWords(string s) {


    std::stack<string> stack;
    for(size_t i =0;i<s.length();i++){
        if(s[i]!=' '){
            size_t j = i;
            string word_collector ;
            while (s[j]!=' ' && j<s.length()){
                word_collector.push_back(s[j]);
                j++;
            }
            if(!(stack.empty())) {
                word_collector.append(" ");
            }
            stack.push(word_collector);

            i=j;

            //std::cout<<word_collector;
        }



    }
    string res;

    while (!stack.empty())
    {
        res+=(stack.top()) ;
        stack.pop();
    }

    return res;

}

int main(){

    string test1 ="the sky is blue";
    std::cout<<reverseWords(test1);
    return 0;
}

