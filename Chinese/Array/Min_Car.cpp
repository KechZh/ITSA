#include<bits/stdc++.h>
using namespace std;
int main(){
    int time[25]={0};
    int n;
    cin>>n;
    while(n--){
        int s,d;
        cin>>s>>d;
        for(int i=s;i<d;i++)
            time[i]++;
    }
    int car=INT_MIN;
    for(int i=0;i<25;i++)
        car=max(time[i],car);
    cout<<car<<endl;
    return 0;
}
