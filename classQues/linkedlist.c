#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct LinkedList
{
    int data;
    struct LinkedList* next;
};
struct LinkedList *start;

void insert();
void display();
void del();
void edit();
void count();
void sort();
void reverse();
void exit();
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


int main()
{
    int ch1;
    char choice = 'y';
    start = NULL;
    system("cls");
    do
    {
        printf("\nLinked List Project!\n\n");
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
        switch(ch1)
        {
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
                //edit();
                break;
            case 5:
                count();
                break;
            case 6:
                //sort();
                break;
            case 7:
                reverse();
                break;
            case 8:
                choice = 'n';
                break;
            default:
                printf("Enter valid choice !!");
        }
    }while(choice == 'y');
    return 0;
}

void insert()
{
    int ch2;
    char choice = 'y';
    do
    {
        printf("\n 1. AT BEG");
        printf("\n 2. AT END");
        printf("\n 3. AT POSITION");
        printf("\n 4. ADD AFTER");
        printf("\n 5. ADD BEFORE");
        printf("\n 6. GO BACK");
        printf("\n Enter your choice - ");
        scanf("%d", &ch2);
        switch(ch2)
        {
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
    }while(choice == 'y');
}


void del()
{
    int ch3;
    char choice = 'y';
    do
    {
        printf("\n 1. AT BEG");
        printf("\n 2. AT END");
        printf("\n 3. AT POSITION");
        printf("\n 4. DELETE AFTER");
        printf("\n 5. DELETE BEFORE");
        printf("\n 6. GO BACK");
        printf("\n Enter your choice - ");
        scanf("%d", &ch3);
        switch(ch3)
        {
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
    }while(choice == 'y');
}

void display()
{
    struct LinkedList *temp;
    temp = start;
    while(temp != NULL)
    {
        printf("%d-->", temp->data);
        temp = temp->next;
    }
    printf("X");
}

void atBeg()
{
    struct LinkedList *temp,*node;
    node = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    printf("Enter the number you want to add - ");
    scanf("%d", &node->data);
    node->next = NULL;
    if(start == NULL)
    {
        start = node;
        return;
    }
    else
    {
        temp = start;
        start = node;
        node->next = temp;
        return;
        /* 
===========================================
Algorithm of Display:
===========================================
step 1: define Function DISPLAY()
step 2: SET temp = start   // Initialize temp to the start of the list
    
step 3: WHILE temp is NOT NULL  // Loop until the end of the list
step 4: PRINT temp.num + " --> "  // Print the value of the current node
step 5: SET temp = temp.next  // Move to the next node in the list
    
step 6: PRINT "NULL"  // Indicate the end of the list
step 7: End Function

___________________________________________
===========================================
Algorithm to ADD a node at Beg. of LinkList
===========================================

step 1 - Create a node
step 2 - if START == NULL then
	START = node
	return
             end if
step 3 - TEMP = START
step 4 - START = node
step 5 - next[node] = TEMP
step 6 - EXIT
=============================================*/
    }
    
}

void atEnd()
{
    struct LinkedList *temp,*node;
    node = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    printf("Enter the number you want to add - ");
    scanf("%d", &node->data);
    node->next = NULL;
    if(start == NULL)
    {
        start = node;
        return;
    }
    temp = start;
        while(temp->next!=NULL){
        	temp = temp->next;   //temp is the last node
		}
		temp->next=node;
}

void addBefore()
{
	int val;
    struct LinkedList *temp,*temp1,*node;
    
    printf("\nBefore which node you want to insert\n");
    scanf("%d",&val);
    
    node = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    
    printf("Enter the number you want to add - ");
    scanf("%d", &node->data);
    node->next = NULL;
    
    temp = start;
    
    while(temp->data != val){
    	temp1 = temp;
    	temp = temp->next;
	}
	
	temp1->next = node;
	node->next = temp;
}

void addAfter()
{
	int val;
    struct LinkedList *temp,*node;
    
    printf("\nAfter which node you want to insert\n");
    scanf("%d",&val);
    
    node = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    
    printf("Enter the number you want to add - ");
    scanf("%d", &node->data);
    node->next = NULL;
    
    temp = start;
    
    while(temp->data != val){
    	temp = temp->next;
	}
	
	node->next = temp->next;
	temp->next = node;
}

void delBeg(){
	if(start == NULL){
		printf("LinkedList is Empty !!");
	}
	else{
		struct LinkedList *temp;
		temp = start;
		start = start->next;
		temp->next = NULL;
		free(temp);
	}
}

void delEnd(){
	if(start == NULL){
		printf("LinkedList is Empty !!");
	}
	else{
		struct LinkedList *temp,*temp1;
		
	    temp = start;
    
        while(temp->next != NULL){
    		temp1 = temp;
    		temp = temp->next;  //temp is then last node
		}
		temp1->next = NULL;  // temp1 will become the last node
		free(temp);
	}
}

void delBefore(){
	int val;
    struct LinkedList *temp,*temp1,*temp2;
    
    printf("\nBefore which node you want to delete\n");
    scanf("%d",&val);
    
    temp2 = start;
    temp1 = temp2->next;
    temp = temp1->next;
    
    while(temp->data != val){
    	temp2 = temp2->next;
    	temp1 = temp1->next;
    	temp = temp->next;
	}
	
	temp2->next = temp;
	temp1->next = NULL;
	
	free(temp1);
	
}

void delAfter(){
	int val;
    struct LinkedList *temp,*temp1,*temp2;
    
    printf("\nAfter which node you want to delete\n");
    scanf("%d",&val);
    
    temp2 = start;
    temp1 = temp2->next;
    temp = temp1->next;
    
    while(temp2->data != val){
    	temp2 = temp2->next;
    	temp1 = temp1->next;
    	temp = temp->next;
	}
	
	temp2->next = temp;
	temp1->next = NULL;
	
	free(temp1);
	
}

void count(){
	int count = 0;
	struct LinkedList *temp;
	
	temp = start;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	
	printf("\nThere are %d nodes in the Linked List\n",count);	
}

void delPosition(){
	int i=1, count_n=0, pos_n;
	struct LinkedList *temp, *temp1;
	
	printf("\nEnter position of node which you want to delete\n");
	scanf("%d",&pos_n);
	
	temp = start;
	
	while(temp != NULL){
		count_n++;
		temp = temp->next;
	}
	if(pos_n>count_n){
		printf("\nInvalid Deletion\n");
		return;
	}
	
	temp = start;
	
	while(i<pos_n){
		i++;
		temp1 = temp;
		temp = temp->next;
	}
	
	temp1->next = temp->next;
	temp->next = NULL;
	free(temp);
}

/*Algorithm to ADD a node  at specified position in LinkList :
============================================================
step 1 - Start
step 2 - Accept the position no. in pos_n where we want to insert a node.
step 3 - Create a new Node
step 4 - temp = start
step 5- repeat while(temp != NULL)
	count_n = count_n + 1
	temp = next[temp]
step 6 - end of while
step 7- if pos_n > count_n display "Invalid" and Return
step 8- temp = start and i = 1
step 9 - repeat while(i < pos_n)
	temp1 = temp
	temp = next[temp]
	i = i + 1
step 10- end of while
step 11 next[temp1] = node
step 12 next[node ] = temp
step 13 Stop
*/

void atPosition(){
	int i=1, count_n=0, pos_n;
	struct LinkedList *temp, *temp1, *node;
	
	printf("\nEnter position of node which you want to insert\n");
	scanf("%d",&pos_n);
	
	node = (struct LinkedList*)malloc(sizeof(struct LinkedList));
	
	printf("Enter the number you want to add - ");
    scanf("%d", &node->data);
    node->next = NULL;
	
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
	
}

void reverse(){
	struct LinkedList *temp, *curr, *old;
	temp = curr = old = NULL;
	temp = start;
	while(temp!=NULL){
		old = curr;
		curr = temp;
		temp = temp->next;
		curr->next = old;
	}
	start = curr;
	curr = NULL;
	old = NULL;
}

