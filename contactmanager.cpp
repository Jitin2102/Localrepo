#include <iostream>
#include <string>
using namespace std;

struct Contact {
   // linked list//
    string name;
    string phone;
    string email;
    Contact* next;
};

void printContacts(Contact* n);
void printContacts(Contact* n){
    while (n != NULL) {
        cout << "Name: " << n->name << ", Phone: " << n->phone << ", Email: " << n->email << endl;
        n = n->next;
    }
}

int main() {
    Contact* head = NULL;
    Contact* second = NULL;
    Contact* third = NULL;

    // Allocate 3 contacts in the heap
    head = new Contact();
    second = new Contact();
    third = new Contact();

    // Assign data to first contact
    head->name = "Jitin Kumar";
    head->phone = "9120810343";
    head->email = "jk9120810343@gmail.com";
    head->next = second;

    // Assign data to second contact
    second->name = "Arjit Singh";
    second->phone = "6386399057";
    second->email = "arjit2005singh@gmail.com";
    second->next = third;

    // Assign data to third contact
    third->name = "Adarsh Patel";
    third->phone = "6306211366";
    third->email = "adarshpatel2005@gmail.com";
    third->next = NULL;

    // Print the contacts
    printContacts(head);

    return 0;
}
