#include <iostream>
using namespace std;

// encrypting with caesar cypher algorithm

int main() {
    int x;
    char str[100];

    cout << "enter a string: \t";
    cin >> str;    

    cout << "\n Choose the following options: \n";
    cout << "1 = Encrypt the string. \n";
    cout << "2 = Decrypt the string. \n";
    cin >> x;

    switch(x){
        //encrypting
        case 1:
            for(int i=0; (i<100 && str[1] != '\0'); i++){
                str[i] = str[i] + 2; 
            }
            cout << "\n Encrypted string: " << str << endl;
            break;

        //decrypting
        case 2:
            for(int i=0; (i<100 && str[1] != '\0'); i++){
            str[i] = str[i] - 2; 
            }
            cout << "\n Decrypted string: " << str << endl;
            break;

        default:
            cout << "\nInvalid Input !!!\n";
    }

    return 0;
}
