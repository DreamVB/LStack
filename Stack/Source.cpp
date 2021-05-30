// Stack data type using a linked list
// Stack can also take any datatype
// Source.cpp

#include <iostream>
#include <string>
#include "LStack.h"
using namespace std;

int main(){
	//Declare stack objects
	LStack<int>stk;
	LStack<string>str;
	
	//Push ints onto stk
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);
	//Push string values on str
	str.push("Yahoo");
	str.push("Google");
	str.push("Github");

	std::cout << "Int Stack" << std::endl;

	//Display all the item in the int stack
	while (!stk.isEmpty()){
		std::cout << stk.top() << std::endl;
		stk.pop();
	}

	std::cout << std::endl << "String Stack" << std::endl;

	//Display all items in the str stack
	while (!str.isEmpty()){
		std::cout << str.top() << std::endl;
		str.pop();
	}

	system("pause");
	return EXIT_SUCCESS;
}