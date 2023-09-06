#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    bool prime=true;
    for(int i=2;i<=sqrt(num);i++)
        if(num%i==0){
            prime=false;
            break;
        }
    if(prime)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
