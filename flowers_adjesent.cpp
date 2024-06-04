
#include "vector"
#include "iostream"
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;
    int size = flowerbed.size();

    for (int i = 0; i < size; ++i) {
        if (flowerbed[i] == 0 &&
            (i == 0 || flowerbed[i - 1] == 0) && // Check previous and current are 0
            (i == size - 1 || flowerbed[i + 1] == 0)) { // Check current and next are 0
            flowerbed[i] = 1; // Mark the current position as planted
            ++count; // Increment count of flowers planted
        }
        if (count >= n) { // If enough flowers are planted
            return true;
        }
    }
    return count >= n; // Return whether enough flowers are planted
}



int main(){

    //std::vector<int> v = {1,0,0,0,1}; // n =2  // false
    //std::vector<int> v = {1,0,0,0,0,1}; // n=1 //true //

    //std::vector<int> v = {1,0,0,0,0,1}; // false // n= 2

//    std::vector<int> v ={1,0,0,0,1}; // n=1 //true

    std::vector<int> v = {0,0,1,0,1} ; // n=1 //true
    int n = 2;
    std::cout<<(canPlaceFlowers(v,n) ? "true": "false");


}
