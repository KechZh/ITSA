#include<stdio.h>
int main(){
    char B[10],T[10]={"\0"};
    int con=0;
    int i,j;
    while(con!=-1){
        scanf("%s",B);
        int n=0;
        int time=0;
        for(i=7,j=0;i>=0;i--,j++)
            if(B[j]=='1')
                n+=1<<i;
        while(n>1){
            if(n%2==0)
                n/=2;
            else
                n=(n+1)/2;
            time++;
        }
        for(i=3,j=0;i>=0;i--,j++){
            if(time>=1<<i){
                T[j]='1';
                time-=1<<i;
            }
            else
                T[j]='0';
        }
        printf("%s\n",T);
        scanf("%d",&con);
    }
    return 0;
}
