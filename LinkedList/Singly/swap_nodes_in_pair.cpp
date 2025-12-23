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
    node *swap(){
        node *prev=NULL;
        node *f=head;
        node *s=head->next;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(f!=NULL && s!=NULL){
            node *next=s->next;
            f->next=next;
            s->next=f;
            if(prev==NULL){
                head=s;
            }else{
                prev->next=s;
            }
            prev=f;
            f=next;
            if(next==NULL){
                s=NULL;
            }else{
                s=next->next;
            }
        }
        return head;
    }
};
int main(){
    list l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.printLL();
    l.swap();
    l.printLL();
    return 0;
}