#include<bits/stdc++.h>
using namespace std;

//sorted array check

bool isSorted(int arr[],int n,int i=0){
    if(i == n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr,n,i+1);
   
}


int main(){
    int arr[]={1,2,3,4,5};   //sorted array
    int arr2[]={1,5,4,5,3}; //unsorted array

    cout<< isSorted(arr2,5) <<endl;
}