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
    void push_front(int x){
        Node *temp;
        Node *P=new Node(x);
        if(head==NULL){
            head=tail=P;
        }else{
            P->next=head;
            head->prev=P;
            head=P;
        }
    }
    void print(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" <=> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
}; 

int main(){
    Doubly d;
    d.push_front(10);
    d.push_front(20);
    d.push_front(30);
    d.print();
    return 0;
}