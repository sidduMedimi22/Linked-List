#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
    ~Node(){
    }
};

void insert_at_head(Node*&head,int ele){
    Node*temp=new Node(ele);
    temp->next=head;
    head=temp;

    }

void traversal_link(Node*&head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insert_at_tail(Node*&tail,int ele){
    Node *temp=new Node(ele);
    tail->next=temp;
    tail=tail->next;
}

void insert_at_mid(Node *&head,int position,int ele){
    Node*temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    Node *n1=new Node(ele);
    n1->next=temp->next;
    temp->next=n1;
}

void del_node(Node * &head,int position){
    if(position==1){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        
    }
}

Node* reverse_LL(Node *&head){
    Node *curr=head;
    Node *prev=NULL;
    Node *forw=curr->next;
    while(curr!=NULL){
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
    }
    return prev;
}

void rev_rec_LL(Node *&head,Node *&prev,Node *&curr){
    if(curr==NULL){
        head=prev;
        return;
    }
    Node*forw=curr->next;
    rev_rec_LL(head,curr,forw);
    curr->next=prev;
}

int main(){
    Node *n1=new Node(10);
    Node*head=n1;
    Node*tail=n1;
    insert_at_tail(tail,9);
    insert_at_tail(tail,8);
    insert_at_tail(tail,7);
    insert_at_tail(tail,6);
    cout<<"Before Reversal :"<<endl;
    traversal_link(head);
    cout<<"After Reversal :"<<endl;
    Node *h1=reverse_LL(head);
    traversal_link(h1);
    
    
}