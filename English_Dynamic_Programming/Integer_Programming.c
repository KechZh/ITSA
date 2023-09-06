#include <stdio.h>
#include <string.h>

#define MAX 50010

int visit[MAX];
int cnt = 0;

void init(){
    for(int i = 0; i < MAX; i++)
        visit[i] = -1;
    visit[0] = 0;

    cnt = 0;
}

int main(){
    int n;
    int tmp;

    while(scanf("%d", &n) && n != 0){
        init();

        for(int i = 1; i <= n; i++){
            scanf("%d", &tmp);

            for(int j = 0; j < MAX; j++)
                if(visit[j] < i && visit[j] != -1 && visit[j + tmp] == -1)
                    visit[j + tmp] = i;
        }

        for(int i = 0; i < MAX; i++)
            if(visit[i] >= 0)
                cnt++;

        printf("%d\n", cnt);
    }

    return 0;
}