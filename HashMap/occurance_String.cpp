#include<bits/stdc++.h>
using namespace std;

int occuranceString(string s, char ch){
    map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return mpp[ch];
}

int main(){
    string s="ritik";
    char ch='i';
    cout<<occuranceString(s,ch)<<endl;
}