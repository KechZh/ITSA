#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    if(str2.find(str1)!=string::npos)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
