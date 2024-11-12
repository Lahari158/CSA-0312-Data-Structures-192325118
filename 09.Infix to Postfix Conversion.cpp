#include <stdio.h>
#include <string.h>
#define MAX 100

// Stack operations
char stack[MAX];
int top = -1;

void push(char x) {
    if (top == (MAX - 1)) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = x;
}

char pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

int precedence(char x) {
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}

int isOperator(char x) {
    return (x == '+' || x == '-' || x == '*' || x == '/');
}

// Custom function to check if a character is an alphanumeric operand
int isAlnum(char ch) {
    return (ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

void infixToPostfix(char* infix) {
    char postfix[MAX];
    int i = 0, j = 0;
    
    while (infix[i] != '\0') {
        char ch = infix[i];

        // If operand, add to postfix output
        if (isAlnum(ch)) {
            postfix[j++] = ch;
        }
        // If '(', push to stack
        else if (ch == '(') {
            push(ch);
        }
        // If ')', pop from stack to postfix until '(' is encountered
        else if (ch == ')') {
            while (stack[top] != '(')
                postfix[j++] = pop();
            pop(); // Remove '(' from the stack
        }
        // Operator
        else if (isOperator(ch)) {
            while (top != -1 && precedence(stack[top]) >= precedence(ch))
                postfix[j++] = pop();
            push(ch);
        }

        i++;
    }
    while (top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    printf("Postfix Expression: %s\n", postfix);
}

int main() {
    char infix[MAX];
    printf("Enter infix expression: ");
    scanf("%s", infix);
    infixToPostfix(infix);
    return 0;
}

