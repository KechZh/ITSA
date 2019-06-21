#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int B[20];
int top=0;
int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int change(int v){
    int i;
    int find=0;
    for(i=0;i<top;i++)
        if(B[i]==v){
            find=1;
            break;
        }
    if(find)
        return 1;
    else{
        int t,min=99999999;
        for(i=1;i<=v/2;i++){
            t=change(i)+change(v-i);
            if(t<min)
                min=t;
        }
        return min;
    }
}
int main(){
    char S[100];
    char *tok;
    int b,v;
    int min;
    fgets(S,100,stdin);
    tok=strtok(S," \n");
    while(tok!=NULL){
        b=atoi(tok);
        B[top++]=b;
        tok=strtok(NULL," \n");
    }
    qsort(B,top,sizeof(int),cmp);
    while(scanf("%d",&v)!=EOF){
        min=change(v);
        printf("%d\n",min);
    }
    return 0;
}
