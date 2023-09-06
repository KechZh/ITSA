#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct word{
    char c;
    struct word *next;
}word;
word *first=NULL,*last,*temp,*left,*right;
char C[20],*tok;
int len=0;
int k;
void adjust(int mod){
    tok=strtok(NULL," ");
    if(strcmp(tok,"left")==0)
        k=1;
    else if(strcmp(tok,"right")==0){
        k=mod==1?len+1:len;
    }
    else
        k=atoi(tok);
}
void insert(){
    char in[10];
    int i;
    adjust(1);
    tok=strtok(NULL,"\n");
    strcpy(in,tok);
    temp=malloc(sizeof(word));
    temp->c=in[0];
    if(first==NULL){
        first=temp;
        temp->next=first;
        last=first;
    }
    else{
        left=last;
        for(i=0;i<k-1;i++)
            left=left->next;
        right=left->next;
        left->next=temp;
        temp->next=right;
    }
    if(k==1)
        first=temp;
    if(k==len+1)
        last=temp;
    len++;
}
void delete(){
    int i;
    adjust(2);
    left=last;
    for(i=0;i<k-1;i++)
        left=left->next;
    temp=left->next;
    right=temp->next;
    left->next=right;
    free(temp);
    if(k==1)
        first=right;
    if(k==len)
        last=left;
    len--;
}
int main(){
    int i;
    while(fgets(C,20,stdin)!=NULL){
        tok=strtok(C," ");
        if(strcmp(tok,"insert")==0)
            insert();
        if(strcmp(tok,"delete")==0)
            delete();
        for(i=0;i<len;i++){
            printf("%c",first->c);
            first=first->next;
        }
        printf(" %d\n",len);
        printf("%c %c\n",first->c,last->c);
    }
    return 0;
}
