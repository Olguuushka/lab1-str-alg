#include"Stack.h"
bool Stack::empty()
{
	return head < 0;
}

bool Stack::full()
{
	return head == MaxCount;
}
void Stack::push(TInfo1 elem)
{
	if (!full())
	{
		elements[++head] = elem;
	}
}
void Stack::pop()
{
	if (!empty())
	{
		elements[head--] = 0;
	}
}

TInfo1 Stack::top()
{
	return elements[head];
}
size_t Stack::size()
{
	/*size_t result = 0;
	for (int i = 0; i <= head; ++i)
	{
		result++;
	}
	return result;*/
	return head + 1;
}
void Stack::view()
{
	for (int i = size() - 1; i >= 0; --i)
		std::cout << elements[i];
}

void Stack::clear()
{
	head = -1;
}
