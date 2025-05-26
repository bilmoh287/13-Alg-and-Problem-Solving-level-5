#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
    clsDynamicArray<int> MyDynaimcArray(5);

    cout << MyDynaimcArray.Size();

    MyDynaimcArray.SetItem(0, 1);
    MyDynaimcArray.SetItem(1, 10);
    MyDynaimcArray.SetItem(2, 20);
    MyDynaimcArray.SetItem(3, 30);
    MyDynaimcArray.SetItem(4, 40);
    MyDynaimcArray.SetItem(5, 50);

    cout << "\nIs Empty: " << MyDynaimcArray.IsEmpty();
    cout << "\nDyanaminArray Size: " << MyDynaimcArray.Size();
    cout << "\n\nArray Items: \n";
    MyDynaimcArray.Print();

    cout << "\nget item at index 2: " << MyDynaimcArray.GetItem(1);

    MyDynaimcArray.Reverse();
    cout << "\n\nArray after Reversing\n";
    MyDynaimcArray.Print();

    MyDynaimcArray.Clear();
    cout << "\n\nArray after clearing\n";
    MyDynaimcArray.Print();

    system("pause>0");

}