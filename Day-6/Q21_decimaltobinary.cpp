#include <iostream>
using namespace std;

int main(){ 
   int decimal, binary[32], i= 0;
   cout<< "Enter a decimal number: " ;
   cin>> decimal ;

   if(decimal== 0){
    cout<< "Binary equivalent: 0" ;
    return 0;
   }
   while(decimal>0){
    binary[i]= decimal%2;
    decimal= decimal/2;
    i++;
   }
   cout<< "Binary equivalent: ";
   for(int j= i-1; j>= 0; j--){
    cout<<binary[j];
   }
    
    return 0;
}