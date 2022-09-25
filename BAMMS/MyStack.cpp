//----------------------------------- 
// Name:    Lucas DeMars
// Project: BAMSS
// Purpose: Stack used for the undo on the scoreboard point implementation.
//----------------------------------- 
#include "MyStack.h"

//Constuctor
MyStack::MyStack()
{
	top = -1;
	size = 0;
}

//Returns true if the stack is empty
bool MyStack::isEmpty()
{
	return (top == -1);
}

//Empties the stack
bool MyStack::Clear()
{
	return false;
}

//Pops the int on the top of the stack
//Returns int
int MyStack::Pop()
{
	if (isEmpty())
		return 0;
	size--;
	return stack[top--];
	
}

//Pushed an int onto the top of the stack
void MyStack::Push(int sT)
{
	top++;
	size++;
	stack[top] = sT;
}





