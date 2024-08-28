
/* WAP to print the reverce any digit number */

#include <iostream>
using namespace std;
int main(){
    int number = 0;
    int modify = 0;
    int reverce = 0;

    cout << "Enter a any digit number "<<"\n";
    cin >> number;
    while(number > 0){
        modify = number%10;
        reverce = reverce + modify;
        number = number/10;
    }
    cout << reverce;
}