/** Floyd's Tortoise and Hare algorithm */

#include<bits/stdc++.h>

using namespace std;

class node
{
    public:
        int data;
        node* next;

        node(int val)
        {
            data=val;
            next = NULL;
        }
};


void insertAtTail(node* &head, int val)
{
    node* n = new node(val);

    if(head==NULL){
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
}

/// Used first and slow pointer
bool hasCycle(node* head)
{
    node* temp = head;

    unordered_set<node*> myset;

    while(temp != NULL){

        if(!myset.insert( temp->next ).second)
            return true;

        temp = temp->next;
    }
    return false;
}



int main()
{
    node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    /** Created a Cycle, connected tail 4 with head 1 */
    head->next->next->next->next = head;


    if(hasCycle(head)){
        cout<<"The linked list has a cycle"<<endl;
    }
    else{
        cout<<"Cycle not found"<<endl;
    }

}

