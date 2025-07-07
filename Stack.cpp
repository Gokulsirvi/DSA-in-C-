#include <iostream>
using namespace std;
#define size 6
int stack[size];
int top =-1;
void pop(){
    if(top>=0){
  cout << "element popped successful = " << stack[top--] << endl;
    }
    else{
        cout<<"poped from empty stack not possible\n";
    }
}
void push(int num){
    top=top+1;
    if(top<size){
        stack[top] = num;
        cout<<"insertion successful !\n";
    }
    else{
        cout<<"stack full\n";
    }
}
int main() {
    cout << "Try programiz.pro\n";
    push(4);
    push(3);
    push(2);
    push(6);
    push(7);
    pop();
    pop();
    pop();
    return 0;
}
