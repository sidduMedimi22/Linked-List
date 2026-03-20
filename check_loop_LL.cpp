#include<iostream>
#include<map>
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

void insert_tail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

bool check_loop(Node* &head){
    if(head==NULL){
        return false;
    }
    
    map<Node*,bool> visited;
    Node* temp=head;

    while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

int main(){
    Node* head=new Node(1);
    Node* tail=head;
    insert_tail(tail,2);
    insert_tail(tail,3);
    insert_tail(tail,4);
    Node* point=tail;
    insert_tail(tail,5);
    insert_tail(tail,6);
    tail->next=point;
    cout<<check_loop(head);

}