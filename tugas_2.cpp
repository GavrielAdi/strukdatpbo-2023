#include <bits/stdc++.h>

using namespace std;

// Struktur node untuk linked list
struct Node {
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

int main() {
    Node* head = NULL; // Membuat linked list kosong

    char choice;
    do {
        cout << "\nPilih operasi yang ingin Anda lakukan:\n";
        cout << "1. Tambah Angka\n";
        cout << "2. Tampilkan Linked List\n";
        cout << "3. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                int value;
                cout << "Masukkan angka yang ingin Anda tambahkan: ";
                cin >> value;

                Node* newNode = new Node(value);
                newNode->next = head;
                head = newNode;
                break;
            }
            case '2': {
                cout << "Isi Linked List:\n";
                Node* current = head;
                while (current != NULL) {
                    cout << current->data << " ";
                    current = current->next;
                }
                cout << endl;
                break;
            }
            case '3':
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (choice != '3');

    // Membersihkan memori
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
