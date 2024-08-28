// WAP to accept tow number from user and swap three value.
#include <iostream>
using namespace std;
int main(){
    int number1 =0;
    int number2 =0;
    int tem = 0;

    cout <<"Enter a number1 "<<"\n";
    cin >>number1;
    cout <<"Enter a number2 " <<"\n";
    cin >> number2;

    tem = number1;
    number1 = number2;
    number2 = tem;

    cout <<" Number1 = "<<number1 <<"\n";
    cout <<" Number = " <<number2 <<"\n";
}