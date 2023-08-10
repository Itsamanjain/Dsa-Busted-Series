#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void reverseDoublyLinkedList(Node** head) {
    Node* current = *head;
    Node* temp = nullptr;

    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != nullptr) {
        *head = temp->prev;
    }
}

void printDoublyLinkedList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create the doubly linked list
    Node* head = new Node{1, nullptr, nullptr};
    Node* second = new Node{2, nullptr, nullptr};
    Node* third = new Node{3, nullptr, nullptr};

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    std::cout << "Original linked list: ";
    printDoublyLinkedList(head);

    // Reverse the doubly linked list
    reverseDoublyLinkedList(&head);

    std::cout << "Reversed linked list: ";
    printDoublyLinkedList(head);

    // Clean up the memory
    delete head;
    delete second;
    delete third;

    return 0;
}
