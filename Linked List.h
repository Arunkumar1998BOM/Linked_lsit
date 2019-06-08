//
// Created by ak47a on 08-06-2019.
//

#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H
#include<vector>
using namespace std;

struct node{
    int data;
    node *next;

};


class linked_list{

  int no_of_elements;
  vector<int>elements;

public:
    //this function is to insert at the end

    void insert(int data);
    void get_array();
    void solve();
    void insert_in_between(node *pos);
    void delete_at_last();
    void delete_in_between(node *pos);
    void print();


};

#endif //LINKED_LIST_LINKED_LIST_H
