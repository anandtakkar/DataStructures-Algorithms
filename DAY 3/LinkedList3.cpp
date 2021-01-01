#include <iostream>

using namespace std;

class Node { 
    int data; 
    class Node* next; 

    Node* delete_end(struct Node* head) 
{ 
    if (head == NULL) 
        return NULL; 

    Node* temp = head; 
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
  
    delete temp; 
  
    return head; 
}
}; 
  

 
  