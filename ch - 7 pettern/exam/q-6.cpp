#include<iostream>
using namespace std;
main(){
    int n,rev,last=0,i=0;
    cout << "Enter the Number :=  ";
    cin >> n;
    while(n != 0){
        i++;
        n/=10;
    }
    cout << "Digits :=  " << i;
}