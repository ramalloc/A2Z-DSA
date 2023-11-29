// Implementation of Linked List
#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    };
};

void insertionAtHead(Node *&head, int value)
{
    Node *block = new Node(value);
    block->next = head;
    head = block;
};

void insertionAtTail(Node *&head, int val)
{
    Node *block = new Node(val);
    Node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = block;
    block->next = NULL;
};

void insertionAtIndex(Node *&head, int val, int index)
{
    if (index == 1)
    {
        insertionAtHead(head, val);
        return;
    }
    Node *block = new Node(val);
    Node *ptr = head;
    int i = 1;
    while (i < index - 1)
    {
        ptr = ptr->next;
        i++;
    }

    // By this method our tail gets updated to the new and last node
    if (ptr->next == NULL)
    {
        insertionAtTail(head, val);
        return;
    }
    block->next = ptr->next;
    ptr->next = block;
};

Node *convertArrToLl(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *ptr = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *block = new Node(arr[i]);
        ptr->next = block;
        ptr = block;
    }
    return head;
};

int lengthOfLl(Node *&head)
{
    int count = 0;
    Node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }

    return count;
};

int serchInLl(Node *&head, int num)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == num)
        {
            return 1;
        }
        else
        {
            ptr = ptr->next;
        }
    }

    return 0;
}

void printLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
};

int main()
{

    Node *block1 = new Node(10);
    // cout << block1->data << endl;
    // cout << block1->next << endl;

    // --. Insertion At Head
    // Head Pointed To
    Node *head = block1;

    insertionAtHead(head, 20);
    // printLinkedList(head);

    // --. Insertion At Tail
    // Tails pointed to
    insertionAtTail(head, 40);
    // printLinkedList(head);

    // Insertion At Index
    insertionAtIndex(head, 50, 4);
    // printLinkedList(head);

    // Convert Array into Linked List
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head1 = convertArrToLl(arr);
    // printLinkedList(head1);

    // Length of the lisnked List
    // int lenOfLl = lengthOfLl(head1);
    // cout << lenOfLl << endl;

    // Searching In Linked List
    int isData = serchInLl(head1, 6);
    if (isData)
    {
        cout << "Data is present in Linked List..";
    }
    else
    {
        cout << "Data is not present in Linked List..";
    }

    return 0;
}