#include<iostream>
#include<fstream>
#include<Windows.h>
#include"NODE.h"
#include"Stack.h"

void task1(Stack& st, char *word)
{
	Stack temp;
	Stack result;
	int i = strlen(word)-1;
	while (i >= 0)
	{
		while (!st.empty())
		{
			if (st.top() == word[i])
			{
				result.push(word[i]);
				--i;
			}
			else
			{
				temp.push(st.top());
			}
			st.pop();
		}
		while (!temp.empty())
		{
			if (temp.top() == word[i])
			{
				result.push(word[i]);
				--i;
			}
			else
			{
				st.push(temp.top());
			}
			temp.pop();
		}
	}
	result.view();
	
}
int main()
{
	SetConsoleOutputCP(1251); 
	GetTickCount64();
	int choice{};
	do
	{
		std::cout << "1.Ввести слово\n2.Читать из файла\n3.Завершить работу\n";
		std::cin >> choice;
		char word[100];
		int length{};
		Stack st;
		switch (choice)
		{
		case 1:
			std::cout << "Введите слово: ";
			std::cin >> word;
			length = strlen(word);
			for (int i = 0; i < length; ++i)
			{
				st.push(word[ i]);
			}
			break;
		case 2:
			std::ifstream file("data.txt");
			file >> word;
			char letter;
			while (file >> letter)
			{
				st.push(letter);
			}
			break;
		}
		if (choice != 3)
		{
			std::cout << "Исходный набор букв: ";
			st.view();
			std::cout << '\n';
			std::cout << "Получившееся слово: ";
			task1(st, word);
			std::cout << '\n';
		}
	} while (choice != 3);
	std::cin.get();
	return 0;

}