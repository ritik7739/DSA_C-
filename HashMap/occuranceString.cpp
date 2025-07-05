#include<bits/stdc++.h>
using namespace std;

int occuranceString(string s,char ch){
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    return hash[ch];
}

int main(){
    string s="ritik";
    char ch='i';
    cout<<occuranceString(s,ch)<<'\n';
}



