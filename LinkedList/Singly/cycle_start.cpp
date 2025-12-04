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
    void add_cycle(int val){
        node *newnode=new node(val);
        tail->next=newnode;
        newnode->next=head->next;
    }
    void printLL(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    node *fast;
    bool cycle(){
        node *slow=head;
        fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
    int find_start(){
        node *slow=head;
        cycle();
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow->data;
    }
};
int main(){
    list l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.add_cycle(5);
    cout<<"Starting node is "<<l.find_start();
    return 0;
}