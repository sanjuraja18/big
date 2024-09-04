
/* WAP to print the reverce any digit number */

#include <iostream>
using namespace std;
int main(){
    int number ;
    int modify ;
    int reverce = 0;

    cout << "Enter a any digit number "<<"\n";
    cin >> number;
    while(number > 0){
        modify = number%10;
        reverce = reverce*10 + modify;
        number = number/10;
    }
    cout << reverce;
}