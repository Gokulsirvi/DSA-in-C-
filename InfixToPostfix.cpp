#include <iostream>
#include<cctype>
using namespace std;
#define size 100
char stack[size];
int top =-1; 
void push(char ch){
    top=top+1;
    stack[top] = ch;
}
int precedance(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*'|| c=='/'){
        return 2;
    }
    else if(c=='+'|| c=='-'){
        return 1;
    }
    else{
        return 0;
    }
    return 0;
}
char pop(){
    char popped = stack[top];
    top--;
    return popped;
}
void convertPostfix(char infix[],char postfix[]) {
    int i = 0, j = 0;
    while (infix[i] != '\0') {
        char c = infix[i];
        if (isalnum(c)) {
            postfix[j++] = c;
        }
        else if (c == '(') {
            push(c);
        }
        else if (c == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = pop();
            }
            if (top != -1 && stack[top] == '(') {
                pop(); 
            }
        }
        else {
            while (top != -1 && precedance(stack[top]) >= precedance(c)) {
                postfix[j++] = pop();
            }
            push(c);
        }
        i++;
    }
    while (top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}

int main() {
    char infix[size],postfix[size];
    cout << "Enter expression :"<<endl;
    cin>>infix;
   convertPostfix(infix,postfix);
   cout<<postfix;
    return 0;
}
