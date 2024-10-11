#include <iostream>
using namespace std;

class LinkedList {
private:
    struct Node {
        int data;
        Node* next;
    };
    
    Node* start;

public:
    LinkedList() : start(nullptr) {} // Constructor to initialize start to NULL

    void insert();
    void display();
    void del();  // Declaration of del() function
    void count();

    // Insertion operations
    void atEnd();
    void atBeg();
    void atPosition();
    void addAfter();
    void addBefore();

    // Deletion operations
    void delBeg();
    void delEnd();
    void delBefore();
    void delAfter();
    void delPosition();
};

void LinkedList::insert() {
    int ch2;
    char choice = 'y';
    do {
        cout << "\n 1. AT BEG";
        cout << "\n 2. AT END";
        cout << "\n 3. AT POSITION";
        cout << "\n 4. ADD AFTER";
        cout << "\n 5. ADD BEFORE";
        cout << "\n 6. GO BACK";
        cout << "\n Enter your choice - ";
        cin >> ch2;
        switch(ch2) {
            case 1:
                atBeg();
                break;
            case 2:
                atEnd();
                break;
            case 3:
                atPosition();
                break;
            case 4:
                addAfter();
                break;
            case 5:
                addBefore();
                break;
            case 6:
                choice = 'n';
                break;
            default:
                cout << "Enter valid choice!";
        }
    } while(choice == 'y');
}

void LinkedList::display() {
    Node* temp = start;
    while (temp != nullptr) {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "X";
}

void LinkedList::atBeg() {
    Node* node = new Node;
    cout << "Enter the number you want to add - ";
    cin >> node->data;
    node->next = nullptr;
    if (start == nullptr) {
        start = node;
    } else {
        node->next = start;
        start = node;
    }
}

void LinkedList::atEnd() {
    Node* node = new Node;
    cout << "Enter the number you want to add - ";
    cin >> node->data;
    node->next = nullptr;
    if (start == nullptr) {
        start = node;
    } else {
        Node* temp = start;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = node;
    }
}

void LinkedList::addBefore() {
    int val;
    cout << "\nBefore which node you want to insert\n";
    cin >> val;
    
    Node* node = new Node;
    cout << "Enter the number you want to add - ";
    cin >> node->data;
    node->next = nullptr;
    
    if (start->data == val) {
        node->next = start;
        start = node;
        return;
    }

    Node* temp = start;
    Node* temp1 = nullptr;
    
    while (temp != nullptr && temp->data != val) {
        temp1 = temp;
        temp = temp->next;
    }
    
    if (temp == nullptr) {
        cout << "Node with value " << val << " not found.\n";
    } else {
        temp1->next = node;
        node->next = temp;
    }
}

void LinkedList::addAfter() {
    int val;
    cout << "\nAfter which node you want to insert\n";
    cin >> val;
    
    Node* node = new Node;
    cout << "Enter the number you want to add - ";
    cin >> node->data;
    node->next = nullptr;
    
    Node* temp = start;
    
    while (temp != nullptr && temp->data != val) {
        temp = temp->next;
    }
    
    if (temp == nullptr) {
        cout << "Node with value " << val << " not found.\n";
    } else {
        node->next = temp->next;
        temp->next = node;
    }
}

void LinkedList::del() {
    int ch3;
    char choice = 'y';
    do {
        cout << "\n 1. AT BEG";
        cout << "\n 2. AT END";
        cout << "\n 3. AT POSITION";
        cout << "\n 4. DELETE AFTER";
        cout << "\n 5. DELETE BEFORE";
        cout << "\n 6. GO BACK";
        cout << "\n Enter your choice - ";
        cin >> ch3;
        switch(ch3) {
            case 1:
                delBeg();
                break;
            case 2:
                delEnd();
                break;
            case 3:
                delPosition();
                break;
            case 4:
                delAfter();
                break;
            case 5:
                delBefore();
                break;
            case 6:
                choice = 'n';
                break;
            default:
                cout << "Enter valid choice!";
        }
    } while(choice == 'y');
}


void LinkedList::delBeg() {
    if (start == nullptr) {
        cout << "LinkedList is Empty !!";
    } else {
        Node* temp = start;
        start = start->next;
        delete temp;
    }
}

void LinkedList::delEnd() {
    if (start == nullptr) {
        cout << "LinkedList is Empty !!";
    } else {
        Node* temp = start;
        Node* temp1 = nullptr;
        
        while (temp->next != nullptr) {
            temp1 = temp;
            temp = temp->next;
        }
        
        if (temp1 != nullptr) {
            temp1->next = nullptr;
        } else {
            start = nullptr;
        }
        delete temp;
    }
}

void LinkedList::delBefore() {
    int val;
    cout << "\nBefore which node you want to delete\n";
    cin >> val;
    
    if (start == nullptr || start->next == nullptr || start->data == val) {
        cout << "Invalid operation!\n";
        return;
    }
    
    Node* temp2 = start;
    Node* temp1 = temp2->next;
    Node* temp = temp1->next;
    
    while (temp != nullptr && temp->data != val) {
        temp2 = temp2->next;
        temp1 = temp1->next;
        temp = temp->next;
    }
    
    if (temp == nullptr) {
        cout << "Node with value " << val << " not found.\n";
    } else {
        temp2->next = temp;
        delete temp1;
    }
}

void LinkedList::delAfter() {
    int val;
    cout << "\nAfter which node you want to delete\n";
    cin >> val;
    
    Node* temp2 = start;
    Node* temp1 = temp2->next;
    Node* temp = temp1->next;
    
    while (temp2 != nullptr && temp2->data != val) {
        temp2 = temp2->next;
        temp1 = temp1->next;
        temp = temp->next;
    }
    
    if (temp1 == nullptr || temp == nullptr) {
        cout << "Invalid operation or node not found.\n";
    } else {
        temp2->next = temp;
        delete temp1;
    }
}

void LinkedList::count() {
    int count = 0;
    Node* temp = start;
    
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    
    cout << "\nThere are " << count << " nodes in the Linked List\n";
}

void LinkedList::delPosition() {
    int i = 1, count_n = 0, pos_n;
    Node* temp = start;
    Node* temp1 = nullptr;
    
    cout << "\nEnter position of node which you want to delete\n";
    cin >> pos_n;
    
    while (temp != nullptr) {
        count_n++;
        temp = temp->next;
    }
    
    if (pos_n > count_n) {
        cout << "\nInvalid Deletion\n";
        return;
    }
    
    temp = start;
    
    if (pos_n == 1) {
        start = temp->next;
        delete temp;
        return;
    }
    
    while (i < pos_n) {
        i++;
        temp1 = temp;
        temp = temp->next;
    }
    
    temp1->next = temp->next;
    delete temp;
}

void LinkedList::atPosition() {
    int i = 1, count_n = 0, pos_n;
    Node* temp = start;
    Node* temp1 = nullptr;
    
    cout << "\nEnter position of node which you want to insert\n";
    cin >> pos_n;
    
    Node* node = new Node;
    cout << "Enter the number you want to add - ";
    cin >> node->data;
    node->next = nullptr;
    
    while (temp != nullptr) {
        count_n++;
        temp = temp->next;
    }
    
    if (pos_n > count_n) {
        cout << "\nInvalid Insertion\n";
        return;
    }
    
    temp = start;
    
    if (pos_n == 1) {
        node->next = start;
        start = node;
        return;
    }
    
    while (i < pos_n) {
        temp1 = temp;
        temp = temp->next;
        i++;
    }
    
    temp1->next = node;
    node->next = temp;
}

int main() {
    LinkedList list;
    int ch1;
    char choice = 'y';
    
    do {
        cout << "\nLinked List Project!\n\n";
        cout << "\n 1. INSERT";
        cout << "\n 2. DISPLAY";
        cout << "\n 3. DELETE";
        cout << "\n 4. COUNT NODES";
        cout << "\n 5. EXIT";
        cout << "\n Enter your choice - ";
        cin >> ch1;
        switch(ch1) {
            case 1:
                list.insert();
                break;
            case 2:
                list.display();
                break;
            case 3:
                list.del();
                break;
            case 4:
                list.count();
                break;
            case 5:
                choice = 'n';
                break;
            default:
                cout << "Enter valid choice !!";
        }
    } while (choice == 'y');
    
    return 0;
}

