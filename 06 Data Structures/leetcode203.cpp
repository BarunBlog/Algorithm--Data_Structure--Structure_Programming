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

node* removeElementsRec(node* head, size_t value)
{
    if(head==NULL){
        return head;
    }

    node* result;

    if(head->data == value){
        result = removeElementsRec(head->next, value);
    }
    else{
        result = head;
        result->next = removeElementsRec(head->next, value);
    }

    return result;

}




node* removeElements(node* head, int val)
{

    if(head==NULL){
        return head;
    }

    node* Node = new node(-1);
    node* nodeIt = Node;
    node* it = head;

    while(it != NULL){
        if(it->data != val){
            nodeIt->next = it;
            nodeIt = nodeIt->next;
            cout<<it->data<<" ";
        }


        it = it->next;
    }
    nodeIt->next = NULL;
    cout<<endl;

    return Node->next;


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

    node* after_removing_element = removeElementsRec(head1, value);

    display(after_removing_element);

}

