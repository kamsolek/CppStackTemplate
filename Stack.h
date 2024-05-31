#include <iostream>

using namespace std;

template<typename T>
class Stack {
private:
	int max;
	T items[max];
	int top;
public:
	Stack(int max) {top=0};
	bool isempty() { return top == 0; }
	bool isfull() { return top == MAX; }
	bool push(const T& item); // odk³ada element na stos
	T pop();

};