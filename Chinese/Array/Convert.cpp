#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,base;
    stack<int> sta;
    cin>>num>>base;
    int tmp=num;
    while(tmp){
        sta.push(tmp%base);
        tmp/=base;
    }
    cout<<"The base "<<base<<" representation of "<<num<<" is ";
    while(!sta.empty()){
        int dig=sta.top();
        if(dig<10)
            cout<<dig;
        else
            cout<<(char)(dig-10+'a');
        sta.pop();
    }
    cout<<"."<<endl;
    return 0;
}
