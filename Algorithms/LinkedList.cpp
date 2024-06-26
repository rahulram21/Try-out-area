#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n){
    struct Node *t, *last;
    first = new struct Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<n; i++){
        t = new struct Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
};

void display(struct Node *p){
    while (p != NULL){
        cout << p->data <<" ";
        p = p->next;
    }
}

int main(){
    int A[5] = {3, 6, 2, 8, 5};
    create(A, 5);
    display(first);
}