#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class CircularQueue {
private:
    Node* front;
    Node* rear;

public:
    CircularQueue() {
        front = nullptr;
        rear = nullptr;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = rear = newNode;
            rear->next = front;  // Make it circular
        } else {
            rear->next = newNode;
            rear = newNode;
            rear->next = front;  // Maintain circular property
        }
        cout << "Enqueued " << value << " to the queue." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        if (front == rear) {  // Only one element
            cout << "Dequeued " << front->data << " from the queue." << endl;
            delete front;
            front = rear = nullptr;
        } else {
            Node* temp = front;
            cout << "Dequeued " << front->data << " from the queue." << endl;
            front = front->next;
            rear->next = front;  // Maintain circular property
            delete temp;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        Node* temp = front;
        cout << "Queue elements: ";
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != front);
        cout << endl;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }
};

int main() {
    CircularQueue cq;
    int choice, value;

    while (true) {
        cout << "\nCircular Queue Menu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Peek\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            cq.enqueue(value);
            break;
        case 2:
            cq.dequeue();
            break;
        case 3:
            cq.display();
            break;
        case 4:
            value = cq.peek();
            if (value != -1) {
                cout << "Front element: " << value << endl;
            }
            break;
        case 5:
            cout << "Exiting program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

