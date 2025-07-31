#include<iostream>
using namespace std;
main(){
    int n, last;
    cout << "Enter the Number :=  ";
    cin >> n;
    last = n % 10;
    while(n >= 10){
        n/=10;
    }
    cout << "Addition :=  " << last+n;
}
