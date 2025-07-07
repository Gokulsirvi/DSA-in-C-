//implementation of stack
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
void display(){
    if(top>=0){
        for(int i=0;i<size;i++){
            cout<<stack[i]<<"->";
        }
        cout<<"\n";
    }
}
void peak(){
    if(top>=0){
        cout<<"Peak index of stack = "<<stack[top]<<endl;
    }
    else{
        cout<<"stack is enpty\n";
    }
}
int main() {
    cout << "Try programiz.pro\n";
    push(4);
    push(3);
    push(2);
    push(6);
    push(7);
    display();
    peak();
    pop();
    pop();
    pop();
    return 0;
}
