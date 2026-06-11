#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<< "Enter number of rows: ";
    cin>> rows;
 
    for(int i= 0; i< rows; i++){
        char ch= 'A' +i ;
    for(int j = 0; j<= i; j++){
        cout<< ch;
    }
    cout<< endl;    
}
return 0;
}