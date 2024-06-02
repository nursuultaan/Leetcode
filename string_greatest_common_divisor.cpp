#include "string"
#include "iostream"
using  namespace std;


string gcdOfStrings(string str1, string str2) {
    string  res ;
    string divisor = str1.size() < str2.size() ? str2 : str1;
    string divider = str1.size() > str2.size() ? str2 : str1;


    size_t pointer_divisor = 0;
    size_t pointer_divider = 0;
    size_t res_left = 0;
    size_t res_right = 0;

    bool isDividable = true;

    while (pointer_divisor < divisor.size()){
        if(divisor[pointer_divisor] ==  divider[pointer_divider]){
            res.push_back(divider[pointer_divider]);
            res_right++;
        }else{
            if((divisor.substr(res_left,res_right) == res)){
                isDividable = true;
                res ="";
            }else{
                isDividable = false;
                return "";
            }
        }

        pointer_divisor++;
        pointer_divider++;
        if(pointer_divider >= divider.size() ){
            if(pointer_divider == divider.size()){
                return res;
            }

           pointer_divider=0;

           res="";
        }

    }

    return res;
}


int main(){
    string word1 = "ABABAB";
    string word2 = "ABAB";

    std::cout<<gcdOfStrings(word1,word2);
}
