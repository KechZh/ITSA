#include<stdio.h>
#include<string.h>
int main(){
    char S[100000];
    int i;
    fgets(S,100000,stdin);
    for(i=0;i<strlen(S)-1;i++)
        S[i]-=3;
    printf("%s",S);
    return 0;
}
