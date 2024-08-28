// WAP to cout how many palindrom number are there in three digit.

#include <iostream>
using namespace std;
int main(){
    int number = 0;
    int modulo = 0;
    int sum = 0;
    int tem;
    cout <<"Enter a number " <<"\n";
    cin >> number;
    tem = number;

    while(number > 0){//169
        modulo = number % 10;
        sum = (sum * 10) + modulo;
        number = number / 10; 
    }
    if(tem == sum ){
        cout <<"This number is palindrom = "<< sum <<"\n";
    }
    else{
        cout <<"This number is not palindrom = " <<sum <<"\n";
    }
    }