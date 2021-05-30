// Stack data type using a linked list
// Stack can also take any datatype
// LStack.h

#include <iostream>
using namespace std;

template <typename T>
class LStack{

protected:
	//Stack node
	class Node{
	public:
		//Data
		T data;
		//Next node
		Node *next;
	};
private:
	//Top item on stack
	Node *Head = NULL;
public:

	//This is used to tell us if the stack is empty
	bool isEmpty(){
		return Head == NULL;
	}

	//Push a value on the stack
	const void push(const T data){
		//Create new stack node
		Node *nd = new Node();
		//Set new data
		nd->data = data;
		//Set stack node to head node
		nd->next = Head;
		//Set head node to nd
		Head = nd;
	}

	//Return the top item on the stack
	const T top(){
		//Test if stack is empty
		if (isEmpty()){
			exit(EXIT_FAILURE);
		}
		//Return stack data
		return Head->data;
	}

	const void pop(void){
		//Create new node
		Node *nd = new Node();
		//If head is equal to NULL then we have a stack underflow
		if (Head == NULL){
			std::cout << "Stack Underflow" << std::endl;
			exit(EXIT_FAILURE);
		}
		else{
			//Get head node
			nd = Head;
			//Move head node ptr
			Head = Head->next;
			//Set the next node in new node to a NULL
			nd->next = NULL;
			//Destroy the node
			free(nd);
		}
	}
};
