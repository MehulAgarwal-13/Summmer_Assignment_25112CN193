#include <iostream>
using namespace std;

int main(){
    int start,end,i,j;
    bool isprime;

    cout<<"Enter starting number:";
    cin>>start;
     cout<< "Enter ending number:";
     cin>>end;

     cout<< "Prime numbers between"<< start<< "and"<<end<<"are:\n";

     for(i= start; i<= end; i++)
     {
        if(i<=1)
        continue;
        isprime= true;
        for(j=2; j<=i/2; j++){
        if(i%j==0){
            isprime= false;
            break;
        }
        }
        if(isprime)
        cout<< i<< " " ;
     }
     return 0;
    }