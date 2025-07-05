#include<bits/stdc++.h>
using namespace std;

void printNumberNto1(int n){
    if(n==0) return ;
    cout<<n<<" ";
    printNumberNto1(n-1);
}

int main(){
    printNumberNto1(10);  
    cout <<endl;
    return 0;
}