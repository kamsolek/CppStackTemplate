#include <iostream>
#include "Stack.h"

using namespace std;

template <typename T>
bool Stack<T>::push(const T& item)
{
	if (top < max)
	{
		items[top++] = item;
		return true;
	}
	else return false;
};

template<typename T>
T Stack<T>::pop() {
	if (top > 0) {
		return items[--top];
	}
}
