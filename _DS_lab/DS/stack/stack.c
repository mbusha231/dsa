#include <stdio.h>

void display(int stack[], int top) {
    int i;
    for (i = top; i >= 0; i--) {
        if (stack[i] == 65) {
            printf("Key found: %d\n", stack[i]);
            return;
        }
    }
    printf("Key not found\n");
}

int main() {
    int stack[] = {20, 45, 65, 75, 33, 50};
    int top = 5;
    display(stack, top);
    return 0;
}
