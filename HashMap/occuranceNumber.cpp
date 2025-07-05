#include<bits/stdc++.h>
using namespace std;

int occurance(int arr[],int n,int number){
    int hash[15]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    return hash[number];
}


int main(){
    int arr[]={1,2,3,4,1,6,1,8,9,1,11,12};
    int n= sizeof(arr)/sizeof(arr[0]);

    int number=1;
    cout<<occurance(arr,n,number)<<"\n"; // Output: 1
    return 0;
}