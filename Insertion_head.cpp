#include<iostream>
using namespace std;

class LinkedNode {
    public:
    int d;
    LinkedNode *next;

    LinkedNode(int d){
        this->d=d;
        this->next=NULL;
    }
    
    
    
};

void Insert_head(LinkedNode* &head,int d){
        LinkedNode *temp=new LinkedNode(d);
        temp->next=head;
        head=temp;
        

    }
void Print(LinkedNode*head){
    LinkedNode*temp=head;
    while(temp!=NULL){
        cout<<temp->d<<" ";
        temp=temp->next;
    }
}


int main(){
    int d=10;
    LinkedNode *node1=new LinkedNode(10);
    LinkedNode *head=node1;
    Insert_head(head,5);
    Insert_head(head,2);
    Print(head);



}