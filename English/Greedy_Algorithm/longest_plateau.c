#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char S[100],*tok;
    int n,now;
    int time,max;
    while(fgets(S,100,stdin)!=NULL){
        now=0;max=0;
        tok=strtok(S," \n");
        while(tok!=NULL){
            n=atoi(tok);
            if(n!=now){
                now=n;
                time=1;
            }
            else
                time++;
            max=time>max?time:max;
            tok=strtok(NULL," \n");
        }
        printf("%d\n",max);
    }
    return 0;
}
