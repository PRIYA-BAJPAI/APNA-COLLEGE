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
    public:
    node *head;
    node *tail;
    // public:
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

    node *reverse(node *head,int k){
        node *temp=head;
        int count=0;
        while(count<k){
            if(temp==NULL){
                return head;
            }
            temp=temp->next;
            count++;
        }
        node *prevNode=reverse(temp,k);
        temp=head;
        count=0;
        while(count<k){
            node *next=temp->next;
            temp->next=prevNode;
            prevNode=temp;
            temp=next;
            count++;
        }
        return prevNode;
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
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);

    l.printLL();
    
    l.head=l.reverse(l.head,3);//this line breaks encapsulation but to call the function it was required else we had to change the function

    l.printLL();
    return 0;
}