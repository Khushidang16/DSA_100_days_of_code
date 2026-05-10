// Evaluate Postfix Expression

#include <stdio.h>
#include <ctype.h>

int stack[100];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int main() {

    char exp[100];

    printf("Enter postfix expression: ");
    scanf("%s", exp);

    int i = 0;

    while(exp[i] != '\0') {

        if(isdigit(exp[i])) {
            push(exp[i] - '0');
        }

        else {

            int b = pop();
            int a = pop();

            switch(exp[i]) {

                case '+':
                    push(a + b);
                    break;

                case '-':
                    push(a - b);
                    break;

                case '*':
                    push(a * b);
                    break;

                case '/':
                    push(a / b);
                    break;
            }
        }

        i++;
    }

    printf("Result = %d", pop());

    return 0;
}