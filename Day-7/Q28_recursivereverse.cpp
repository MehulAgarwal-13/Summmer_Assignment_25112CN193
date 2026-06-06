#include <iostream>
using namespace std;


    int reversenum(int n, int rev=0){
        if(n==0)
        return rev;
        return reversenum(n/10 , rev*10+n %10);
    }
    int main(){
        int n;

        cout<< "Enter a number: " ;
        cin>>n;

        cout<< "Reversed number= "<< reversenum(n);
      return 0;
    }
