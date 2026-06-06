#include <iostream>
using namespace std;

int main(){
    int x, n, result= 1;

    cout<< "Enter base and power: " ;
    cin>> x>> n;

    for(int i= 1; i<=n; i++){
        result= result * x;
    }
    cout<< "Result= "<< result;
    return 0;
}