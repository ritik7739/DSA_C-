#include<bits/stdc++.h>
using namespace std;


//first occurance index

int firstOccur(vector<int> arr,int i,int target){
    if(i==arr.size()){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return firstOccur(arr,i+1,target);
}

int main(){
    vector<int> arr={1,2,3,3,4,5};
    int ans=firstOccur(arr,0,7);
    cout<<ans<<" "<<endl;
}