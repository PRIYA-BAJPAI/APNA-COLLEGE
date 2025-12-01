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
    
    void cycle(){
        node *slow=head;
        node *fast=head;
        bool iscycle=false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            //cycle exist , break to get the exact location of fast 
            if(slow==fast){
                iscycle=true;
                break;
            }
        }
        //if cycle do not exist return null
        if(!iscycle){
            return ;
        }
        //if cycle exist we are finding the strting point of the cycle 
        slow=head;
        node *prev=NULL; //this will be the previous point of fast so that when fast and slow meet prev->next=NULL to break the loop
        while(slow!=fast){
            slow=slow->next;
            prev=fast;
            fast=fast->next;
        }
        prev->next=NULL; //remove cycle
    }
};
int main(){
    list l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.add_cycle(5);
    l.cycle();
    l.printLL();
    return 0;
}