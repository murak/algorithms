#include<iostream>
#include<cstdlib>
#define MAX 100

using namespace std;

struct stack {
    int a[MAX];
    int top;
};

stack s1, s2;

int pop(stack *s) {
    if(s->top == -1) {
        cout<<"\nUnderflow\n";
        exit(100);
    }
    else {
        int x = s->a[s->top];
        s->top--;
        return x;
    }
}

void push(stack *s, int x) {
    if(s->top == MAX-1) {
        cout<<"\nOverflow\n";
        exit(100);
    }   
    else {
        s->top++;
        s->a[s->top] = x;
    }
}

int dequeue() {
    int x;
    while(s1.top != 0) {
        x = pop(&s1);
        push(&s2, x);
    }
    x = pop(&s1);
    cout<<"\nDequeued "<<x<<"\n";
    while(s2.top != -1) {
        x = pop(&s2);
        push(&s1, x);
    }
}


void enqueue(int x) {
    push(&s1, x);
}

int main() {

    s1.top = -1;
    s2.top = -1;
    
    enqueue(10);
    enqueue(2);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    return 0;
}

