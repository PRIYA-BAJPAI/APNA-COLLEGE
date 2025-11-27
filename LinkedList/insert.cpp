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
    void push_front(int val){
        node *newnode=new node(val);
        if (head==NULL){
            head=tail=newnode;
        }else{
            newnode->next=head;
            head=newnode;
        }
    }
    void insert(int val,int pos){
        if(pos<0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        node *temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        node *newnode=new node(val);
        newnode->next=temp->next;
        temp->next=newnode;

    }
    void printLL(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    list l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.printLL();
    l.insert(5,2);
    cout<<"After inserting"<<endl;
    l.printLL();
    return 0;
}