#include <iostream>
using namespace std;

template <class T>
class stack
{
private:
    T arr[100];
    int usedSize;
    int Top;

public:
    stack()
    {
        usedSize = 0;
        Top = -1;
        cout << "Stack has been declared\n";
    };
    void push(T element);
    void pop();
    T top();
    int size();
    int max_size();
    bool isEmpty();
    bool isFull();
};

//Push method
template <class T>
void stack<T>::push(T element)
{
    if (isFull() == true) 
        return;
    Top++;
    arr[Top] = element;
    usedSize++;
}

//Pop method
template <class T>
void stack<T>::pop()
{
    if (Top == -1)
        return;
    arr[Top] = NULL;
    Top--;
    usedSize--;
}

//Top method
template <class T>
T stack<T>::top()
{
    if (Top == -1)
        return ; //shouldn't be necessary for normal usage
    return arr[Top];
}

//Size method
template <class T>
int stack<T>::size()
{
    return usedSize;
}

//Max size method
template <class T>
int stack<T>::max_size()
{
    return 100;
}

//Is empty method
template <class T>
bool stack<T>::isEmpty()
{
    if (Top == -1)
        return true;
    return false;
}

//Is full method
template <class T>
bool stack<T>::isFull()
{
    if (usedSize == 100)
        return true;
    return false;
}

//Both stack<int and stack<char> are shown
int main()
{
    /* STACK WITH INT-TYPE ELEMENTS */
    stack<int> s; //stack with max size 100

    /* before inserting */
    cout << "Before insertion\n";
    cout << "Used Size: " << s.size() << endl;
    cout << "Max size: " << s.max_size() << endl;
    cout << "Is empty: " << s.isEmpty() << endl;
    cout << "Is full: " << s.isFull() << endl;

    /* inserting elements */
    for (int i = 1; i <= 5; i++)
        s.push(i);

    cout << "After inserting 5 eleemnts\n";
    cout << "Used Size: " << s.size() << endl;
    cout << "Top element: " << s.top() << endl;
    cout << "Is empty: " << s.isEmpty() << endl;
    cout << "Is full: " << s.isFull() << endl;

    /* popping two elements */
    for (int i = 0; i < 2; i++)
        s.pop();
    cout << "After popping 2 elements\n";
    cout << "Used Size: " << s.size() << endl;
    cout << "Top element: " << s.top() << endl;
    cout << "Is empty: " << s.isEmpty() << endl;
    cout << "Is full: " << s.isFull() << endl;

    

    /* STACK WITH CHAR-TYPE ELEMENTS */
    // stack<char> m;

    /* before inserting */
    // cout << "Before insertion\n";
    // cout << "Used Size: " << m.size() << endl;
    // cout << "Max size: " << m.max_size() << endl;
    // cout << "Is empty: " << m.isEmpty() << endl;
    // cout << "Is full: " << m.isFull() << endl;

    /* inserting elements */
    // m.push('a');
    // m.push('b');
    // m.push('c');

    // cout << "After inserting 3 elements\n";
    // cout << "Used Size: " << m.size() << endl;
    // cout << "Top element: " << m.top() << endl;
    // cout << "Is empty: " << m.isEmpty() << endl;
    // cout << "Is full: " << m.isFull() << endl;

    /* popping two elements */
    // for (int i = 0; i < 2; i++)
    //     m.pop();
    // cout << "After popping 2 elements\n";
    // cout << "Used Size: " << m.size() << endl;
    // cout << "Top element: " << m.top() << endl;
    // cout << "Is empty: " << m.isEmpty() << endl;
    // cout << "Is full: " << m.isFull() << endl;

    
    return 0;
}