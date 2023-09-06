#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int ncase,n,m;
    int i,j;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d%d",&n,&m);
        int I[n],S[m];
        int min=0;
        for(i=0;i<n;i++)
            scanf("%d",&I[i]);
        for(i=0;i<m;i++)
            scanf("%d",&S[i]);
        sort(I,I+n);
        sort(S,S+m);
        for(i=0,j=0;1;i++){
            if(S[i]>=I[j]){
                min+=S[i];
                j++;
            }
            if(j==n){
                printf("%d\n",min);break;
            }
            if(i==m&&j<n){
                printf("-1\n");break;
            }
        }
    }
    return 0;
}
