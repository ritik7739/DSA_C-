#include<bits/stdc++.h>
using namespace std;

//solving using two pointer apporoach

vector<int> TwoPairSum(vector<int> arr,int target){
    int start=0,end=arr.size()-1;
    vector<int> ans;
    int currSum=0;
    while(start<end){
        currSum=arr[start]+arr[end];
        if(currSum==target){
            ans.push_back(start+1);
            ans.push_back(end+1);
            return ans;
        }else if(currSum>target){
            end--;
        }else{
            start++;
        }
    }
    return ans;
}

int main(){
    vector<int> arr={2,7,11,15};
    int target=9;
    vector<int> ans=TwoPairSum(arr,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}