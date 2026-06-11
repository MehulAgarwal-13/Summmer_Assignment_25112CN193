#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<< "Enter number of rows: " ;
    cin>> rows;

    for(int i= 1; i<= rows; i++){
        for(char j= 'A'; j< 'A'+ i; j++){
            cout<< j;
        }
        cout<< endl;
    }
    return 0;
}