#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    try {
        Stack<int>IntStack(5);
        IntStack.push(1);
        IntStack.push(2);
        IntStack.push(3);
        IntStack.push(3);
        int popped = IntStack.pop();
        if (IntStack.isempty()) {
            cout << "Stack is empty" << endl;
        }
        else {
            cout << "Stack is not empty" << endl;
        }
        popped = IntStack.pop();
        popped = IntStack.pop();
        popped = IntStack.pop();
        
 
        IntStack.push(1);
        IntStack.push(2);
        IntStack.push(3);
        IntStack.push(3);
        IntStack.push(1);
        IntStack.push(2);
        IntStack.push(3);
        IntStack.push(3);

    }
    catch (const exception& e) {
        cout << "Exception: "<<e.what();
    };

    try {
        Stack<char>CharStack(4);
        CharStack.push('1');
        CharStack.push('p');
        CharStack.push('o');
        char popped1 = CharStack.pop();
        popped1 = CharStack.pop();
        popped1 = CharStack.pop();
        cout << popped1 << endl;

        if (CharStack.isempty()) {
            cout << "Stack is empty" << endl;
        }
        else {
            cout << "Stack is not empty" << endl;
        }
        popped1 = CharStack.pop();
        popped1 = CharStack.pop();
        popped1 = CharStack.pop();
        popped1 = CharStack.pop();

        CharStack.push('1');
        CharStack.push('p');
        CharStack.push('o');
        CharStack.push('1');
        CharStack.push('p');
        CharStack.push('o');

    }
    catch (const exception& e) {
        cout << "Exception: " << e.what();
    };
}

