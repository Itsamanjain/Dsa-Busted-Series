#include <iostream>

struct Node {
    int data;
    Node* next;
};

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

    // Print the linked list
    printLinkedList(head);

    // Clean up the memory
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}
