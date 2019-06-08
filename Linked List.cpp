//
// Created by ak47a on 08-06-2019.
//

#include "Linked List.h"
#include <iostream>
using namespace std;
node *head,*tail;
void linked_list::get_array(){

    cout<<"please enter the number of elements";
    cin>>no_of_elements;
    elements.resize(no_of_elements);
    for(int i=0;i<no_of_elements;i++)
    {//load the elements into the vector
        cin>>elements[i];
    }
}

void linked_list::solve(){
    for(int i=0;i<no_of_elements;i++){
        //now insert into the function
        insert(elements[i]);
    }

}

void linked_list::insert(int data) {

node *temp;
temp=new node;
temp->next=NULL;
temp->data=data;

if(head==NULL){
    head=temp;
    tail=temp;
}
else
{
    tail->next=temp;
    tail=temp;
}

}

void linked_list::print(){
    node *temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }



}

