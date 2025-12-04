#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int d){
        data=d;
        next=NULL;
    }
};
class list{
    node *head;
    node *tail;
    public:
    list(){
        head=tail=NULL;
    }
    void push_back(int val){
        node *newnode=new node(val);
        if (head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void printLL(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void reverse(){
        node *curr=head;
        node *prev=NULL, *nextc= NULL;
        while(curr!=NULL){
            nextc=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextc;
            head=prev;
        }
        
    }
};
int main(){
    list l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    cout<<"BEFORE\n";
    l.printLL();
    cout<<"AFTER\n";
    l.reverse();
    l.printLL();
    return 0;
}