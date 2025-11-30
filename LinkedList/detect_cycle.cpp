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
    bool cycle(){
        node *slow=head;
        node *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};
int main(){
    list l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.printLL();
    if(l.cycle()){
        cout<<"Cycle Available"<<endl;
    }else{
        cout<<"Cycle not Available"<<endl;
    }
    return 0;
}