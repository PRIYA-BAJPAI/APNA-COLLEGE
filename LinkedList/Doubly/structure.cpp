#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int val){
        data=val;
        next=prev=NULL;
    }
};

class Doubly{
    Node *head;
    Node *tail;
    public:
    Doubly(){
        head=tail=NULL;
    }
};

int main(){
    Doubly d;
    return 0;
}