#include<bits/stdc++.h>
using namespace std;
int main(){
    int second,minute,hour,day;
    cin>>second;
    minute=second/60;
    second=second%60;
    hour=minute/60;
    minute=minute%60;
    day=hour/24;
    hour=hour%24;
    cout<<day<<" days"<<endl;
    cout<<hour<<" hours"<<endl;
    cout<<minute<<" minutes"<<endl;
    cout<<second<<" seconds"<<endl;
    return 0;
}
