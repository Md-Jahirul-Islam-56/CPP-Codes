#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;
};

void linkedlisttransversal(Node* ptr){

    while (ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;

    }
    
}

int main(){

    Node* head;
    Node* second;
    Node* third;

    //Declaration of first three list
    head = new Node;
    second = new Node;
    third = new Node;
    
    //Storing data in first list and connecting it to the second
    head->data =7;
    head->next = second;

    
    //Storing data in second list and connecting it to the third
    second->data =11;
    second->next = third;

    
    //Storing data in third list and connecting it to the Last or NULL
    third->data =14;
    third->next = NULL;

    linkedlisttransversal(head);

return 0;

}