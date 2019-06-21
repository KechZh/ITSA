#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;
int W[1010];
int C0[1010],C1[1010];
vector<int> S[1010];
void dfs(int n){
    int i;
    int chi;
    C0[n]=0;C1[n]=W[n];
    for(i=0;i<S[n].size();i++){
        chi=S[n][i];
        dfs(chi);
        C0[n]+=max(C0[chi],C1[chi]);
        C1[n]+=C0[chi];
    }
}
int main(){
    int ncase,n;
    int p;
    int i;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d%d",&n,&W[1]);
        for(i=1;i<=n;i++)
            S[i].clear();
        for(i=2;i<=n;i++){
            scanf("%d%d",&p,&W[i]);
            S[p].push_back(i);
        }
        dfs(1);
        printf("%d\n",max(C0[1],C1[1]));
    }
    return 0;
}
