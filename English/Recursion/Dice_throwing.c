#include<stdio.h>
#include<math.h>
int p,q;
void find(int n,int tot){
    if(tot<=0)
        return;
    if(n==0){
        if(tot>0)
            p++;
        return;
    }
    find(n-1,tot-1);
    find(n-1,tot-2);
    find(n-1,tot-3);
    find(n-1,tot-4);
    find(n-1,tot-5);
    find(n-1,tot-6);
}
int gcd(int a,int b){
    int div;
    while(1){
        div=a%b;
        a=b;
        b=div;
        if(a%b==0)
            break;
    }
    return div;
}
int main(){
    int n,min;
    int r;
    while(1){
        scanf("%d%d",&n,&min);
        if(n==0&&min==0)
            break;
        p=0;
        q=pow(6,n);
        find(n,min);
        p=q-p;
        if(p==0||p==q)
            printf("%d\n",p/q);
        else{
            r=gcd(p,q);
            printf("%d/%d\n",p/r,q/r);
        }
    }
    return 0;
}
