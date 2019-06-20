#include<bits/stdc++.h>
using namespace std;
int main(){
    int word[26]={0};
    int n;
    cin>>n;
    while(n--){
        char c;
        cin>>c;
        word[c-'a']++;
    }
    for(int i=0;i<26;i++)
        if(word[i])
            cout<<(char)('a'+i)<<" "<<word[i]<<endl;
    return 0;
}
