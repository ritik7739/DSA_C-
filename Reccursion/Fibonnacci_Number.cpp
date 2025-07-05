#include<bits/stdc++.h>
using namespace std;

int fibbonacciNUmber(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibbonacciNUmber(n-1)+fibbonacciNUmber(n-2);
}


int main(){
    int fibbbo=fibbonacciNUmber(5);
    cout<<fibbbo<<endl;
}