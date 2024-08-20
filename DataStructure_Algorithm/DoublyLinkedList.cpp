#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* prev;
Node* next;
};

void Insertion(Node* ptr){

cout<<"Enter the elements: ";
    while (ptr->next!=NULL)
    {
        cin>>ptr->data;
        ptr=ptr->next;
    }
}


void Transversal(Node* ptr){

cout<<"Your elements are: ";
    while (ptr->next!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
cout<<"Now in opposite direction: ";
    ptr=ptr->prev;
    while (ptr->next!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->prev;
    }    
    
}


int main(){

    Node* data_one=new Node;
    Node* data_two=new Node;
    Node* data_three=new Node;
    Node* data_four=new Node;
    Node* data_five=new Node;

    data_one->prev=NULL;
    data_one->next=data_two;

    data_two->prev=data_one;
    data_two->next=data_three;

    data_three->prev=data_two;
    data_three->next=data_four;

    data_four->prev=data_three;
    data_four->next=data_five;

    data_five->prev=data_four;
    data_five->next=NULL;

    Insertion(data_one);
    Transversal(data_one);

    delete(data_one);
    delete(data_two);
    delete(data_three);
    delete(data_four);
    delete(data_five);

    return 0;
}