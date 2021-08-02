#include <iostream>
using namespace std;

template <class T>
class queue
{
private:
    T arr[100];
    int usedSize;
    int Front;
    int Back;

public:
    queue()
    {
        usedSize = 0;
        Front = 0;
        Back = -1;
        cout << "Queue has been declared\n";
    };
    void push(T element);
    void pop();
    T front();
    T back();
    int size();
    int max_size();
    bool isEmpty();
    bool isFull();
};

//Push method
template <class T>
void queue<T>::push(T element)
{
    if (usedSize == 100) 
        return;
    Back++;
    Back = Back%100;  
    arr[Back] = element;
    usedSize++;
}

//Pop method
template <class T>
void queue<T>::pop()
{
    if (usedSize == 0)
        return;
    arr[Front] = NULL;
    Front++;
    Front = Front%100;
    usedSize--;
}

//Front method
template <class T>
T queue<T>::front()
{
    if (usedSize == 0)
        return -1; //shouldn't be necessary for normal usage
    return arr[Front];
}

//Back method
template <class T>
T queue<T>::back()
{
    if (usedSize == 0)
        return -1; //shouldn't be necessary for normal usage
    return arr[Back];
}

//Size method
template <class T>
int queue<T>::size()
{
    return usedSize;
}

//Max size method
template <class T>
int queue<T>::max_size()
{
    return 100;
}

//Is empty method
template <class T>
bool queue<T>::isEmpty()
{
    if (usedSize == 0)
        return true;
    return false;
}

//Is full method
template <class T>
bool queue<T>::isFull()
{
    if (usedSize == 100)
        return true;
    return false;
}

int main()
{
    queue<int> q;

    /* before inserting */
    cout << "Before insertion\n";
    cout << "Used Size: " << q.size() << endl;
    cout << "Max size: " << q.max_size() << endl;
    cout << "Is empty: " << q.isEmpty() << endl;
    cout << "Is full: " << q.isFull() << endl;

    /* inserting elements */
    for (int i = 1; i <= 5; i++)
        q.push(i);

    cout << "After inserting 5 eleemnts\n";
    cout << "Used Size: " << q.size() << endl;
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    cout << "Is empty: " << q.isEmpty() << endl;
    cout << "Is full: " << q.isFull() << endl;

     /* popping two elements */
    for (int i = 0; i < 2; i++)
        q.pop();

    cout << "After popping 2 elements\n";
    cout << "Used Size: " << q.size() << endl;
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    cout << "Is empty: " << q.isEmpty() << endl;
    cout << "Is full: " << q.isFull() << endl;
    return 0;
}