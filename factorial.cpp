// WAP to findout the factorial of any number

#include <iostream>
using namespace std;
int main(){
    int number =0;
    cout <<"Enter a number "<<"\n";
    cin>> number;
    int fact =1;
    for(int i =1; i<=number; i++){
        fact = fact*i;
    
    }
    cout <<"factorial is ="<<fact;
}