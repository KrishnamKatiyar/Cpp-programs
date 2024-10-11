#include <iostream>
using namespace std;

#define MAX 5  // Size of the Circular Queue

class CircularQueue {
private:
    int front, rear;
    int arr[MAX];

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (front == (rear + 1) % MAX);
    }

    bool isEmpty() {
        return (front == -1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << value << "." << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = value;
        cout << "Enqueued " << value << " to the queue." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        cout << "Dequeued " << arr[front] << " from the queue." << endl;
        if (front == rear) {
            front = rear = -1;  // Queue becomes empty
        } else {
            front = (front + 1) % MAX;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front];
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

