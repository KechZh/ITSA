#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
typedef struct team{
    int num;
    int score;
}team;
bool cmp(team a,team b){
    return a.score>b.score;
}
int main(){
    char R[10];
    int rou;
    team T[3];
    int i;
    scanf("%d",&rou);
    for(i=0;i<3;i++){
        T[i].num=i+1;
        T[i].score=0;
    }
    while(rou--)
        for(i=0;i<3;i++){
            scanf("%s",R);
            if(strcmp(R,"correct")==0)
                T[i].score+=10;
            else if(strcmp(R,"wrong")==0)
                T[i].score-=10;
        }
    sort(T,T+3,cmp);
    for(i=0;i<3;i++){
        if(i==2)
            printf("(%d,%d)\n",T[i].num,T[i].score);
        else if(T[i+1].score!=T[i].score)
            printf("(%d,%d)\n",T[i].num,T[i].score);
        else
            printf("(%d,%d)",T[i].num,T[i].score);
    }
    return 0;
}

