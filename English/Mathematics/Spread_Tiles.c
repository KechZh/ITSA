#include<stdio.h>
int main(){
    int n;
    int a=2,b=3,c;
    int i;
    scanf("%d",&n);
    for(i=3;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    if(n<4)
        printf("%d\n",n);
    else
        printf("%d\n",c);
    return 0;
}
