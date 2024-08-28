// WAP to find out the given number prime number or not 

#include <iostream>
using namespace std;
int main(){
    int number =0;
    int count = 0;
    int j;
   
    
    
    cout << "Enter a number "<<"\n";
    cin >>number;
    j =1;
   
    while( j <=number){
        if(number%1 == 0){
            count ++;
        }
        j++;
    }
    if (count == 2){
        cout <<" this is prime number= " <<number;

    }
    else{
        cout <<"this is not prime number" <<number;
    }
    return 0;

}