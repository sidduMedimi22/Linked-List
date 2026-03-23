// //Merge two sorted linked lists Approach 2
// //Merge two sorted Linked List 

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node*next;

//     Node(int data){
//         this->data=data;
//         next=NULL;
//     }
//     ~Node(){
//         next=NULL;
//     }
// };



// void print_LL(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int get_len(Node*&head){
//     int cnt=0;
//     Node*temp=head;
//     while(temp!=NULL){
//         cnt++;
//         temp=temp->next;
//     }
//     return cnt;
// }

// void insert_at_tail(Node* &tail,int ele){
//     Node *temp=new Node(ele);
//     tail->next=temp;
//     tail=tail->next;
// }



// Node* Merged_LL(Node* head1,Node* head2){
//     Node*curr1=NULL;
//     Node*curr2=NULL;
//     if(head1==NULL){
//         return head2;
//     }
//     if(head2==NULL){
//         return head1;
//     }
//     if(head1->data<head2->data){
//         curr1=head1;
//         Node* forw=curr1->next;
//     }
//     if(head1->data>head2->data){
//         curr2=head1;
//         Node* forw=curr2->next;
//     }
//     while()
// }

// int main(){
//     Node* head1=new Node(1);
//     Node* tail1=head1;
//     Node* head2=new Node(2);
//     Node* tail2=head2;
//     insert_at_tail(tail1,4);
//     insert_at_tail(tail1,5);
//     insert_at_tail(tail2,3);
//     insert_at_tail(tail2,5);
//     Node* ans=Merged_LL(head1,head2);
//     print_LL(ans);

// }