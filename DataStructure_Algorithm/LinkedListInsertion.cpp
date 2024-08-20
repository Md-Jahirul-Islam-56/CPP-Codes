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

Node *StartingInsertion(Node *ptr)
{

    Node *p = new Node;
    cout << "Insert new element to put in the starting: ";
    cin >> p->data;
    p->next = ptr;
    return p;
}

void EndInsertion(Node *ptr)
{
    Node *p = new Node;
      cout<<"Enter the data you want to put at the end: ";
      cin>>p->data;

      Node *q = ptr;

    while (q->next != NULL)
    {
       q= q->next;
    }
     q->next = p;
     p->next=NULL;   
}

void InsertionWithGivenNode(Node *ptr)
{

    Node *p = new Node;
    cout<<"Enter the data to put after third node (given): ";
    cin>>p->data;

    p->next=ptr->next;
    ptr->next=p;
}

void InsertionAtIndex(Node *ptr)
{

    Node *p = new Node;
    Node *q = ptr;
    int index, n = 0;

    cout << "Enter the index before which you want to change the data: ";
    cin >> index;

    while (n != index - 1)
    {
        q = q->next;
        n++;
    }
    
    p->next=q->next;
    q->next=p;
    cout << "Insert the data to put after " << n << "th index : ";
    cin >> p->data;
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

    head=StartingInsertion(head);
    linkedlisttransversal(head);

    InsertionWithGivenNode(third);
   linkedlisttransversal(head);

    EndInsertion(head);
    linkedlisttransversal(head);

    InsertionAtIndex(head);
    linkedlisttransversal(head);

    delete (head);
    delete (second);
    delete (third);
    delete (fourth);

    return 0;
}