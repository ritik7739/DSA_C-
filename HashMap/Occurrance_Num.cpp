#include<bits/stdc++.h>
using namespace std;


int occuranceNUm(int arr[],int n,int number){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
    cout<<it.first<<"->"<<it.second<<"\n";
}
    return mpp[number];
}

int main(){
    int arr[]={1,2,3,1,2,3,2,1,1,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int number=1;
    cout<<occuranceNUm(arr,n,number)<<"\n";

}