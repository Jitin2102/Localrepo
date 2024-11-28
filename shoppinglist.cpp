
#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    Item* next;
};

void addItem(Item*& head, const string& itemName) {
    Item* newItem = new Item();
    newItem->name = itemName;
    newItem->next = head;
    head = newItem;
}

void removeItem(Item*& head, const string& itemName) {
    Item* temp = head;
    Item* prev = NULL;

    while (temp != NULL && temp->name != itemName) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return; 

    if (prev == NULL) head = temp->next;
    else prev->next = temp->next;

    delete temp;
}

void printList(Item* n) {
    while (n != NULL) {
        cout << n->name << endl;
        n = n->next;
    }
}

int main() {
    Item* head = NULL;
    addItem(head, "Apples");
    addItem(head, "Bread");
    addItem(head, "Milk");

    cout << "Shopping List:" << endl;
    printList(head);

    cout << "\nRemoving 'Bread' from the list." << endl;
    removeItem(head, "Bread");

    cout << "\nUpdated Shopping List:" << endl;
    printList(head);
    return 0;

}
