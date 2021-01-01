#include <iostream>

using namespace std;

class Node { 
    int data; 
    class Node* next; 
}; 
  

Node* delete_beg(struct Node* head) 
{ 
    if (head == NULL) 
        return NULL; 

    Node* temp = head; 
    head = head->next; 
  
    delete temp; 
  
    return head; 
} 
  