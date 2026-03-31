//Sort a linked list consisting of 0s,1s and 2s 

#include<iostream>
#include<map>
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

void insert_at_tail(Node*&tail,int ele){
    Node *temp=new Node(ele);
    tail->next=temp;
    tail=tail->next;
}

//Node* sort(Node* head){
//     int cnt_zer=0;
//     int cnt_one=0;
//     int cnt_two=0;
//     Node* temp=head;
//     Node* curr=head;
//     while(temp!=NULL){
//         if(temp->data==0){
//             cnt_zer+=1;
//             temp=temp->next;
//         }
//         else if(temp->data==1){
//             cnt_one+=1;
//             temp=temp->next;
//         }
//         else if(temp->data==2){
//             cnt_two+=1;
//             temp=temp->next;
//         }
//     }
//     while(cnt_zer!=0 || cnt_one!=0 || cnt_two!=0){
//         if(cnt_zer!=0){
//             curr->data=0;
//             curr=curr->next;
//             cnt_zer--;
//         }
//         if(cnt_zer==0 && cnt_one!=0){
//             curr->data=1;
//             curr=curr->next;
//             cnt_one--;
//         }
//         if(cnt_zer==0 && cnt_one==0 && cnt_two!=0){
//             curr->data=2;
//             curr=curr->next;
//             cnt_two--;
//         }
        
//     }
//     return head;
// }
void insert_tail(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
}
Node* sort_zeros(Node* head){
    Node* zero_head=new Node(-1);
    Node* One_head=new Node(-1);
    Node* two_head=new Node(-1);
    Node* zer_tail=zero_head;
    Node* one_tail=One_head;
    Node* two_tail=two_head;

    Node* curr=head;
    while(curr!=NULL){
        int value=curr->data;
        if(value==0){
            insert_tail(zer_tail,curr);
            curr=curr->next;
        }
        else if(value==1){
            insert_tail(one_tail,curr);
            curr=curr->next;
        }
        else if(value==2){
            insert_tail(two_tail,curr);
            curr=curr->next;
        }
    }
        //Merging the linked lists
    if(One_head->next!=NULL){
    zer_tail->next=One_head->next;
    one_tail->next=two_head->next;
    two_tail->next=NULL;}
    else{
        zer_tail->next=two_head->next;
    }
    Node* new_head=zero_head->next;
    delete zero_head;
    delete One_head;
    delete two_head;
    return new_head;
}


int main(){
    Node* head=new Node(0);
    Node* tail=head;
    insert_at_tail(tail,1);
    insert_at_tail(tail,0);
    insert_at_tail(tail,1);
    insert_at_tail(tail,2);
    insert_at_tail(tail,1);
    insert_at_tail(tail,2);
    insert_at_tail(tail,0);
    Node* ans=sort_zeros(head);
    print_LL(ans);

}


