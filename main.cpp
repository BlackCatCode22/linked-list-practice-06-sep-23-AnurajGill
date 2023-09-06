#include <iostream>

using namespace std;

class Node {
    public:
    int Value;
    Node*newNext;

};

void printlist(Node*n){
    while (n!=NULL) {
        cout << n-> Value << endl;
        n = n->newNext;
    }
}



int main()
{
Node*first = new Node();
Node*second = new Node();
Node*third = new Node();

first->Value = 1;
first->newNext = second;
second->Value = 2;
second->newNext = third;
third-> Value = 3;
third->newNext = NULL;


printlist(first);

struct node {
int data;
node* next;
};

node*nextNode;
node*temp;
node*head;

nextNode = new node;

nextNode->data = 1;
temp = nextNode;
head = nextNode;

nextNode = new node;

nextNode->data = 2;
temp->next = nextNode;
temp = temp->next;

nextNode = new node;
nextNode->data = 3;
temp->next = nextNode;

nextNode = new node;

temp = temp-> next;
nextNode->data = 4;
temp->next = nextNode;
nextNode->next = NULL;





















    return 0;
}
