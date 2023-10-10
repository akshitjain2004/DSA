//876. Middle of the Linked List
//https://leetcode.com/problems/middle-of-the-linked-list/
//https://www.codingninjas.com/studio/problems/middle-of-linked-list_973250?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
int getLen(Node* head){
    int len =0;
    while(head!=NULL){
        len++;
        head=head->next;
    }

    return len;
}
Node *findMiddle(Node *head) {
    int length = getLen(head);

    int ans = (length/2);

    Node* temp = head;
int count =0;
    while(count<ans){
        count++;
        temp=temp->next;
    }

    return temp;
}

