
#include "vector"
#include "iostream"
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {

    bool flower_warning = false;

    for(int i = 0;i<flowerbed.size();i++){
        if(flowerbed[i] == 1 && !flower_warning){
            i+= n;
            flower_warning = true;
        }
        if(flower_warning){
            for(int j = i;j<=i+n;j++){
                if(flowerbed[j] == 1){
                    return false;
                }
            }
            flower_warning = false;
        }



    }
    return true;


}


int main(){

    std::vector<int> v = {1,0,0,0,1};
    int n = 1;
    std::cout<<canPlaceFlowers(v,n);


}
