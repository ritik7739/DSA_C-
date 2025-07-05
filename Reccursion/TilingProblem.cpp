#include<bits/stdc++.h>
using namespace std;
int TilingProblem(int n){  //2*n
    //base case
    if(n==0 || n==1) return 1;
    //recursive case
    //for vertical placement
    int ans1=TilingProblem(n-1);
    //for horizontal placement
    int ans2= TilingProblem(n-2);

    return ans1 + ans2; 
}



int main(){
    cout<<TilingProblem(4)<<"\n"; // Output: 8
}