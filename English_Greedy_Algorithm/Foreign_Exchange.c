#include<stdio.h>
#include<string.h>
int main(){
    int t,j;
    double temp;
    int P[10],V[10]={10000,5000,2000,1000,500,100,50,10,5,1};
    int i;
    while(scanf("%d",&t)!=EOF){
        temp=t*3.7119;
        j=(int)temp;
        for(i=0;i<10;i++){
            P[i]=j/V[i];
            j=j%V[i];
        }
        for(i=9;i>=0;i--){
            if(i!=0)
                printf("%d ",P[i]);
            else
                printf("%d\n",P[i]);
        }
    }
    return 0;
}
