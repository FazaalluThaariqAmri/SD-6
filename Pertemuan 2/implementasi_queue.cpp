#include <iostream>
using namespace std;

// deklarasi struktur node
struct node {
    int value;
    node *next;
};

// deklarasi head dan tail
node *head = NULL;
node *tail = NULL;

// menambahkan node ke belakang
void enqueue (int n) {
    node *newNode = new node;

    newNode -> value = n;
    newNode -> next = NULL;

    // jika queue kosong
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    // jika queue tidak kosong
    else {
        tail -> next = newNode;
        tail = newNode;
    }
}

// menghapus node dari depan
void dequeue() {
    if (head == NULL) {
        cout << "Queue kosong!\n";
        return;
    }

    node *temp = head;

    head = head -> next;

    // jika setelah dihapus queue menjadi kosong
    if (head == NULL) {
        tail = NULL;
    }
    delete temp;
}

// melihat data paling depan
void front() {
    if (head == NULL) {
        cout << "Queue kosong!\n";
        return;
    }
    cout << "Data paling depan : " << head -> value << endl;
}

// melihat data paling belakang
void rear() {
    if (tail == NULL) {
        cout << "Queue kosong!\n";
        return;
    }
    cout << "Data paling belakang : " << tail -> value << endl << endl;
}

// menampilkan data
void display() {
    if (head == NULL) {
        cout << "Queue kosong!\n";
        return;
    }
    node *temp = head;

    cout << "Isi queue : ";

    while (temp != NULL) {
        cout << temp -> value << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main() {

    system("cls");

    // enqueue
    enqueue(10);
    display();

    enqueue(20);
    display();

    enqueue(30);
    display();

    enqueue(40);
    display();

    // Melihat front dan rear
    front();
    rear();

    // dequeue
    dequeue();
    display();

    dequeue();
    display();

    // Melihat front dan rear lagi
    front();
    rear();

    return 0;
}