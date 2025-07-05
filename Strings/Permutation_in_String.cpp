#include<bits/stdc++.h>
using namespace std;


bool sameFreq(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1,string s2){
    if(s1.length()>s2.length()){
        return false;
    }
    int freq1[26]={0};
    for(int i=0;i<s1.length();i++ ){
        freq1[s1[i]-'a']++;
    }

    int windowSize=s1.length();
    for(int i=0;i<s2.length();i++){
        int windowIdx=0 ,idx=i;
         int windowFreq[26]={0};
        while(windowIdx<windowSize && idx<s2.length()){
            windowFreq[s2[idx]-'a']++;
             windowIdx++;
            idx++;
        }
        if(sameFreq(freq1,windowFreq)){
        return true;
    }
    }
    return false;
}


int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    if(checkInclusion(s1,s2)){
        cout<<"Yes, s1 is a permutation of s2\n";
    }else{
        cout<<"No, s1 is not a permutation of s2\n";
    }
    return 0;
}