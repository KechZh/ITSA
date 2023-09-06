#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    unsigned int time,tot;
    int i;
    scanf("%d",&n);
    int T[n];
    for(i=0;i<n;i++)
        scanf("%d",&T[i]);
    sort(T,T+n);
    for(i=0,tot=0;i<n;i++){
        if(i==0)
            time=T[i];
        else
            time=T[i-1]+T[i];
        tot+=time*(n-i);
    }
    printf("%u\n",tot);
    return 0;
}

