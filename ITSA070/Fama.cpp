#include<bits/stdc++.h>
using namespace std;
int main(){
    int ncase;
    cin>>ncase;
    while(ncase--){
        int n,m;
        cin>>n>>m;
        bool weight[200000]={true};
        int max_weight=0;
        while(n--){
            int fama;
            cin>>fama;
            for(int i=max_weight;i>=0;i--)
                if(weight[i])
                    weight[i+fama]=true;
            max_weight+=fama;
        }
        int ans=0;
        while(m--){
            int item;
            cin>>item;
            if(weight[item])
                ans++;
        }
        cout<<ans<<endl;;
    }
    return 0;
}
