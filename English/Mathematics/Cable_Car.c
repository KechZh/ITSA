#include<stdio.h>
int main(){
    int G[6];
    int max=0;
    int find=0;
    int x,y;
    int i,j;
    for(i=0;i<6;i++)
        scanf("%d,",&G[i]);
    for(i=1;i<6;i++){
        for(j=0;j<i;j++)
            if(G[i]+G[j]>max&&G[i]+G[j]<=6){
                max=G[i]+G[j];
                x=j;y=i;
                find=1;
            }
        if(find)
            break;
    }
    printf("The best combination is %d, %d, Complaint=%d\n",G[x],G[y],y-1);
    return 0;
}
