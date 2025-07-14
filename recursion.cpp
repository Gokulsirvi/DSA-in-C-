#include <iostream>
using namespace std;
void rec(int);
void rec1(int);
int main() {
    std::cout << "Hello Gokul Sirvi\n";
    //printing number using loop
    int i =1;
    while(i<=5){
        cout<<i++<<"\n";
    }
    //printing number using recursion
    cout<<"Printing the number using recursion"<<endl;
    rec(6);
    cout<<"Printing the number using recursion in different way"<<endl;
    rec1(1);
    return 0;
}
void rec(int i){
    if(i<=1){
        return;
    }
    rec(--i);
    cout<<i<<endl;
}
void rec1(int i){
    if(i==5){
         cout<<i<<"\n";
        return;
    }
    cout<<i<<"\n";
    return rec1(++i);
}



