#include <bits/stdc++.h>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node*next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

Node* insertHead(Node* head, int val){
    Node* temp = new Node(val,head);
    return temp;
}

Node* insertTail(Node* head,int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    Node* newNode = new Node(val);
    temp-> next = newNode;
    return head;
}

Node* insertK(Node* head ,int val, int k){
    if(head == NULL){
        if(k == 1){
            return new Node(val);
        }
        else{
            return head;
        }
    }
     if(k == 1){
        return new Node(val, head);
     }
     int cnt = 0;
     Node* temp = head;
     while(temp!=NULL){
        cnt++;
        if(cnt == k-1){
            Node * x = new Node(val,temp->next);
            temp -> next = x;
            break;
        }
        temp = temp -> next;
     }
     return head;
}
Node* insertBeforeEl(Node* head, int el, int val) {
    if(head == NULL) {
        return NULL;
    }

    if(head->data == el) {
        return new Node(val, head);
    }

    Node* temp = head;

    while(temp->next != NULL) {
        if(temp->next->data == el) {
            Node* x = new Node(val, temp->next);
            temp->next = x;
            break;
        }

        temp = temp->next;
    }

    return head;
}



int main() {
    vector<int> arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);
    head = insertBeforeEl(head,7,3);
    cout<<head->data<<endl;
    Node* temp = head;
    while(temp){
        cout << temp-> data << " ";
        temp = temp -> next;
    }


}