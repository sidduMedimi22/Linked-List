//clone a Linked List using O(n) time compexity 

#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;
    Node* random=NULL;

    Node(int d){
        data=d;
        next=NULL;
        random=NULL;
    }

};

void print_LL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int len_LL(Node* head){
    Node* curr=head;
    int cnt=0;
    while(curr!=NULL){
        cnt++;
        curr=curr->next;
    }
    return cnt;
}


Node* insert_tail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
    return tail;
}

Node* clone_LL(Node* head){
    Node* curr=head;
    Node* random_curr=head;
    Node* clone=new Node(head->data);
    Node* clone_tail=clone;
    map<Node*,Node*>identify;
    identify[head]=clone;
    curr=curr->next;
    while(curr!=NULL){
        clone_tail=insert_tail(clone_tail,curr->data);
        identify[curr]=clone_tail;
        curr=curr->next;
    }
    while(random_curr!=NULL){
     //   clone_LL->random=identify[curr->random];
    }

    

}