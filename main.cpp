#include <cstdio>
#include "Queue.h"

void menu(){
    printf("\n");
    printf("1 - add to queue\n");
    printf("2 - get first value from queue\n");
    printf("3 - delete first value from queue\n");
    printf("4 - check if queue if empty\n");
    printf("5 - check if queue is full\n");
    printf("6 - EXIT\n");
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
            case 1:
                if ( !isQueueFull() ){
                    printf("Give value: ");
                    scanf("%d", &temp);
                    Insert(temp);
                }
                else {
                    printf("Queue is full!!!\n\n");
                }

                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = First();
                    printf("First value: %d", temp);
                }
                else {
                    printf("Queue is empty!!!\n\n");
                }

                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = Delete();
                    printf("Deleted value: %d", temp);
                }
                else {
                    printf("Queue is empty!!!\n\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("Queue is empty.\n");
                }
                else {
                    printf("Queue is NOT empty.\n");
                }
                break;

            case 5:
                if (isQueueFull()) {
                    printf("Queue is full.\n");
                }
                else {
                    printf("Queue is NOT full.\n");
                }
                break;

            case 6:
                exited = 1;
                break;

            default:
                printf("Incorrect input.\n\n");
                break;
        }
    }

    return 0;
}