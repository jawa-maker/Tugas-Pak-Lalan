#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void InsertTail(Node*& head, int nilai) {
    Node* baru = new Node();
    baru->data = nilai;
    baru->next = NULL;

    if (head == NULL) {
        head = baru;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = baru;
    }
}

void InsertHead(Node*& head, int nilai) {
    Node* baru = new Node();
    baru->data = nilai;
    baru->next = head;
    head = baru;
}

void Show(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    int n, nilai;

    cout<<"Masukkan jumlah data : ";
    cin>>n;

    for (int i = 0; i < n; i++) {
        cout<<"Masukkan nilai ke "<< i+1<<": ";
        cin>>nilai;
        InsertTail(head, nilai);
    }
    cout<<endl;
    
    cout<<"Masukkan data yang ditambahkan di awal: ";
    cin>>nilai;
    InsertHead(head, nilai);
    cout<<endl;

    cout<<"Data setelah ditambah di awal: "<<endl;
    Show(head);

    return 0;
}

