#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
class Circular{
    Node *head;
    Node *tail;
    public:
    Circular(){
        head=tail=NULL;
    }
    void insertathead(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            head=newNode;
            tail->next=head;
        }
    }
    void print(){
        cout<<head->data<<" -> ";
        Node *temp=head->next;
        while(temp!=head){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<head->data;
    }
};
int main(){
    Circular c;
    c.insertathead(1);
    c.insertathead(2);
    c.insertathead(3);
    c.insertathead(4);
    c.print();
    return 0;
}