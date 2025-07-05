#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string  str){
    if(str.empty()) return true;
    int start=0;
    int end=str.size()-1;
    while(start<end){
        if(str[start]!= str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}


int main (){
    string str="racecar";
    isPalindrome(str) ? cout<<"Yes it is a palindrome\n" : cout<<"No it is not a palindrome\n";
}

