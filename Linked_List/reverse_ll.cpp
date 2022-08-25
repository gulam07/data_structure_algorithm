#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

int main(){

    Node* temp=new Node(10);
    Node* head=temp;

    Node* temp1=new Node(12);
    head->next=temp1;
    Node* temp2=new Node(11);
    temp1->next=temp2;

    Node* forward=NULL;
    Node* curr=head;
    Node* prev=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }

    while(prev!=NULL){
        cout<<prev->data<<endl;
        prev=prev->next;
    }


    return 0;


}