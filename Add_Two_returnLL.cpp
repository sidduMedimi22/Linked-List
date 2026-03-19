// //Return the sum of two numbers in the form of a linked list

// //ADD Two numbers represented by 2 linked lists

// #include<iostream>
// #include<math.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int d){
//         data=d;
//         next=NULL;
//     }
// };

// void insert_tail(Node* &tail,int d){
//    Node* temp=new Node(d);
//    tail->next=temp;
//    tail=temp; 
// }


// Node* reverse_LL(Node* head){
//     Node* prev=NULL;
//     Node* curr=head;
//     while(curr!=NULL){
//         Node* forw=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forw;
//     }
//     return prev;
// }

// Node ans(Node* head1,Node* head2){
//     Node* curr1=head1;
//     Node* curr2=head2;
//     int carry=0;
//     while(curr1!=NULL && curr2!=NULL){
//         int sum=carry+curr1->data+curr2->data;
//         int dig=sum%10;
//         Node* temp=new Node(dig);
//         insert_tail()
//     }
// }


// Node* ans_LL(Node* head1,Node* head2){
//     head1=reverse_LL(head1);
//     head2=reverse_LL(head2);
//     Node* ans = add(head1,head2);
//     Node* final=reverese(ans);
//     return final;

// }

// int main(){
//     Node* head1=new Node(1);
//     Node* tail1=head1;
//     Node* head2=new Node(2);
//     Node* tail2=head2;
//     insert_tail(tail1,2);
//     insert_tail(tail1,3);
//     insert_tail(tail2,5);
//     insert_tail(tail2,6);
//     cout<<"Sum is : "<<sum_LL(head1,head2);
// }