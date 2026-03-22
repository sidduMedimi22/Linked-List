//Get starting Node of loop through Floyd's Algo

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data=d;
        next=NULL;
    }
};

void insert_tail(Node* &tail,int d){
   Node* temp=new Node(d);
   tail->next=temp;
   tail=temp; 
}

Node* floyd_detect(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

Node* getstarNode(Node *head){
    if(head=NULL){
        return NULL;
    }
    Node* intersect=floyd_detect(head);
    Node* slow=head;
    while(slow!=intersect){
        slow=slow->next;
        intersect=intersect->next;
    }
    return slow;
}

