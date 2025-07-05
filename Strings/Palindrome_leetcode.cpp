#include<bits/stdc++.h>
using namespace std;

bool isnumeric(char ch){
    if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
         return true;
    }
    return false;
}


bool isPalindrome(string str){
    int start=0,end=str.size()-1;
    while(start<end){
        if(!isnumeric(str[start])){
            start++;
            continue;
        }
        if(!isnumeric(str[end])){
            end--;
            continue;
        }
        if(tolower(str[start])!=tolower(str[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}


int main (){
    string s ="A man, a plan, a canal: Panama";
    isPalindrome(s) ? cout<<"Yes it is a palindrome\n" : cout<<"No it is not a palindrome \n";
}
