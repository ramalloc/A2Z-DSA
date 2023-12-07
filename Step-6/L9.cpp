// Reverse a SLL

// 1. Using Stack, Store data from each Node in Stack, Again assign the data from the Stack to SLL
/*
Node* reverseLinkedList(Node *head)
{
    stack<int> st;
    Node* ptr = head;
    while(ptr != NULL){
        st.push(ptr->data);
        ptr = ptr->next;
    }
    ptr = head;
    while(ptr != NULL){
        ptr->data = st.top();
        st.pop();
        ptr = ptr->next;
    }
    return head;
}
*/

// Time Complexity = O(N) + O(N) ~ O(2N)
// Time Complexity = O(N)


// 2. Changing the Links using prev and front Pointer
/*
Node* reverseLinkedList(Node *head)
{
    Node* ptr = head;

    // Initially prev is pointing to NULL
    Node* prev = NULL;

    while(ptr != NULL){
        // Stores the ptr->next to move forward in LL
        Node* front = ptr->next;
        ptr->next = prev;
        prev = ptr;
        // Moved to ptr to its next in LL
        ptr = front;
    }

    // returning prev as Head
    return prev;
}
*/
// Time Complexity = O(N)
// Time Complexity = O(1)


// ---- Recursion Method ----
// We break the problem in sub problem, We recursively break the LL till head != NULL or head->next != NULL and return Last Node as new head .
// Basically we solve the problem for two nodes, We change the Link between two nodes  
/*
Node* reverseLinkedList(Node *head)
{
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* newHead = reverseLinkedList(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;    
}
*/

// Time Complexity = O(N)
// Time Complexity = O(N)