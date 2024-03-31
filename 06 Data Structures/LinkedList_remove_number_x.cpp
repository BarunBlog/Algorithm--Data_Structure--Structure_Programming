/// Removing number x from linked list using two pointers

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



void display(node* head)
{
    node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}




node* removeElements(node* head, int val)
{

    if(head==NULL){
        return head;
    }

    node* DummyNode = new node(-1);
    node* prev = DummyNode;
    node* current = head;

    while(current != NULL){

        if(current->data == val){
            prev->next = current->next;
        }
        else{
            prev->next = current;
            prev = prev->next;
        }

        current = current->next;
    }

    return DummyNode->next;
}




int main()
{
    node* head1 = NULL;


    int arr1[] = {1,4,6,5,7,8,6,6};
    int value = 6;

    for(int i=0; i<8; i++){
        insertAtTail(head1, arr1[i]);
    }

    display(head1);

    node* after_removing_element = removeElements(head1, value);

    display(after_removing_element);

}

