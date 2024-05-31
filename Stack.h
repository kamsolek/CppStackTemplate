#ifndef STACK_H
#define STACK_H
#include <iostream>

using namespace std;

template<typename T>
class Stack {
private:
	int max=1;
	T items[max];
	int top;
public:
	Stack(int);
	bool isempty();
	bool isfull();
	bool push(const T& item); // odk³ada element na stos
	T pop();

};

template<typename T>
Stack<T>::Stack(int size) : max(size);

template<typename T>
bool Stack<T>::isempty() {
	if (top == 0) {
		return true;
	}
	else
		return false;
}

template<typename T>
bool Stack<T>::isfull() {
	return(top == max);
}


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

#endif