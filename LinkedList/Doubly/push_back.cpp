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
    void push_back(int x){
        Node *temp;
        Node *P=new Node(x);
        if(head==NULL){
            head=tail=P;
        }else{
            P->prev=tail;
            tail->next=P;
            tail=P;
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
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.print();
    return 0;
}