#include<bits/stdc++.h>
using namespace std;

int FriendsPair(int n){
    //base case

    if(n==1 || n==2) return n;

    //for single

    int ans1 = FriendsPair(n-1);

    //for pair
    int ans2 =(n-1)*FriendsPair(n-2);

    return ans1 + ans2;
}


int main(){
    cout<<FriendsPair(0)<<"\n";
}