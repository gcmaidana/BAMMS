#pragma once


class MyStack
{
private:
	const static int MAXSIZE = 1000;
	int stack[MAXSIZE];
	int top;
	int size;

public:
	MyStack();

	bool isEmpty();
	bool Clear();
	int Pop();
	void Push(int sT);
	int Size() { return size; }

};