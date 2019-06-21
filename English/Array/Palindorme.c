#include<stdio.h>
#include<string.h>
int main(){
    char S[1010];
    int i;
    while(fgets(S,1010,stdin)!=NULL){
        int ok=1;
        for(i=0;i<=strlen(S)/2;i++)
            if(S[i]!=S[strlen(S)-1-i]){
                ok=0;
                break;
            }
        if(ok)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
