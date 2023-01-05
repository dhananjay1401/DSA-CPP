#include <bits/stdc++.h>
void sortedInsert(stack<int> &stack, int element){
      if(stack.empty() || (!stack.empty() && stack.top()<element)){
           stack.push(element);
          return;
       }
    int num = stack.top();
    stack.pop();
    sortedInsert(stack, element);

