#include<bits/stdc++.h>
using namespace std;
int rec(int n){
    if(n==0||n==1)
        return n+1;
    else
        return rec(n-1)+rec(n/2);
}
int main(){
    int num;
    cin>>num;
    int ans=rec(num);
    cout<<ans<<endl;
    return 0;
}
