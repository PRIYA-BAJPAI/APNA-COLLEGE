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
};
void main(){
    Circular c;
    
}