#include<stdio.h>
#include<algorithm>
using namespace std;
typedef struct job{
    int time;
    int dead;
}job;
bool cmp(job a,job b){
    return a.dead<b.dead;
}
int main(){
    int ncase,n;
    int i;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&n);
        job J[n];
        int tot=0;
        int ok=1;
        for(i=0;i<n;i++)
            scanf("%d",&J[i].time);
        for(i=0;i<n;i++)
            scanf("%d",&J[i].dead);
        sort(J,J+n,cmp);
        for(i=0;i<n;i++){
            tot+=J[i].time;
            if(tot>J[i].dead){
                ok=0;
                break;
            }
        }
        if(ok)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

