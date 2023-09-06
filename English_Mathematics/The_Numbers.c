#include<stdio.h>
#include<string.h>
int main(){
    char S[20],N[10],M[10];
    char *tok;
    int i;
    while(fgets(S,20,stdin)!=NULL){
        int ans=0;
        tok=strtok(S," ");
        strcpy(N,tok);
        tok=strtok(NULL,"\n");
        strcpy(M,tok);
        for(i=0;i<=strlen(M)-strlen(N);i++)
            if(strncmp(N,M+i,strlen(N))==0)
                ans++;
        printf("%d\n",ans);
    }
}
