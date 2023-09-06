#include<stdio.h>
#include<string.h>
int main(){
    int k,n;
    int adj=0;
    while(adj==0){
        scanf("%d%d",&n,&k);
        char C[20]="\0";
        while(n>0){
            if(n==1){
                if(k==0)
                    strcat(C,"0");
                else
                    strcat(C,"1");
            }
            else if(k<1<<(n-1))
                strcat(C,"0");
            else{
                strcat(C,"1");
                k=(1<<n)-1-k;
            }
            n--;
        }
        printf("%s\n",C);
        scanf("%d",&adj);
    }
    return 0;
}
