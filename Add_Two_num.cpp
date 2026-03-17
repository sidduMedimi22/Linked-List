//ADD Two numbers represented by 2 linked lists

#include<iostream>
#include<math.h>
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
int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

Node* reverse_LL(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
    }
    return prev;
}


int sum_LL(Node* head1,Node* head2){
    Node* rev1=reverse_LL(head1);
    Node* rev2=reverse_LL(head2);
    Node* curr1=rev1;
    Node* curr2=rev2;
    int num1=curr1->data,num2=curr2->data;
    curr1=curr1->next;
    curr2=curr2->next;
    while(curr1!=NULL){
        num1=num1*10+(curr1->data);
        curr1=curr1->next;
    }
    while(curr2!=NULL){
        num2=num2*10+(curr2->data);
        curr2=curr2->next;
    }
    int ans=num1+num2;
    int finalans=reverseNumber(ans);
}

int main(){
    Node* head1=new Node(1);
    Node* tail1=head1;
    Node* head2=new Node(2);
    Node* tail2=head2;
    insert_tail(tail1,2);
    insert_tail(tail1,3);
    insert_tail(tail2,5);
    insert_tail(tail2,6);
    cout<<"Sum is : "<<sum_LL(head1,head2);
}