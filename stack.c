#include <stdio.h>
#include <string.h>
#include<math.h>
#include<stdlib.h>
#define max 10
typedef struct{
    int top;
    int data[max];
}stack;
void push(stack* s,int item){
    if (s->top <max)
    {
        s->data[s->top]=item;
        s->top++;
    }
    else{
        printf("Stack is full\n");
    }
    
}
int pop(stack* s){
    int item;
    if (s->top==0)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else{
        s->top--;
        item=s->data[s->top];
    }
    
 return item;
}
int main() {
    stack s1;
    s1.top=0;
    push(&s1,1);
    push(&s1,3);
    push(&s1,5);
   int item=pop(&s1);
     printf("%d\n",item);
    item=pop(&s1);
     printf("%d\n",item);
   item=pop(&s1);
     printf("%d\n",item);
    item=pop(&s1);
     printf("%d\n",item);

    
return 0;
}