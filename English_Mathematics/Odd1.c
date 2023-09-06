#include<stdio.h>
int main(){
    int a,b;
    int i;
    while(scanf("%d%d",&a,&b)!=EOF){
        int sum=0;
        for(i=a%2==1?a:a+1;i<=b;i+=2)
            sum+=i;
        printf("%d\n",sum);
    }
    return 0;
}
