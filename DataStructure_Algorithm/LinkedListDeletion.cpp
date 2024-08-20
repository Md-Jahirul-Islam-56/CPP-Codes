#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void StartingToEndInsertion(Node *ptr)
{

    while (ptr != NULL)
    {
        cin >> ptr->data;
        ptr = ptr->next;
    }
}

Node* StartingDeletion(Node *ptr)
{
    Node* p= ptr;
    ptr=ptr->next;
    delete(p);
    return  ptr;
}

void EndDeletion(Node *ptr)
{
    Node *p = ptr;
    int n=0;

    while (ptr->next != NULL)
    {
       ptr= ptr->next;
       if (n>=1)
       {
        p=p->next;
       }
       
       n++;
    }
     p->next=NULL;   
}

void DeletionWithGivenData(Node*ptr, int data)
{
    
    Node* p=ptr->next;
    while (p->data!=data && p->next!=NULL)
    {
        p=p->next;
        ptr=ptr->next;
        
    }
    if (p->data == data)
        {
            ptr->next=p->next;
             delete(p);
        }
   
    
}

void DeletionAtIndex(Node *ptr)
{

    int index, n = 0;
    cout<<"Enter the index after which you want to delete: ";
    cin>>index;

    while (n!=index)
    {
        ptr=ptr->next;
        n++;
    }
    Node* p= ptr;
    Node* q= p->next;
    p->next=q->next;
    delete(q);
    
}

void linkedlisttransversal(Node *ptr)
{

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{

    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    // Declaration of first three list
    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    cout << "Enter four data and press enter after each entry: ";

    StartingToEndInsertion(head);
    linkedlisttransversal(head);

    
    DeletionAtIndex(head);
    linkedlisttransversal(head);

    head=StartingDeletion(head);
    linkedlisttransversal(head);

   DeletionWithGivenData(head, 85);
   linkedlisttransversal(head);

    EndDeletion(head);
    linkedlisttransversal(head);


    delete (head);
    delete (second);
    delete (third);
    delete (fourth);

    return 0;
}