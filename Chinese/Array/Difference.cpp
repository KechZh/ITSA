#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    vector<int> vec;
    cin>>str;
    for(int i=0;i<str.size();i++)
        if(*(str.begin()+i)>='0'&&*(str.begin()+i)<='9'){
            int num=*(str.begin()+i)-'0';
            vec.push_back(num);
        }
    sort(vec.begin(),vec.end());
    int max_value=0,min_value=0;
    for(int i=0;i<vec.size();i++){
        max_value=max_value*10+*(vec.end()-1-i);
        min_value=min_value*10+*(vec.begin()+i);
    }
    cout<<max_value-min_value<<endl;
    return 0;
}
