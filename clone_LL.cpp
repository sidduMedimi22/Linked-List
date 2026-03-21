//Node defination consists of a next and a random pointer with a data

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;

    Node(int d){
        data=d;
        next=NULL;
        random=NULL;
    }
};

Node* insert_tail(Node* tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

Node* clone_LL(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* ans=new Node(head->data);
    Node* curr=head->next;
    Node* ans_tail=ans;
    while(curr!=NULL){
        insert_tail(ans_tail,curr->data);
    }
    Node* curr2=head;
    while(curr2!=NULL){
        Node* curr_iterate=head;
        while(curr_iterate!=NULL){
            if(curr2->next==curr_iterate){
//                ans
            }
        }
    }

}