#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std ;

typedef struct tree{
    char data ;
    struct tree * left ;
    struct tree * right ;
} Tree ;

Tree * root = NULL ; 
Tree * tRoot = NULL ;

Tree * createNode( char data) {
  
    Tree * temp = (Tree *)malloc(sizeof(Tree));
    temp->data = data ;
    temp->left = NULL ;
    temp->right = NULL ;
    return temp ;
}
void helperFunction() {
    root = createNode('A');
    root->left = createNode('B');
    root->right = createNode('C');

    tRoot = root -> left ;
    tRoot->left = createNode('D');
    tRoot->right = createNode('E');

    tRoot = root -> right ;
    tRoot->left = createNode('F');
    tRoot->right = createNode('G');
}

void preOrder( Tree * root) {
    if ( root) {
        cout << root->data << ' ';
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder( Tree * root) {
    if ( root) {
        inOrder(root->left);
        cout << root->data << ' ';
        inOrder(root->right);
    }
}

void postOrder( Tree * root) {
    if ( root) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << ' ';
    }
}

void levelOrder() {
    queue<Tree *> Q ;
    Q.push(root) ;
    while (!Q.empty()){
        cout << Q.front() -> data << ' ';
        if(Q.front()->left) Q.push(Q.front()->left);
        if (Q.front()->right) Q.push(Q.front()->right);
        Q.pop();
    }
    
}

int findHeight(Tree * root) {
    if ( root == NULL) return 0;
    if ( root->left != NULL  || root-> right != NULL) {
        int lh = findHeight(root->left);
        int rh = findHeight(root->right);
        return ( 1 + (lh > rh ? lh : rh)) ;
    }
    if ( root->left == NULL  && root-> right == NULL) {
        return 0 ;
    }   
}

int noOfLeaves(Tree * root) {
    if ( root == NULL) return 0 ;
    if ( root->left == NULL && root->right == NULL) return 1;
    else return noOfLeaves(root-> left) + noOfLeaves(root ->right);        
}

int nonLeaves(Tree * root) {
    if ( root == NULL) return 0 ;
    if ( root->left == NULL && root->right == NULL) return 0;
    return nonLeaves(root-> left) + nonLeaves(root ->right) + 1;
    
    
}

static char arr[10] ;
void  istBST( Tree * root ) {
    static int i = 0 ;
    if ( root) {
        istBST(root->left) ;
        arr[i++] = root->data ;
        istBST(root->right);
    }   
}
int main() {
    // cout << " Hello World\n";
    helperFunction() ;
    // levelOrder();
    // inOrder(root);
    // cout << findHeight(root);
    // cout << noOfLeaves(root);
    // cout <<nonLeaves(root);
    istBST(root);
    for ( int i = 0 ; i < 10 ; i ++) cout << arr[i] <<' ';
}