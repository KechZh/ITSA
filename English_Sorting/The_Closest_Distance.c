#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(){
    int ncase;
    char S[100000];
    char *tok;
    scanf("%d",&ncase);
    gets(S);
    while(ncase--){
        int N[1010];
        int min=99999999;
        int top=0,i;
        fgets(S,100000,stdin);
        tok=strtok(S," \n");
        while(tok!=NULL){
            N[top++]=atoi(tok);
            tok=strtok(NULL," \n");
        }
        qsort(N,top,sizeof(int),cmp);
        for(i=1;i<top;i++)
            min=abs(N[i]-N[i-1])<min?abs(N[i]-N[i-1]):min;
        printf("%d\n",min);
    }
    return 0;
}
