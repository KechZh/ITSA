#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    for(int i=0;i<6;i++){
        int num;
        cin>>num;
        sum+=pow(num,3);
    }
    cout<<sum<<endl;
    return 0;
}
