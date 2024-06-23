#include <cstdio>
#include "Queue.h"
#include "Stack.h"

void menu(){
    printf("\n");
    printf("1 - add to queue\n");
    printf("2 - get first value from queue\n");
    printf("3 - delete first value from queue\n");
    printf("4 - check if queue if empty\n");
    printf("5 - check if queue is full\n");
    printf("6 - put value on stack\n");
    printf("7 - delete value from stack\n");
    printf("8 - get top value from stack\n");
    printf("9 - check if stack is empty\n");
    printf("10 - check size of stack\n");
    printf("11 - EXIT\n");
    printf("\n");
}

int main(){
    int temp = 0;
    int option = 0;
    int exited = 0;
    printf("QUEUE - static table implementation\n");
    while (!exited){
        menu();
        scanf("%d", &option);


        switch (option){
            case 1: {
                if (!isQueueFull()) {
                    printf("Give value: ");
                    scanf("%d", &temp);
                    Insert(temp);
                } else {
                    printf("Queue is full!!!\n\n");
                }

                break;
            }

            case 2: {
                if (!isQueueEmpty()) {
                    temp = First();
                    printf("First value: %d", temp);
                } else {
                    printf("Queue is empty!!!\n\n");
                }

                break;
            }

            case 3: {
                if (!isQueueEmpty()) {
                    temp = Delete();
                    printf("Deleted value: %d", temp);
                } else {
                    printf("Queue is empty!!!\n\n");
                }
                break;
            }

            case 4: {
                if (isQueueEmpty()) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue is NOT empty.\n");
                }
                break;
            }

            case 5: {
                if (isQueueFull()) {
                    printf("Queue is full.\n");
                } else {
                    printf("Queue is NOT full.\n");
                }
                break;
            }

            case 6: {
                printf("Give value: ");
                scanf("%d", &temp);
                push(temp);
                break;
            }

            case 7: {
                int stack_value = pop();
                printf("Popped value from stack: %d\n", stack_value);
                break;
            }

            case 8: {
                int top_value = top();
                printf("Top value from stack: %d\n", top_value);
                break;
            }

            case 9: {
                if (isEmpty()) {
                    printf("Stack is empty");
                } else {
                    printf("Stack is NOT empty");
                }
                break;
            }

            case 10: {
                int stack_size = size();
                printf("Stack size: %d", stack_size);
                break;
            }

            case 11: {
                exited = 1;
                break;
            }

            default: {
                printf("Incorrect input.\n\n");
                break;
            }
        }
    }

    return 0;
}