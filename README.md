# LStack
A Genetic Stack Algorithm Using a Linked List made in Visual C++ 2013

# Stack Operations

| Function | Description |
| ------------- | ------------- |
| isEmpty  | Lets us know if the stack is empty.  |
| push  | Push a value on the stack.  |
| pop  | Pops an item of the stack.  |
| top  | Return the current data on the stack.  |

# Using the class
```cpp
#include "LStack.h"
int main(){
  LStack<int>stk;

	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);
  
	while (!stk.isEmpty()){
		std::cout << stk.top() << std::endl;
		stk.pop();
	}
  return 0;
}
```
