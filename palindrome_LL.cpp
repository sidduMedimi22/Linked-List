//TO check if a linked list is Palindrome or not 

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;
    Node* prev=NULL;

    Node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};

int Linked_size(Node* head){
    Node* curr=head;
    int cnt=0;
    while(curr!=NULL){
        cnt++;
        curr=curr->next;
    }
    return cnt;
}

void ins_tail(Node* &tail,int ele){
    Node* temp=new Node(ele);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}

void display_LL(Node* head){
    Node* temp=head;
    cout<<"The linked list is : "<<endl;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}

bool Palindrome_LL(Node* head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    Node* curr=head;
    int len=Linked_size(head);
    vector<int>arr(len);
    for(int i=0;i<len;i++){
        arr[i]=curr->data;
        curr=curr->next;
    }
    int s=0;
    int end=len-1;
    while(s<end){
        if(arr[s]!=arr[end]){
            return false;
        }
        s++;
        end--;
    }
    return true;


}

int main(){
    Node* head=new Node(1);
    Node* tail=head;
    ins_tail(tail,1);
    ins_tail(tail,2);
    ins_tail(tail,2);
    ins_tail(tail,3);
    ins_tail(tail,2);
    ins_tail(tail,2);
    ins_tail(tail,1);
    if(Palindrome_LL(head)){
        cout<<"Palindrome Linked List !!"<<endl;
    }
    else{
        cout<<"Not a Palindrome Linked List !!"<<endl;
    }

}