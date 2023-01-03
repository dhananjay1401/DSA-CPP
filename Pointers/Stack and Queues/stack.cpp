
#include<iostream>
using namespace std;

class Stack{

public:
    int *arr;
    int top;
    int Size;

    Stack(int Size){
    this ->Size = Size;
    arr = new int[Size];
    top = -1;
    }

    void push(int element){
    if(Size - top > 1){
        top++;
        arr[top] = element;
    }else{
    cout<<"Stack Overflow"<<endl;
    }
};

   void pop(){
    if(top >= 0){
        top--;
    }else{
    cout<<"Stack Underflow"<<endl;
    }
};
  int peak(){
      if(top >= 0){
        return arr[top];
    }else{
    cout<<"Stack is Empty"<<endl;
    return -1;
    }
};

 bool isEmpty(){
 if(top==-1){
    return 1;
 }
 else{
    return 0;
    }
 }
};



int main() {

Stack st(5);
st.push(22);
st.push(43);
st.push(44);

cout << st.peak() << endl;
st.pop();


return 0;
}




