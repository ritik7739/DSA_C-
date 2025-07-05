#include<bits/stdc++.h>
using namespace std;

int sumonNNaturalNumber(int n){
    if(n==0) return 0;
    return n+sumonNNaturalNumber(n-1);
}


int main(){
    int sum=sumonNNaturalNumber(20);
    cout<<sum<<endl;
}