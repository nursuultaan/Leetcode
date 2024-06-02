#include "string"
#include "iostream"
using  namespace std;
string mergeAlternately(const string word1,const string word2) {
    int length =  max(word1.size(), word2.size());

    std::cout<<length<<"\n";
    size_t index = 0;
    string res ;

    for (int i = 0; i < length; ++i) {

        if(word1.size() > i){
            res += word1[i] ;
        }

        if(word2.size() > i){
            res +=  word2[i] ;
        }


    }
    std::cout<<res<<"\n";

    return res;
}

int main(){
    string word1 = "ab";
    string word2 = "pqrs";

    mergeAlternately(word1,word2);


    return 0;
}