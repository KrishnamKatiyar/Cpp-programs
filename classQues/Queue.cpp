#include <iostream>
using namespace std;

class CircularQueue {
private:
    int front;
    int rear;
    int size;
    int *queue;

public:
    CircularQueue(int s) {
        front = rear = -1;
        size = s;
        queue = new int[s];
    }

    ~CircularQueue() {
        delete[] queue;
    }

    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1));
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }

        if (front == -1) {
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) {
            rear = 0; 
        } else {
            rear++;
        }

        queue[rear] = value;
        cout << value << " enqueued to queue\n";
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        int data = queue[front];
        queue[front] = -1; 

        if (front == rear) {
            front = rear = -1; 
        } else if (front == size - 1) {
            front = 0; 
        } else {
            front++;
        }

        return data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue elements are: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++) {
                cout << queue[i] << " ";
            }
        } else {
            for (int i = front; i < size; i++) {
                cout << queue[i] << " ";
            }
            for (int i = 0; i <= rear; i++) {
                cout << queue[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(14);
    q.enqueue(22);
    q.enqueue(13);
    q.enqueue(6);

    q.display();

    cout << "Dequeued value: " << q.dequeue() << endl;

    q.display();

    q.enqueue(9);
    q.enqueue(20);
    q.enqueue(5);

    q.display();

    q.enqueue(99); 

    return 0;
}

