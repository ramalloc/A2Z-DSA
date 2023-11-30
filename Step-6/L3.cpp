// Doubly Linked List

#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev = prev;
    };

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

Node *conovertToDll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *block = new Node(arr[i], nullptr, prev);
        prev->next = block;
        prev = block;
    }
    return head;
};

Node *deleteHeadInDll(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *backPtr = head;
    head = head->next;
    head->prev = nullptr;
    backPtr->next = nullptr;
    free(backPtr);
    return head;
};

Node *deleteTailInDll(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *ptr = head;
    Node *prevNode = nullptr;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    prevNode = ptr->prev;
    prevNode->next = nullptr;
    ptr->prev = nullptr;
    free(ptr);
    return head;
};

Node *deleteAtIndexInDll(Node *&head, int index)
{
    if (head == NULL)
        return NULL;
    Node *ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        if (count == index)
        {
            break;
        }
        else
        {
            ptr = ptr->next;
        }
    }
    Node *prevNode = ptr->prev;
    Node *nextNode = ptr->next;

    if (prevNode == NULL && nextNode == NULL)
    {
        free(ptr);
        return NULL;
    }
    else if (prevNode == NULL)
    {
        return deleteHeadInDll(head);
    }
    else if (nextNode == NULL)
    {
        return deleteTailInDll(head);
    }

    prevNode->next = nextNode;
    nextNode->prev = prevNode;

    ptr->next = nullptr;
    ptr->prev = nullptr;
    free(ptr);
    return head;
};

void deleteAtNodeInDll(Node *head)
{
    Node *prevNode = head->prev;
    Node *nextNode = head->next;

    if (nextNode == NULL)
    {
        prevNode->next = nullptr;
        head->prev = nullptr;
        free(head);
        return;
    }

    prevNode->next = nextNode;
    nextNode->prev = prevNode;

    head->prev = nullptr;
    head->next = nullptr;
    free(head);
};

void printDll(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = conovertToDll(arr);
    // printDll(head);

    // -- Deletion in Doubly Linked list

    // Deletion at Head in Doubly Linked List
    // Node *head1 = deleteHeadInDll(head);
    // printDll(head1);

    // Deletion at Tail in Doubly Linked List
    // Node *head2 = deleteTailInDll(head);
    // printDll(head2);

    // Deletion at Index in Doubly Linked List
    // Node* head3 = deleteAtIndexInDll(head, 5);
    // printDll(head3);

    // Deletion at given Node in Doubly Linked List
    // --> Node that given will never be head
    // head->next->next = 3
    deleteAtNodeInDll(head->next->next);
    printDll(head);

        return 0;
}