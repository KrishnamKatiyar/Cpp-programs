#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d onto the stack.\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop from the stack.\n");
        return -1;
    } else {
        int value = stack[top--];
        printf("%d popped from the stack.\n", value);
        return value;
    }
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty! No top element.\n");
        return -1;
    } else {
        return stack[top];
    }
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty! Nothing to display.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                value = peek();
                if (value != -1) {
                    printf("Top element is %d\n", value);
                }
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}







































//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX 5 // Define the maximum size of the stack
//
//int stack[MAX];
//int top = -1;
//
//// Function to check if the stack is full
//int isFull() {
//    return top == MAX - 1;
//}
//
//// Function to check if the stack is empty
//int isEmpty() {
//    return top == -1;
//}
//
//// Function to add an element to the stack
//void push(int value) {
//    if (isFull()) {
//        printf("Stack Overflow! Cannot push %d onto the stack.\n", value);
//    } else {
//        stack[++top] = value;
//        printf("%d pushed onto the stack.\n", value);
//    }
//}
//
//// Function to remove an element from the stack
//int pop() {
//    if (isEmpty()) {
//        printf("Stack Underflow! Cannot pop from the stack.\n");
//        return -1; // Returning -1 as an error value
//    } else {
//        int value = stack[top--];
//        printf("%d popped from the stack.\n", value);
//        return value;
//    }
//}
//
//// Function to view the top element of the stack
//int peek() {
//    if (isEmpty()) {
//        printf("Stack is empty! No top element.\n");
//        return -1; // Returning -1 as an error value
//    } else {
//        return stack[top];
//    }
//}
//
//// Function to display all elements in the stack
//void display() {
//    if (isEmpty()) {
//        printf("Stack is empty! Nothing to display.\n");
//    } else {
//        printf("Stack elements: ");
//        for (int i = 0; i <= top; i++) {
//            printf("%d ", stack[i]);
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int choice, value;
//
//    while (1) {
//        printf("\nStack Operations:\n");
//        printf("1. Push\n");
//        printf("2. Pop\n");
//        printf("3. Peek\n");
//        printf("4. Display\n");
//        printf("5. Exit\n");
//        printf("Enter your choice: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//            case 1:
//                printf("Enter the value to push: ");
//                scanf("%d", &value);
//                push(value);
//                break;
//            case 2:
//                pop();
//                break;
//            case 3:
//                value = peek();
//                if (value != -1) {
//                    printf("Top element is %d\n", value);
//                }
//                break;
//            case 4:
//                display();
//                break;
//            case 5:
//                exit(0);
//            default:
//                printf("Invalid choice! Please enter a valid option.\n");
//        }
//    }
//
//    return 0;
//}
//
//

