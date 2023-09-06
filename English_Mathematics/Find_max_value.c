#include<stdio.h>
int main(){
    int n;
    int max=0;
    while(scanf("%d",&n)!=EOF)
        max=n>max?n:max;
    printf("%d\n",max);
    return 0;
}
