#include "vector"
#include "iostream"
using namespace std;


vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int max = -1;
    for(int i = 0;i<candies.size();i++){
        if(max<candies[i]){
            max = candies[i];
        }
    }
    std::cout<<max<<"\n";

    for(int kid : candies){

    }
}


int main(){
    vector<int> v = {2,3,5,1,3};
    int num_kendies = 3;
    kidsWithCandies(v,num_kendies);


    return 0;
}