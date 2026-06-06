#include <iostream>
using namespace std;

int main(){
    int binary, decimal= 0, remainder, power=1;
    cout<< "Enter a binary number: " ;
    cin>> binary;

    while(binary>0){
        remainder= binary% 10;
        decimal= decimal + (remainder* power);
        power= power*2;
        binary= binary/10;
        }
        cout<<"Decimal equivalent= "<< decimal;

        return 0;
}