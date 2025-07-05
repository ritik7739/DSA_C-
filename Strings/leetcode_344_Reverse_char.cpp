#include<bits/stdc++.h>
using namespace std;

void reverseChar(vector<char>& s){
    int start=0;
    int end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
}


int main(){
    vector<char> s={'h','e','l','l','o'};
    reverseString(s);
    for(char c:s){
        cout<<c<<"";
    }
    cout<<endl;
}