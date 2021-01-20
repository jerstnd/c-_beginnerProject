#include <iostream>
using namespace std;

bool search(int low, int high){
    int randNum = rand() % (low + high);
    bool found = false;

    //logic
    while(low <= high && !found){
        int mid = (low+high) / 2;
        if( mid == randNum){
            found = true;
        } else {
            if(randNum > mid){
                low = mid;
            } else {
                high = mid;
            }
        }
    }
    return found;
}

//test
int main() {
    cout << search(1, 99) << endl;
}
