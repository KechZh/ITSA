#include<bits/stdc++.h>
using namespace std;
int palindrome(string str){
    for(int i=0;i<str.size()/2;i++){
        char a=*(str.begin()+i);
        char b=*(str.end()-1-i);
        if(a!=b)
            return 0;
    }
    return 1;
}
int main(){
    string str;
    cin>>str;
    int p=palindrome(str);
    if(p)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
