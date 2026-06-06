#include <iostream>
using namespace std;

int main(){
    int num, temp, rem, sum=0, fact;
    cout<<"Enter a number: " ;
    cin>>num;
     
    temp= num;

    while(temp>0){
        rem= temp%10;
        fact= 1;
         for(int i= 1; i<=rem; i++){
            fact*= i;
         }
         sum+= fact;
         temp/=10;

    }
    if(sum== num)
    cout<<num<<"is a Strong number."<< endl;
    else 
    cout<<num<<"is not a Strong number."<<endl;

    return 0;
}