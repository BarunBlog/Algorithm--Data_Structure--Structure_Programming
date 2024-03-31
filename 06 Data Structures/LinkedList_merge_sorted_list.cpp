
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


node* merge_sorted_lists(node* head1, node* head2)
{
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    node* it1 = head1;
    node* it2 = head2;
    node* dummyNode = new node(-1);
    node* d=dummyNode;

    while(!(it1 == NULL && it2 == NULL)){

        if(it1 == NULL){
            d->next = it2;
            it2 = it2->next;
        }
        else if(it2 == NULL){
            d->next = it1;
            it1 = it1->next;
        }
        else if(it1->data < it2->data){
            d->next = it1;
            it1 = it1->next;
        }
        else{
            d->next = it2;
            it2 = it2->next;
        }
        d = d->next;
    }
    return dummyNode->next;

}


int main()
{
    node* head1 = NULL;
    node* head2 = NULL;

    int arr1[] = {1,4,5,7,8};
    int arr2[] = {2,3,6};

    for(int i=0; i<5; i++){
        insertAtTail(head1, arr1[i]);
    }

    for(int i=0; i<3; i++){
        insertAtTail(head2, arr2[i]);
    }



    display(head1);


    display(head2);

    node* merged_head = merge_sorted_lists(head1, head2);
    display(merged_head);



}

