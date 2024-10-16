#pragma once
#include<iostream>
#include<functional>
#include<fstream>
#include<Windows.h>
const size_t MaxCount = 100;
using TInfo = int;
struct NODE
{
	TInfo info;
	NODE* next;
	NODE(TInfo info, NODE* ptr = nullptr) :info(info), next(ptr) {};
	~NODE()
	{
		next = nullptr;
	}
};
