#include<iostream>
using namespace std;

class Node {
    public:
    int d;
    Node *next;

    Node(int d){
        this->d=d;
        this->next=NULL;
    }
};

void Insertion_Tail(Node * &tail,int d){
    Node *temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}

void Insert_at_middle(Node *&head,int pos,int data){
    Node *temp=head;
    int count=1;
    while(count<pos){
        temp=temp->next;
        count++;
    }
    Node *n1=new Node(data);
    n1->next=temp->next;
    temp->next=n1;
}

void Print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->d<<" ";
        temp=temp->next;
    }
}

int main(){
    Node *n1=new Node(10);
    Node *head=n1;
    Node *tail=n1;
    Insertion_Tail(tail,9);
    Insertion_Tail(tail,8);
    Insertion_Tail(tail,7);
    Insertion_Tail(tail,6);
    Insertion_Tail(tail,4);
    Insert_at_middle(head,5,5);
    Print(head);
}