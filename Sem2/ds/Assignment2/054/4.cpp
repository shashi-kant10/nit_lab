// Q-4 : Write a menu driven program for all the operations of a stack including PUSH, POP and DISPLAY
#include <bits/stdc++.h>
using namespace std;
#define N 1000

void empty()
{
    cout << "No element is here!";
}

void push_element(int array[], int size)
{
    if (size == N - 1)
        cout << "Stack is Full!";
    else
    {
        cout << "Enter the element : ";
        int n;
        cin >> n;
        array[size + 1] = n;
        cout << "Element push successfully!";
    }
}

void pop_element(int array[], int size)
{
    if (size == -1)
        empty();
    else
    {
        cout << array[size];
        cout << " is pop successfully!";
    }
}
void display_element(int array[], int size)
{
    if (size == -1)
        empty();

    else
    {
        cout << "Elements : ";
        for (int index = 0; index <= size; index++)
            cout << array[index] << " ";
    }
}

int main()
{
    int choice = 1, array[N], top = -1;
    while (choice)
    {
        cout << "\n------------------------\n";
        cout << "Chooose One Option\n";
        cout << "1- PUSH Element\n";
        cout << "2- POP Element\n";
        cout << "3- Display All Elements\n";
        cout << "0- Exit\n";
        cout << "--------------------------\n";
        cout << "Enter your choice : ";
        cin >> choice;
        cout << "--------------------------\n";
        switch (choice)
        {
        case (1):
            push_element(array, top);
            if (top != N - 1)
                ++top;
            break;

        case (2):
            pop_element(array, top);
            if (top != -1)
                --top;
            break;

        case (3):
            display_element(array, top);
            break;
        
        case (0):
            cout << "Program Exiting !";
            break;

        default:
            cout << "This is not the choice !";
            break;
        }
    }
  return 0;
}
