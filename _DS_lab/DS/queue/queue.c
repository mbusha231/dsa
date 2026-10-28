#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = 0, rear = -1;

void reverse(int k, int n) {
    int stack[SIZE];
    int top = -1;
    int i, temp;
    if (k < 1 || k > n) {
        printf("Invalid k\n");
        return;
    }
    for (i = 0; i < k; i++) {
        stack[++top] = queue[front++];
    }
    while (top != -1) {
        queue[++rear] = stack[top--];
    }
    for (i = 0; i < n - k; i++) {
        queue[++rear] = queue[front++];
    }
    front = 0;
    rear = n - 1;
}

void display(int n) {
    int i;
    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int n = 5, k = 3;
    int i;
    int arr[] = {10, 20, 30, 40, 50};
    for (i = 0; i < n; i++) {
        queue[++rear] = arr[i];
    }
    printf("Original queue: ");
    display(n);
    reverse(k, n);
    printf("Queue after reversing first %d elements: ", k);
    display(n);
    return 0;
}
