#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void StartingToEndInsertion(Node* ptr){

    Node* p= ptr;
    do{
    cin>>ptr->data;
    ptr = ptr->next;
      }while (ptr != p);
}

void Transversal(Node *ptr)
{
     Node *p = ptr;
    do{
    cout << p->data << " ";
    p = p->next;
      }while (p != ptr);
}

Node* StartingInsertion(Node* head){
    Node* p=new Node;
    Node* q=head->next;
    cout<<"Enter the new head: ";
    cin>>p->data;
   while (q->next!=head)
   {
    q=q->next;
   }
   q->next=p;
   p->next=head;
   head=p;
   return p;

}

int main()
{

    Node *head;
    Node *second;
    Node *third;

    // Declaration of first three list
    head = new Node;
    second = new Node;
    third = new Node;

    //connecting it to the second
    head->next = second;

    //connecting it to the third
     second->next = third;
    
    //connecting it to the Last or NULL
     third->next = head;

    StartingToEndInsertion(head);
    Transversal(head);

   head= StartingInsertion(head);
    Transversal(head);

    return 0;
}