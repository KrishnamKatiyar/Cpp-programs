#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct LinkedList {
    int data;
    struct LinkedList* next;
    struct LinkedList* prev; // Previous pointer for doubly linked list
};

struct LinkedList *start;

void insert();
void display();
void del();
void edit();
void count();
void sort();
void reverse();
void atEnd();
void atBeg();
void atPosition();
void addAfter();
void addBefore();
void delBeg();
void delEnd();
void delBefore();
void delAfter();
void delPosition();

int main() {
    int ch1;
    char choice = 'y';
    start = NULL;
    system("cls");
    do {
        printf("\nDoubly Linked List Project!\n\n");
        printf("\n 1. INSERT");
        printf("\n 2. DISPLAY");
        printf("\n 3. DELETE");
        printf("\n 4. EDIT");
        printf("\n 5. COUNT NODES");
        printf("\n 6. SORTING");
        printf("\n 7. REVERSE");
        printf("\n 8. EXIT");
        printf("\n Enter your choice - ");
        scanf("%d", &ch1);
        switch(ch1) {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                del();
                break;
            case 4:
                // edit();
                break;
            case 5:
                count();
                break;
            case 6:
                // sort();
                break;
            case 7:
                reverse();
                break;
            case 8:
                choice = 'n';
                break;
            default:
                printf("Enter a valid choice !!");
        }
    } while (choice == 'y');
    return 0;
}

void insert() {
    int ch2;
    char choice = 'y';
    do {
        printf("\n 1. AT BEG");
        printf("\n 2. AT END");
        printf("\n 3. AT POSITION");
        printf("\n 4. ADD AFTER");
        printf("\n 5. ADD BEFORE");
        printf("\n 6. GO BACK");
        printf("\n Enter your choice - ");
        scanf("%d", &ch2);
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
                printf("Enter valid choice!");
        }
    } while (choice == 'y');
}

void display() {
    struct LinkedList *temp;
    temp = start;
    printf("NULL <-> ");
    while(temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void atBeg() {
    struct LinkedList *node;
    node = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    printf("Enter the number you want to add - ");
    scanf("%d", &node->data);
    node->next = start;
    node->prev = NULL;
    if (start != NULL) {
        start->prev = node;
    }
    start = node;
}

void atEnd() {
    struct LinkedList *temp, *node;
    node = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    printf("Enter the number you want to add - ");
    scanf("%d", &node->data);
    node->next = NULL;
    if (start == NULL) {
        node->prev = NULL;
        start = node;
        return;
    }
    temp = start;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;
}

void addBefore() {
    int val;
    struct LinkedList *temp, *node;
    printf("\nBefore which node do you want to insert?\n");
    scanf("%d", &val);
    node = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    printf("Enter the number you want to add - ");
    scanf("%d", &node->data);
    node->next = node->prev = NULL;
    temp = start;
    while(temp != NULL && temp->data != val) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Node not found.\n");
        free(node);
        return;
    }
    node->next = temp;
    node->prev = temp->prev;
    if (temp->prev != NULL) {
        temp->prev->next = node;
    } else {
        start = node;
    }
    temp->prev = node;
}

void addAfter() {
    int val;
    struct LinkedList *temp, *node;
    printf("\nAfter which node do you want to insert?\n");
    scanf("%d", &val);
    node = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    printf("Enter the number you want to add - ");
    scanf("%d", &node->data);
    node->next = node->prev = NULL;
    temp = start;
    while(temp != NULL && temp->data != val) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Node not found.\n");
        free(node);
        return;
    }
    node->next = temp->next;
    node->prev = temp;
    if (temp->next != NULL) {
        temp->next->prev = node;
    }
    temp->next = node;
}

void del() {
    int ch3;
    char choice = 'y';
    do {
        printf("\n 1. AT BEG");
        printf("\n 2. AT END");
        printf("\n 3. AT POSITION");
        printf("\n 4. DELETE AFTER");
        printf("\n 5. DELETE BEFORE");
        printf("\n 6. GO BACK");
        printf("\n Enter your choice - ");
        scanf("%d", &ch3);
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
                printf("Enter valid choice!");
        }
    } while (choice == 'y');
}

void delBeg() {
    if (start == NULL) {
        printf("LinkedList is Empty !!\n");
    } else {
        struct LinkedList *temp;
        temp = start;
        start = start->next;
        if (start != NULL) {
            start->prev = NULL;
        }
        free(temp);
    }
}

void delEnd() {
    if (start == NULL) {
        printf("LinkedList is Empty !!\n");
    } else {
        struct LinkedList *temp;
        temp = start;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        if (temp->prev != NULL) {
            temp->prev->next = NULL;
        } else {
            start = NULL;
        }
        free(temp);
    }
}

void delBefore() {
    int val;
    struct LinkedList *temp;
    printf("\nBefore which node do you want to delete?\n");
    scanf("%d", &val);
    temp = start;
    while(temp != NULL && temp->next != NULL && temp->next->data != val) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Invalid operation.\n");
        return;
    }
    struct LinkedList *toDelete = temp;
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    } else {
        start = temp->next;
        start->prev = NULL;
    }
    free(toDelete);
}

void delAfter() {
    int val;
    struct LinkedList *temp;
    printf("\nAfter which node do you want to delete?\n");
    scanf("%d", &val);
    temp = start;
    while(temp != NULL && temp->data != val) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Invalid operation.\n");
        return;
    }
    struct LinkedList *toDelete = temp->next;
    temp->next = toDelete->next;
    if (toDelete->next != NULL) {
        toDelete->next->prev = temp;
    }
    free(toDelete);
}

void delPosition() {
    int pos_n, i = 1;
    struct LinkedList *temp;
    printf("\nEnter position of node which you want to delete\n");
    scanf("%d", &pos_n);
    temp = start;
    while(temp != NULL && i < pos_n) {
        temp = temp->next;
        i++;
    }
    if (temp == NULL) {
        printf("Invalid position.\n");
        return;
    }
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    } else {
        start = temp->next;
    }
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    free(temp);
}

void atPosition(){
	int i=1, count_n=0, pos_n;
	struct LinkedList *temp, *temp1, *node;
	
	printf("\nEnter position of node which you want to insert\n");
	scanf("%d",&pos_n);
	
	node = (struct LinkedList*)malloc(sizeof(struct LinkedList));
	
	printf("Enter the number you want to add - ");
    scanf("%d", &node->data);
    node->next = NULL;
    node->prev = NULL;
	
	temp = start;
	
	while(temp != NULL){
		count_n++;
		temp = temp->next;
	}
	if(pos_n>count_n){
		printf("\nInvalid Insertion\n");
		return;
	}
	
	temp = start;
	
	while(i<pos_n){
		temp1 = temp;
		temp = temp->next;
		i++;
	}
	
	temp1->next = node;
	node->next = temp;
	node->prev = temp1;
	
}

void count() {
    int count = 0;
    struct LinkedList *temp;
    temp = start;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("\nThere are %d nodes in the Linked List\n", count);    
}

void reverse() {
    struct LinkedList *temp = NULL;
    struct LinkedList *curr = start;
    while(curr != NULL) {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    if (temp != NULL) {
        start = temp->prev;
    }
}

