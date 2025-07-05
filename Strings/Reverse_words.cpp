   #include<bits/stdc++.h>
   using namespace std;

   string reverseString(string s){
    
    int n=s.length();
    string ans="";
    reverse(s.start(),s,end());
    for(int i=0;i<n;i++){
        string word=""
        while(i<n && s[i]!=''){
            word+=s[i];
            i++;
        }
    }

   }