#include<stdio.h>
#define size 4
int top=-1,a[size];
void push(int value);
void pop();
void show();
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	printf("Stack after push\n");
	show();
	pop();
	pop();
	printf("Stack after pop\n");
	show();
}
void push(int value){
	if(top==size-1){
		printf("Stack is full\n");
	}
	else{
		a[++top]=value;
		printf("push %d into stack\n",value);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else{
		printf("Pop %d from stack\n",a[top--]);
	}
}
void show(){
	if(top==-1)
	{
		printf("stack if empty");
	}
	else{
		for(int i=top;i>=0;i--){
			printf("%d\n",a[i]);
		}
	}
}