// Deletion in Linked List

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
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

Node *deleteHead(Node *&head)
{
    if (head == NULL)
        return head;

    Node *ptr = head;
    head = head->next;
    delete (ptr);

    return head;
};

Node *deleteTailOfLl(Node *&head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }

    delete (ptr->next);
    ptr->next = NULL;
    return head;
};

Node *deleteAtIndex(Node *&head, int index)
{
    if (head == NULL)
        return head;
    if (index == 1)
    {
        // Node* head1 = deleteHead(head);
        // return head1;

        Node *ptr = head;
        head = head->next;
        free(ptr);
        return head;
    }

    Node *ptr = head;
    Node *prev = NULL;
    int count = 0;

    while (ptr != NULL)
    {
        count++;
        if (count == index)
        {
            prev->next = prev->next->next;
            free(ptr);
            break;
        }
        prev = ptr;
        ptr = ptr->next;
    }

    return head;
};

Node *deleteAtValue(Node *&head, int value)
{
    if (head == NULL)
        return head;
    if (head->data == value)
    {
        Node *ptr = head;
        head = head->next;
        free(ptr);
        return head;
    }

    Node *ptr = head;
    Node *prev = NULL;
    while (ptr != NULL)
    {
        if (ptr->data == value)
        {
            prev->next = prev->next->next;
            free(ptr);
            break;
        }
        prev = ptr;
        ptr = ptr->next;
    }

    return head;
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

    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head1 = convertArrToLl(arr);

    // Deletion On Head in a Linked list
    // Node* head = deleteHead(head1);
    // printLinkedList(head);

    // Deletion On Tail in a Linked list
    // Node* head = deleteTailOfLl(head1);
    // printLinkedList(head);

    // Deletion At Index in a Linked list
    // Node *head2 = deleteAtIndex(head1, 1);
    // printLinkedList(head2);


    // Deletion At Value in a Linked list
    Node* head4 = deleteAtValue(head1, 3);
    printLinkedList(head4);



    return 0;
}