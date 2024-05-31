#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack<int>IntStack(5);
    IntStack.push(4);
    IntStack.push(5);
    IntStack.push(8);
    IntStack.push(5);
    IntStack.push(6);
    if (IntStack.isempty())
        cout << "Stos pusty" << endl;
    else
        cout << "Stos ni jest pusty" << endl;
    
    cout << IntStack.pop() << endl;

}

