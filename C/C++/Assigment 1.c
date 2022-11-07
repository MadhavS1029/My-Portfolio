//Question 1
/*#include <stdio.h>

int siz;
int array[100];
void insert(int ele){
    int index=0;
    for(int i=0;i<siz;i++){
        if(ele>=array[i] && ele<array[i+1] || ele>array[i]){
            index=i+1;
        }
    }for(int i=siz-1;i>=index;i--){
        array[i+1]=array[i];
    }array[index]=ele;
    siz++;
}

void delet(int index){
    for(int i=index;i<siz;i++){
        array[i]=array[i+1];
    }siz--;
}
void display(){
    for(int i=0;i<siz;i++){
        printf("%d ",array[i]);
    }
}

int search(int ele){

    int start=0;
    int end=siz;
    while(start<end){
        int mid=(start+end)/2;
        if(ele<array[mid]){
            end=mid;
        }if(ele>array[mid]){
            start=mid+1;
        }
        if(ele==array[mid]){
            return mid;
        }
    }return -1;

}

int main(){
    char flag='A';
    printf("Enter no of elements you want to enter\n");
    scanf("%d",&siz);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<siz;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<siz-1;i++){
       for(int j=i+1;j<siz;j++){
           if(array[i]>array[j]){

               int temp=array[i];
               array[i]=array[j];
               array[j]=temp;
           }
       }
   }
   
   while(flag=='A'){
    int selection;
    printf("For insertion please enter 1 : \n");
    printf("For deletion please enter 2 : \n");
    printf("For searching please enter 3 : \n");
    printf("For display please enter 4 : \n");
    printf("Enter 5 to exit : \n");
    scanf("%d",&selection);
    if(selection==1){
        int ele;
        printf("Enter the elemnt you want to insert : ");
        scanf("%d",&ele);
        insert(ele);
        printf("\n");
    }
    else if(selection==2){
        int index;
        printf("Enter the index from which you want to delete the ele : ");
        scanf("%d",&index);
        delet(index);
        printf("\n");
    }
    else if(selection==3){
        int ele;
        printf("Enter the elemnt you want to search : ");
        scanf("%d",&ele);
        int atIndex=search(ele);
        printf("The ele is present at position: %d",atIndex);
        printf("\n");
    }
    else if(selection==4){
        display();
        printf("\n");
    }
    else if(selection==5){
        flag='F';
        printf("Exiting from the program!!\n");
    }
   }
}*/


//Question 2
/*#include <stdio.h>

int array[100];
int siz;

void insert(int index,int ele){
    if(index>siz){
        printf("This is not the valid index..... out of bound");
    }else{
        for(int i=siz-1;i>=index;i--){
            array[i+1]=array[i];
        }
        array[index]=ele;
        siz++;
    }
}

void delet(int index){
    if(siz==0){
        printf("No ele is present in the list\n");
    }if(index>siz){
        printf("There is no ele at index:  %d",index);
    }
    else{
        for(int i=index;i<siz;i++){
            array[i]=array[i+1];
        }siz--;
    }
}
void display(){
    for(int i=0;i<siz;i++){
        printf("%d ",array[i]);
    }
}
int search(int ele){
    int position;
    for(int i=0;i<siz;i++){
        if(ele==array[i]){
            position=i;
        }
    }return position;
}

int main(){
    char flag='A';
    printf("Enter no of elements you want to enter\n");
    scanf("%d",&siz);
    printf("Enter the elements of the array:\n");
    for(int i=0;i<siz;i++){
        scanf("%d",&array[i]);
    }
    while(flag=='A'){
    int selection;
    printf("For insertion please enter 1 : \n");
    printf("For deletion please enter 2 : \n");
    printf("For searching please enter 3 : \n");
    printf("For display please enter 4 : \n");
    printf("Enter 5 to exit\n");
    scanf("%d",&selection);
    if(selection==1){
        int ele;
        int index;
        printf("Enter the ele you want to insert : ");
        scanf("%d",&ele);
        printf("Enter the index you want to add %d : ",ele);
        scanf("%d",&index);
        insert(index,ele);
        printf("\n");
    }
    else if(selection==2){
        int index;
        printf("Enter the index from which you want to delete the ele : ");
        scanf("%d",&index);
        delet(index);
        printf("\n");
    }
    else if(selection==3){
        int ele;
        printf("Enter the ele you want to search : ");
        scanf("%d",&ele);
        int atIndex=search(ele);
        printf("The ele is present at position: %d",atIndex);
        printf("\n");
    }
    else if(selection==4){
        display();
        printf("\n");
    }
    else if(selection==5){
        flag='F';
        printf("Exiting from the program!!\n");
    }
   }
}*/


//Question 3
/*#include <stdio.h>

int siz=0;
int array[100];
int capacity;
int nextIndex=-1;

int Empty(){
    if(siz==0){
        return 0;
    }return 1;
}
int getSize(){
    return siz;
}
void peek(){
    printf("%d",array[nextIndex-1]);
}
void push(int ele){
    if(siz==0){
        nextIndex=0;
    }
    if(siz==capacity){
        printf("Stack is Full\n");
    }else{
        array[nextIndex]=ele;
        nextIndex++;
        siz++;
    }
}
int pop(){
    int poppedElement;
    if(siz==0 || nextIndex==0){
        printf("Stack is Empty\n");
        return -1;
    }
    nextIndex--;
    poppedElement=array[nextIndex];
    siz--;
    return poppedElement;
    
}
void display(){
    for(int i=0;i<siz;i++){
        printf("%d ",array[i]);
    }
}

int main(){
    char flag='A';
    printf("Enter the siz of array: \n");
    scanf("%d",&capacity);
    int selection;
    while(flag=='A'){
    int selection;
    printf("For push please enter 1 : \n");
    printf("For pop please enter 2 : \n");
    printf("For peek please enter 3 : \n");
    printf("For display please enter 4 : \n");
    printf("To know the siz of stack enter 5 : \n");
    printf("Enter 6 for exit : \n");
    scanf("%d",&selection);
    if(selection==1){
        int ele;
        printf("Enter the ele you want to insert : ");
        scanf("%d",&ele);
        push(ele);
        printf("\n");
    }
    else if(selection==2){
        int poppedElement=pop();
        if(poppedElement!=-1){
            printf("The popped ele is : %d",poppedElement);
            printf("\n");
        }
    }
    else if(selection==3){
        peek();
        printf("\n");
    }
    else if(selection==4){
        if(siz==0){
            printf("Stack is Empty!!\n");
        }else{
            display();
            printf("\n");
        }
    }
    else if(selection==5){
        int sizeOfStack=getSize();
        printf("Size of the Stack is : %d",sizeOfStack);
        printf("\n");
    }
    else if(selection==6){
        flag='F';
        printf("Exiting from the program!!\n");
    }
   }
}*/


//Question 4
/*#define SIZE 50 
#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

char s[SIZE];
int top = -1; 


void RemoveSpaces(char* source) {
 char* i = source;
 char* j = source;
 while(*j != 0) {
 *i = *j++;
 if(*i != ' ')
 i++;
 }
 *i = 0;
}


void push(char elem) { 
 s[++top] = elem;
}

char pop() { 
 return (s[top--]);
}

int prelem(char elem) { 
 switch (elem) {
 case '#':
 return 0;
 case '(':
 return 1;
 case '+':
 case '-':
 return 2;
 case '*':
 case '/':
 return 3;
 }
}

void infix_to_postfix(char *infix, char *postfix) {
 char ch, elem;
 int i = 0, k = 0;
 
 RemoveSpaces(infix);
 push('#');
 
 while ((ch = infix[i++]) != '\n') {
 if (ch == '(')
 push(ch);
 else if (isalnum(ch))
 postfix[k++] = ch;
 else if (ch == ')') {
 while (s[top] != '(')
 postfix[k++] = pop();
 elem = pop(); 
 } else { 
 while (prelem(s[top]) >= prelem(ch))
 postfix[k++] = pop();
 push(ch);
 }
 }
 
 while (s[top] != '#') 
 postfix[k++] = pop();
 
 postfix[k] = 0; 
}

int eval_postfix(char *postfix) {
 char ch;
 int i = 0, op1, op2;
 while((ch = postfix[i++]) != 0) {
 if(isdigit(ch)) 
 push(ch-'0');
 else { 
 op2 = pop();
 op1 = pop();
 switch(ch) {
 case '+' : push(op1+op2); 
 break;
 case '-' : push(op1-op2); 
 break;
 case '*' : push(op1*op2);
 break;
 case '/' : push(op1/op2);
 break;
 }
 }
 }
 return s[top];
}

int main() { 
 char infx[20], pofx[20];int t=1;
 
 printf("\nInput the infix expression: ");
 fgets(infx, 50, stdin);
 int choice;
 infix_to_postfix(infx, pofx);
 while(t==1){

    printf("type 1 to see postfix\n");
    printf(" type 2 to see the evaluation\n");
    printf("type 3 to exit\n");
    printf("Enter choice : \n");
    scanf("%d",&choice);

    if (choice==1){
        printf("\nGiven Infix Expression: %sPostfix Expression : %s\n", infx, pofx);
        top = -1;
    }
    else if (choice==2) {
 printf("\nResult of evaluation of postfix expression : %d\n", eval_postfix(pofx));
    }
    else if (choice==3){
    	t=0;
    	printf("Program exited.");
    }
}
    return 0;
}*/


//Question 5
/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

#define BLANK ' '
#define TAB '\t'
#define MAX 50

long int pop();
long int pre_eval();
char infix[MAX], prefix[MAX];
long int stack[MAX];
int top;
int empty();
int white_space(char symbol);

void infix_to_prefix();
int priority(char symbol);
void push(long int symbol);
long int pop();
long int pre_eval();



void infix_to_prefix()
{
        int i,j,p,n;
        char next ;
        char symbol;
        char temp;
        n=strlen(infix);
        p=0;

        for(i=n-1; i>=0; i--)
        {
                symbol=infix[i];
                if(!white_space(symbol))
                {
                        switch(symbol)
                        {
                        case ')':
                                push(symbol);
                                break;
                        case '(':
                                while( (next=pop()) != ')')
                                        prefix[p++] = next;
                                break;
                        case '+':
                        case '-':
                        case '*':
                        case '/':
                        case '%':
                        case '^':
                                while( !empty( ) &&  priority(stack[top])> priority(symbol) )
                                        prefix[p++] = pop();
                                push(symbol);
                                break;
                        default: /if an operand comes/
                             prefix[p++] = symbol;
                        }
                }
        }
        while(!empty( ))
                prefix[p++] = pop();
        prefix[p] = '\0'; /End prefix with'\0' to make it a string/

        for(i=0,j=p-1;i<j;i++,j--)
        {
                temp=prefix[i];
                prefix[i]=prefix[j];
                prefix[j]=temp;
        }
}

int priority(char symbol )
{
        switch(symbol)
        {
        case ')':
                return 0;
        case '+':
        case '-':
                return 1;
        case '*':
        case '/':
        case '%':
                return 2;
        case '^':
                return 3;
        default :
                 return 0;
        }/End of switch/
}/End of priority()/

void push(long int symbol)
{
        if(top > MAX)
        {
                printf("Stack overflow\n");
                exit(1);
        }
        else
        {
                top=top+1;
                stack[top] = symbol;
        }
}/End of push()/

long int pop()
{
        if(top == -1 )
        {
                printf("Stack underflow \n");
                exit(2);
        }
        return (stack[top--]);
}/End of pop()/
int empty()
{
        if(top==-1)
                return 1;
        else
                return 0;
}

int white_space(char symbol)
{
        if(symbol==BLANK || symbol==TAB || symbol=='\0')
                return 1;
        else
                return 0;
}/End of white_space()/

long int pre_eval()
{
        long int a,b,temp,result;
        int i;

        for(i=strlen(prefix)-1;i>=0;i--)
        {
                if(prefix[i]<='9' && prefix[i]>='0')
                        push( prefix[i]-48 );
                else
                {
                        b=pop();
                        a=pop();
                        switch(prefix[i])
                        {
                        case '+':
                                temp=b+a; break;
                        case '-':
                                temp=b-a;break;
                        case '*':
                                temp=b*a;break;
                        case '/':
                                temp=b/a;break;
                        case '%':
                                temp=b%a;break;
                        case '^':
                                temp=pow(b,a);
                        }
                        push(temp);
                }
        }
        result=pop();
        return result;
}

int main()
{
        long int val;
        top = -1;
        printf("Enter infix : ");
        gets(infix);
        int selection;
        infix_to_prefix();
        while (true){
            printf("Press 1 for seeing the prefix, 2 for seeing the evaluation, 3 for exiting: ");
            scanf("%d", &selection);
            if (selection==1){
            printf("prefix : %s\n",prefix);
            val=pre_eval();
            }
            else if (selection==2){
            printf("Value of expression : %ld\n",val);
            }
            else if (selection ==3){
                break;
            }
        }
        return 0;
}*/

