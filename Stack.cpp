#include "Stack.h"

#define MAX_SIZE 5
int stack[MAX_SIZE] = {0};
int stack_size = 0;

void push(int value) {
    if (stack_size == MAX_SIZE) {
        return;
    }
    stack[stack_size] = value;
    stack_size++;
}
int pop(){
    if (stack_size == 0) {
        return 0;
    }
    int value = stack[stack_size];
    stack_size--;
    return value;
}
int top(){
    if (stack_size == 0) {
        return 0;
    }
    return stack[stack_size];
}
int isEmpty(){
    if (stack_size == 0){
        return 1;
    } else {
        return 0;
    }
}
int size(){
    return stack_size;
}
