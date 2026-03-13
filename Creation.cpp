#include<iostream>
using namespace std;

class LinkedListNode{
    public:
          int data=5;
          LinkedListNode *next;};

int main(){
    LinkedListNode n;
    cout<<n.next;
}