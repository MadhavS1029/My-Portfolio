#include <stdio.h>
#include <stdlib.h>
//hello//
/*struct node{
    int data;
    struct node *next;
}*head,*tail,*temp;

void init() {
    head=tail=NULL;
}

void create() {
    int data;
    struct node *newnode;
    printf("Enter the element : ");
    scanf("%d", &data);
    newnode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        head=newnode;
        head->data=data;
        head->next=NULL;
        tail=head;
    }
    else{
        newnode->data=data;
        newnode->next=NULL;
        tail->next=newnode;
        tail=newnode;
    }
}

int size(){
    temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

void disp(){
    int s = size();
    temp=head;
    for(int i=0;i<s;i++){
        printf("   %d", temp->data);
        temp=temp->next;
    }
}

void beginingInsertion(){
    struct node *newnode;
    int data;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data of the element : ");
    scanf("%d", &data);
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}

void endInsertion(){
    struct node *newnode,*temp;
    int data;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data of the element : ");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=0;
    tail->next=newnode;
}

void positionInsertion(){
    int data;
    int position;
    int s = size();
    struct node* newnode,*temp;
    printf("\nEnter the position after where you want to insert : ");
    scanf("%d", &position);
    if(position>s){
        printf("Invalid position...");
    }
    else{
        temp=head;
        int i=1;
        while(i<position){
            temp=temp->next;
            i++;
        }
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data of the element : ");
        scanf("%d", &data);
        newnode->data=data;
        newnode->next=temp->next;
        temp->next=newnode;

    }
}

void beginingDeletion(){
    struct node *temp;
    temp=head;
    head=temp->next;
    free(temp);
}

void endDeletion(){
    struct node *temp, *tempprev;
    temp=head;
    while(temp->next!=0){
        tempprev=temp;
        temp=temp->next;
    }
    if(temp==head){
        head=0;
    }
    else{
        tempprev->next=NULL;
        free(temp);
    }
}

void positionDeletion(){
    struct node *temp,*nextnode;
    int pos,i=1;
    temp=head;
    printf("\nEnter which position you want to delete : ");
    scanf("%d", &pos);
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}

int main(){
    int choice,choice2,num,choice3;
    init();
    printf("Enter the amount of elements you want in your base linked list : ");
    scanf("%d", &num);
    for(int i=0;i<num;i++){
        create();
    }
    disp();
    do{
        printf("\nPlease choose from the below menu : \n[1] Insertion \n[2] Deletion \n[3] Exit \nYour choice : ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("\nPlease choose from the below menu : \n[1] Begining Insertion \n[2] End Insertion \n[3] Position Insertion \nYour choice : ");
            scanf("%d", &choice2);
            switch(choice2){
                case 1:
                beginingInsertion();
                disp();
                break;
                case 2:
                endInsertion();
                disp();
                break;
                case 3:
                positionInsertion();
                disp();
                break;
            }
            break;

            case 2:
            printf("\nPlease choose from the below menu : \n[1] Begining Deletion \n[2] End Deletion \n[3] Position Deletion \nYour choice : ");
            scanf("%d", &choice3);
            switch(choice3){
                case 1:
                beginingDeletion();
                disp();
                break;

                case 2:
                endDeletion();
                disp();
                break;

                case 3:
                positionDeletion();
                disp();
                break;
            }

            case 3:
            //printf("\nExiting now....");
            break;
        }
    }while(choice!=3);

}*/


