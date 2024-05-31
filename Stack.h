#ifndef STACK_H
#define STACK_H
#include <iostream>

using namespace std;

template<typename T>
class Stack {
private:
	int max;
	T* items;
	int top;
public:
	Stack(int s);
	bool isempty();
	bool isfull();
	void push(const T& item); // odk³ada element na stos
	T pop();

};

template<typename T>
Stack<T>::Stack(int size) : max(size), top(0) {
	items = new T[max];
};

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
void Stack<T>::push(const T& item)
{
	if (top == max)
	{
		throw length_error("Stack overflow.\n");
	}
	items[top++] = item;
};

template<typename T>
T Stack<T>::pop() {
	if (top <= 0) {
		throw out_of_range("Attempting to pop from an empty stack.\n");
	}
	return items[--top];
}

#endif