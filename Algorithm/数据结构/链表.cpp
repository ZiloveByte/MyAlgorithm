#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

int main(){
    Node node01 = {11,NULL};
    Node node02 = {22,NULL};
    Node node03 = {33,NULL};
    node01.next = &node02;
    node02.next = &node03;
    cout<<node01.data<<"\n";
    cout<<node01.next->data<<"\n";
    cout<<node01.next->next->data<<"\n";
}