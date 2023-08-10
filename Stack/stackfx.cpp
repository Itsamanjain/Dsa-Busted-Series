#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.top() << std::endl;

    // Pop the top element
    myStack.pop();

    std::cout << "Top element after pop: " << myStack.top() << std::endl;

    std::cout << "Is stack empty? " << (myStack.empty() ? "Yes" : "No") << std::endl;

    // Swap with another stack
    std::stack<int> anotherStack;
    anotherStack.push(100);
    anotherStack.push(200);

    std::cout << "Stack before swap:" << std::endl;
    std::cout << "myStack top: " << myStack.top() << std::endl;
    std::cout << "anotherStack top: " << anotherStack.top() << std::endl;

    myStack.swap(anotherStack);

    std::cout << "Stack after swap:" << std::endl;
    std::cout << "myStack top: " << myStack.top() << std::endl;
    std::cout << "anotherStack top: " << anotherStack.top() << std::endl;

    // Emplace elements onto the stack
    myStack.emplace(50);

    std::cout << "Top element after emplace: " << myStack.top() << std::endl;

    return 0;
}
