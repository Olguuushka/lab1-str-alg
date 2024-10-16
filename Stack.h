#pragma once
#include"NODE.h"
using TInfo1 = char;


//using Array = TInfo[MaxCount];

struct Stack
{
private:
	char elements[MaxCount];
	int head;
public:
	Stack() { head = -1; };
	bool empty();
	bool full();
	size_t size();
	void push(TInfo1 elem);
	void pop();
	TInfo1 top();
	void view();
	void clear();
};
