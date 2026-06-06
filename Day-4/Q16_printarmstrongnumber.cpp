#include <iostream>
using namespace std;

int main(){
    int start,end,n,temp,r,sum;

    cout<<"Enter range: ";
    cin>>start>>end;

    for(n= start; n<=end; n++){
        temp=n;
        sum=0;
        while(temp>0){
            r= temp%10;
            sum+= r*r*r;
            temp/=10;
        }
        if(sum== n)
        cout<<n<<" " ;

    }
    return 0;
}