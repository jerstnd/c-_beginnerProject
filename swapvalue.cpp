#include <iostream>
using namespace std;

int main(){
    // before swap value
    int value1 = 100;
    int value2 = 200;
    cout << "value1 before swap: " << value1 << endl;
    cout << "value2 before swap: " << value2 << endl;

    // swap logic
    int temp = value1;
    value1 = value2;
    value2 = temp;

    cout << "value1 after swap: " << value1 << endl;
    cout << "value2 after swap: " << value2 << endl;
    
}