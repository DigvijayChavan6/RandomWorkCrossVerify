#include<stdio.h>
#include<stdlib.h>
void fi();
struct stack_node{
    void* val;
    stack_node *prev;
};
struct stack{
    stack_node *top;
    int size; 
};
stack* cre(){
    stack *p=(stack*)malloc(sizeof(stack));
    p->top=NULL;
    p->size=0;
    return p;
}
void push(stack *st,int val){
    stack_node *nd=(stack_node*)malloc();
}
int main(){
    stack first;
    stack *ok=cre();
    free(ok);
    int val=93;
    push(&first,val);
    pop(&first);
    stack second;
    datatype *p;
    p=&obj;
    obj.div='A';
    obj.id=4112;
    obj.name;
    printf("enter name :");
    scanf("%s",p->name);
    printf("div is %c",p->div);
    printf("\nid id %d",p->id);
    printf("\nname is %s",p->name);

    return 0;
}
