// Implementation of Linked List
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    // Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

int main(){

    Node* block1 = new Node(10);
    cout << block1 -> data << endl;
    cout << block1 -> next << endl;
    return 0;
}