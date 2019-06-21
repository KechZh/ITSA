#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    string bin;
    if(num>=0)
        bin="00000000";
    else{
        bin="11111111";
        num+=128;
    }
    for(int i=1;i<=7;i++){
        *(bin.end()-i)=num%2+'0';
        num/=2;
    }
    cout<<bin<<endl;
    return 0;
}
