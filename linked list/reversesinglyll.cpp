#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

void printLinkedList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create the linked list
    Node* head = new Node{3, nullptr};
    Node* second = new Node{5, nullptr};
    Node* third = new Node{7, nullptr};
    Node* fourth = new Node{9, nullptr};

    head->next = second;
    second->next = third;
    third->next = fourth;

    std::cout << "Original linked list: ";
    printLinkedList(head);

    // Reverse the linked list
    head = reverseLinkedList(head);

    std::cout << "Reversed linked list: ";
    printLinkedList(head);

    // Clean up the memory
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
