#include<bits/stdc++.h>
using namespace std;
int main(){
    int fre[26]={0};
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        char c=*(str.begin()+i);
        if(isupper(c))
            fre[c-'A']++;
        if(islower(c))
            fre[c-'a']++;
    }
    for(int i=0;i<26;i++){
        if(i<25)
            cout<<fre[i]<<" ";
        else
            cout<<fre[i]<<endl;
    }
    return 0;
}
