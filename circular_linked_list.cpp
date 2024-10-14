#include<iostream>
using namespace std;
class Node
{
    public:
        int key;
        int data;
        Node* next;
    Node()
    {
        key = 0;
        data = 0;
        next=NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class CircularLinkedList
{
    public:
        Node* head;

        CircularLinkedList()
        {
            head =NULL;
        }
    // 1.
    Node* nodeExists(int k)
    {
        Node*temp = NULL;
        Node*ptr = head;
        if(ptr==NULL)
        {
            return temp;
        }
        else
        {
            do
            {
                if(ptr->key==k)
                {
                    temp=ptr;
                }
                ptr = ptr->next;
            } while (ptr!=head);
            return temp;
            
        }
    }
    //2.
    void appendNode(Node * new_node)
    {
        if(nodeExists(new_node->key)!=NULL)
        {
            cout<<"Node already exists with key value : "<<new_node->key
            <<". Append another node with different Key value"<<endl;
        }
        else
        {
            if(head ==NULL)
            {
                head=new_node;
                new_node->next=head;
                cout<<"Node Appended at first Head position"<<endl;
            }
            else
            {
                Node* ptr = head;
                while(ptr->next!= head)
                {
                    ptr=ptr->next;
                }
                ptr->next=new_node;
                new_node -> next=head;
                cout<<"Node Appended";
            }
            
        }
    }
    //3.
    void prependNode(Node* new_node){
        if(nodeExists(new_node->key)!=NULL)
        {
            cout<<"Node already exists with key value : "<<new_node->key
            <<". Append another node with different Key value"<<endl;
        }
    
        else
        {
            if(head ==NULL)
            {
                head=new_node;
                new_node->next=head;
                cout<<"Node Prepended at first Head position"<<endl;
            }
            else
            {
                 Node* ptr =head;
                while(ptr->next != head)
                {
                    ptr=ptr->next;
                }
                ptr->next =new_node;
                new_node->next=head;
                cout<<"Node Prepened"<<endl;

            }
        }
    }
    //4. Insert a node after a particular node in it
    void insertNodeAfter(int k, Node* new_node )
    {
        Node*ptr = nodeExists(k);
        if(ptr ==NULL)
        {
            cout<< "No node exists with key value"<<endl;
        }
        else
        {
            if(nodeExists(new_node ->key)!=NULL)
            {
                cout<<"Node Alread exists with key value : "
                <<new_node->key
                <<". Append another node with different key value"
                <<endl;
            }
            else
            {
                if(ptr->next==head)
                {
                    new_node->next=head;
                    ptr->next = new_node;
                    cout<<"Node Inserted at the End"<<endl;
                }
                else
                {
                    new_node-> next = ptr-> next;
                    ptr-> next = new_node;
                    cout<<"Node Inserted in between"<<endl;
                }
            }
        }
    }
    void deleteNodeByKey(int k)
    {
        Node* ptr = nodeExists(k);
        if(ptr ==NULL)
        {
            cout<<"No node exists with key value of : "<< k<<endl;
        }
        else
        {
            if(ptr==head)
            {
                if(head->next==head)
                {
                    head = NULL;
                    cout<<"Head node Unlinked ... List Empty";
                }
                else
                {
                    Node*ptr1 = head;
                    while(ptr1->next!=head)
                    {
                        ptr1 = ptr1-> next;
                    }
                    ptr1-> next = head-> next;
                    head = head-> next;
                }
            }
            else
            {
                Node* temp = NULL;
                Node*prevptr =head;
                Node* currentptr = head->next;
                while (currentptr!=NULL)
                {
                    if(currentptr->key == k)
                    {
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else
                    {
                        prevptr = prevptr->next;
                        currentptr = currentptr ->next;
                    }
                }
                prevptr-> next = temp -> next;
                cout<<"Node Unlinked with key value: "<< k<<endl;
            }
        }
    }
    void updateNodeByKey(int k, int new_data)
    {
        Node* ptr = nodeExists(k);
        if(ptr!=NULL)
        {
            ptr->data = new_data;
            cout<<"Node Data Updated Successfully"<<endl;
        }
        else
        {
            cout<<"Node doesn't exist with key value : "<<k<<endl;
        }
    }
    void printList()
        {
            if(head==NULL)
            {
                cout<< "No nodes in singly linked list";
            }
            else
            {
                cout<<endl<<"Singly Linked List Values: ";
                Node* temp = head;
                do
                {
                    cout<< "(" << temp->key<<","<<temp->data<<") -->";
                    temp = temp->next;
                }while(temp!=NULL);
            }
        }
};
