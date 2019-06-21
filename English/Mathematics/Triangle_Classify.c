#include<stdio.h>
int triangle_type(int a,int b,int c){
    int max;
    max=a>b?a:b;
    max=max>c?max:c;
    if(max*2<a+b+c){
        int side=a*a+b*b+c*c,slope=max*max*2;
        if(side>slope)
            return 1;
        else if(side<slope)
            return 2;
        else
            return 3;
    }
    else
        return 0;
}
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int type=triangle_type(a,b,c);
    if(type==1)
        printf("acute\n");
    else if(type==2)
        printf("obtuse\n");
    else if(type==3)
        printf("right\n");
    else
        printf("invalid\n");
    return 0;
}
