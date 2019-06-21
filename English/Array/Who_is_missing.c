#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,a;
    char S[400000],*tok;
    int i,top=0;
    scanf("%d\n",&n);
    int A[n+1],stack[n+1];
    memset(A,0,sizeof(A));
    fgets(S,400000,stdin);
    tok=strtok(S," \n");
    while(tok!=NULL){
        a=atoi(tok);
        A[a]=1;
        tok=strtok(NULL," \n");
    }
    for(i=n;i>0;i--)
        if(A[i]==0){
            stack[top]=i;
            top++;
        }
    for(i=top-1;i>=0;i--){
        if(i!=0)
            printf("%d ",stack[i]);
        else
            printf("%d\n",stack[i]);
    }
    return 0;
}
