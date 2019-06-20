#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    for(int i=0;i<6;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    for(int i=0;i<6;i++){
        if(i<5)
            cout<<vec.back()<<" ";
        else
            cout<<vec.back()<<endl;
        vec.pop_back();
    }
    return 0;
}
