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

int main(){
    Node* head=new Node(10);

}