#include<bits/stdc++.h>
using namespace std;

int power(int x,int n){
    //base case
    if(n==0) return 1;
    int halfPower=power(x,n/2);
    if( n% 2 != 0){
        return halfPower*halfPower*x;
    }
    return halfPower * halfPower;
}


int main(){
    cout<<power(2,10)<<endl;
}