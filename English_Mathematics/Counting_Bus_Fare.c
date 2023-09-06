#include<stdio.h>
int main(){
    int ncase=3;
    int n,m;
    int fare=0;
    while(ncase--){
        scanf("%d%d",&n,&m);
        fare+=n*m;
    }
    printf("%d\n",fare);
}
