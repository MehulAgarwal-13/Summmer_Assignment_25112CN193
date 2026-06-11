#include <iostream>
using namespace std;

    int sum(int a, int b){
        return a+b;
    }
    int main(){
        int x,y;
        cout<< "Enter two numbers: " ;
        cin>> x>> y;
        cout<< "sum = " << sum(x,y);
    }
