#include <iostream>
using namespace std;

int main(){
    int  i, num, largestfactor=1;

    cout<<"Enter a number: " ;
    cin>> num;

    for( int i= 2; i <= num; i++)
    {
        while(num%i== 0){
            largestfactor=i;
            num/= i;
        }
    }
    cout<< "Largest Prime Factor= "<< largestfactor;

    return 0;
}