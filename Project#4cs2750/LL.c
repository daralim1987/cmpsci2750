//Dara Lim
//Project#4
//Part D

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int value;
    struct Node *next;
};

//Function insert a node at the front of linked list
void insertFront(struct Node** newHead, int newValue){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = newValue;
    newNode->next = (*newHead);
    (*newHead) = newNode;
}

//Function search linked list for specific value
void searchValue(struct Node* head, int num){
    struct Node* current = head;
    while(current != NULL){
        if(current->value == num){
            printf("Yes, the integer existed\n");
            return;
        }
        current = current->next;
    }
    printf("No, the integer not existed\n");

}

//Function to delete a node with a given specific value
void removeNode(struct Node **head_ref, int key)
{
    struct Node* tmp = *head_ref, *prev;
    if(tmp != NULL && tmp->value == key){
        *head_ref = tmp->next;
        free(tmp);
        return;
    }
    while(tmp != NULL && tmp->value != key){
        prev = tmp;
        tmp = tmp->next;
    }
    if(tmp == NULL){
        return;
    }
    prev->next = tmp->next;
    free(tmp);
}

//Function print the value in linked list
void printVal(struct Node *n)
{
    while (n != NULL) {
        printf("%d " , n->value);
        n = n->next;
    }
    printf("\n");
}

//Main function
int main(int argc, char** argv)
{
    struct Node* head = NULL;
    int t;
    printf("How many integer you want to insert into a linked list? \n");
    scanf("%d", &t);
    int number;
    for(int i = 0; i < t; i++){
        printf("Number you want to insert \n");
        scanf("%d", &number);
        insertFront(&head, number);
    }
    
    puts("Integer in Linked List are: ");
    printVal(head);
    int numberSearch;
    printf("Enter integer you want to search \n");
    scanf("%d", &numberSearch);
    searchValue(head, numberSearch);
    int numberRemove;
    printf("Enter integer you want to remove \n");
    scanf("%d", &numberRemove);
    removeNode(&head, numberRemove);
    puts("Linked List after removing are: ");
    printVal(head);
    return 0;
}
