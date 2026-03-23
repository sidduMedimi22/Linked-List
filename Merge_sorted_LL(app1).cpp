//Merge two sorted Linked List 

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

int get_len(Node*&head){
    int cnt=0;
    Node*temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void insert_at_tail(Node* &tail,int ele){
    Node *temp=new Node(ele);
    tail->next=temp;
    tail=tail->next;
}



Node* Merged_LL(Node* head1,Node* head2){
    Node* curr1=head1;
    Node* curr2=head2;
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    Node* finalhead=NULL;
    Node* finaltail=NULL;
    if(head1->data<head2->data){
        finalhead=head1;
        finaltail=head1;
        curr1=curr1->next;}
    else{
        finalhead=head2;
        finaltail=head2;
        curr2=curr2->next;
    }
    while(curr1!=NULL && curr2!=NULL){
        if(curr1->data<curr2->data){
            finaltail->next=curr1;
            finaltail=curr1;
            curr1=curr1->next;
        }
        else{
            finaltail->next=curr2;
            finaltail=curr2;
            curr2=curr2->next;
        }
    }
    if(curr1!=NULL){
        finaltail->next=curr1;
    }
    if(curr2!=NULL){
        finaltail->next=curr2;
    }
    return finalhead;
}

int main(){
    Node* head1=new Node(1);
    Node* tail1=head1;
    Node* head2=new Node(2);
    Node* tail2=head2;
    insert_at_tail(tail1,4);
    insert_at_tail(tail1,5);
    insert_at_tail(tail2,3);
    insert_at_tail(tail2,5);
    Node* ans=Merged_LL(head1,head2);
    print_LL(ans);

}