#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push(int item)
{
    if(top == MAX-1){
        printf("overflow");
        return;
    }
    top = top + 1;
    stack[top] = item;
    printf("%d\n", item);
}
int pop()
{
    if(top == -1){
        printf("underflow");
        return -1;
    }
    int delete_item = stack[top];
    top = top - 1;
    return delete_item;
}
void display()
{
    for(int i=top; i>=0; i++){
        printf("stack elem:", stack[i]);
    }
}
int main()
{
    push(4);
    push(6);
    push(8);

    int deleted = pop();
    if(deleted != 1){
        printf("%d\n", deleted);
    }
    return 0;
}
