#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
int stack[MAX_SIZE],top=-1;
int isFull()
{
return (top==MAX_SIZE)?1:-1;
}
int isEmpty(){
	return (top==-1)?1:-1;
}
int peek(){
	return stack[top];
}
void push(int e){
	if(!is Full()){
		top++;
		stack[top]=e;
		printf("%d successfully inserted",e);
	}
	else {
		printf("stack overflow");
	}
}
void pop(){
	int d;
	if(!isEmpty())
	{
		d=stack[top];
	top--;
	printf("%d successfully deleted",d);
}
else{
	printf("stack overflow");
}
}
int main(){
	int choice,e;
	do
	{
		printf("Enter your choice");
		printf("1.Peek\n 2.push\n 3.Pop\n 4.Exit");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			peek()
			break;
			case 2:
			push()
			break;
			case 3:
			pop()
			break;
			case 4:
			exit()
			break;
			default :
			printf("invalid choice");
			break;
		}
while(1);
return 0;
}

