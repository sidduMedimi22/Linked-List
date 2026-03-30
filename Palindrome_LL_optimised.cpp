//Palindrome linked list or not using reversal after mid

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;

    Node(int d){
        data=d;
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

int len_LL(Node* head){
    Node* curr=head;
    int cnt=0;
    while(curr!=NULL){
        cnt++;
        curr=curr->next;
    }
    return cnt;
}


void insert_tail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}


Node* reverse_LL(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        Node* forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
    }
    return prev;
}

bool Palindrome_LL(Node* head){
    Node* curr=head;
    Node* mid=head;
    int pos_mid=1;
    int cnt=len_LL(head);
    while(pos_mid<=cnt/2){
        pos_mid++;
        mid=mid->next;
    }
    if(cnt % 2 != 0){
        mid = mid->next;
    }
    Node* later=reverse_LL(mid);
    while(later!=NULL){
        if(curr->data!=later->data){
            return false;
        }
        curr=curr->next;
        later=later->next;
    }
    return true;
}




int main(){
    Node* head = new Node(1);
    Node* tail = head;
    insert_tail(tail,2);
    insert_tail(tail,2);
    insert_tail(tail,2);
    insert_tail(tail,3);
    insert_tail(tail,2);
    insert_tail(tail,2);
    insert_tail(tail,1);

    print_LL(head);

    if(Palindrome_LL(head)){
        cout << "Palindrome Linked List" << endl;
    } else {
        cout << "Not a Palindrome Linked List" << endl;
    }
}
