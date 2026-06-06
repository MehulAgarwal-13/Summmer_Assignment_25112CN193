#include <iostream>
using namespace std;

int main(){
    int n, sum= 0, temp, r;
    cout<<"Enter a number: ";
    cin>>n;
    
    temp= n;

    while(temp>0){
        r= temp%10;
        sum += r*r*r;
        temp/=10;
    }
    if(sum==n)
    cout<<"Armstrong number";
    else
    cout<<"Not Armstrong number";
    return 0;
}