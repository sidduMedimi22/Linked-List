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
        next=NULL;
        delete next;
    }
};



int traversal_link(Node*&head,int cnt){
    int pos=1;
    Node* temp=head;
    while(pos<=cnt){
        temp=temp->next;
        pos++;
    }
    return temp->data;
    
}

int get_len(Node*&head){
    int cnt=0;
    Node*temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void insert_at_tail(Node*&tail,int ele){
    Node *temp=new Node(ele);
    tail->next=temp;
    tail=tail->next;
}



int main(){
    Node *n1=new Node(10);
    Node*head=n1;
    Node*tail=n1;
    insert_at_tail(tail,9);
    insert_at_tail(tail,8);
    insert_at_tail(tail,7);
    insert_at_tail(tail,6);
    int len=get_len(head);
    int ans=traversal_link(head,len/2+1);
    cout<<"Middle element is : "<<ans;
    
    
    
    
}