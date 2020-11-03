#include<iostream>
#include<stdlib.h>
using namespace std ;

typedef struct node {
    int data ;
    struct node * next ;
} Node ;

Node * head = NULL ;
Node * tail = NULL ;

Node * createNode( int data) {
  
    Node * temp = (Node *)malloc(sizeof(Node));
    temp->data = data ;
    temp->next = NULL ;
    return temp ;
}
void addItemLast(int data) {
    Node * temp = NULL ;
    if ( head == NULL) {
        head = createNode(data);
        tail = head ;
        return;   
    }
    temp = createNode(data);
    tail->next = temp;
    tail = temp;
}

void addItemFirst(int data) {
    Node * temp = NULL ;
    if ( head == NULL) {
        head = createNode(data);
        tail = head ;
        return;   
    }
    temp = createNode(data);
    temp->next = head;
    head = temp;
}

void deleteFirst() {
    Node * temp = head ;
    head = head->next ;
    free(temp);
}

void deleteLast() {
    if ( head == NULL) {
        return ;
    }

    if ( head->next == NULL) {
        free(head);
        head = NULL ;
        tail = NULL ; 
        return ;
    }
    Node * temp = head ;
    while(temp->next != tail) {
        temp = temp->next ;
    }
    Node * dummy = tail ;
    tail = temp ;
    tail->next = NULL;
    free(dummy);
    
}

Node * reverseLL() {
    Node * curr = head ;
    Node * prev = NULL ;
    Node * nextNode = NULL ;

    while(curr) {
        nextNode = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = nextNode ;
    }
    return prev ;
}

Node * midPoint() {
    Node *sp = head ;
    Node *fp = head ;
    while ( fp && fp->next) {
        sp = sp->next ;
        fp = fp->next ;
        if ( fp) fp = fp->next ;
    }
    return sp ;
}

int loopDetect() {
    Node * sp = head ;
    Node * fp = head ;
    while ( fp && fp->next) {
        sp = sp->next ;
        fp = fp -> next ;
        if ( fp) fp = fp->next ;
        if ( sp == fp) return 1 ;
    }
    return 0 ;
}

void print() {
    Node * iterBoy = head ;
    while( iterBoy) {
        cout << iterBoy->data << ' ' ;
        iterBoy = iterBoy->next ;
    }
}

void printRev(Node * iterBoy){
    if ( !iterBoy) return ;
    printRev(iterBoy->next);
    cout << iterBoy->data << ' ';
}



int main() {
    addItemFirst(10);
    addItemLast(30);
    addItemFirst(40);
    addItemFirst(50);
    print();
    cout << endl ;
    cout << midPoint()->data << endl ;
    cout << loopDetect();
}    
   
