#include <iostream>

using namespace std;

int main()
{
    class Node
    {
        public:
        int data;
        Node * next;

        void insert_any(Node* prev_node,int new_data)
    {
        if(prev_node==NULL)
        {
            cout<<"invalid";
            return;
        }
        Node* n=new Node();
        n->data=new_data;
        n->next=prev_node->next;
        prev_node->next=n;
    }
    };

    
}