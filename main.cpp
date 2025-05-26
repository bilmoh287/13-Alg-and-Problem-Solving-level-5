#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
    clsDynamicArray<int> MyDynaimcArray(5);

    cout << MyDynaimcArray.Size();

    MyDynaimcArray.SetItem(0, 10);
    MyDynaimcArray.SetItem(1, 20);
    MyDynaimcArray.SetItem(2, 30);
    MyDynaimcArray.SetItem(3, 40);
    MyDynaimcArray.SetItem(4, 50);

    cout << "\nIs Empty: " << MyDynaimcArray.IsEmpty();
    cout << "\nDyanaminArray Size: " << MyDynaimcArray.Size();
    cout << "\n\nArray Items: \n";
    MyDynaimcArray.Print();

    cout << "\nget item at index 2: " << MyDynaimcArray.GetItem(1);

    MyDynaimcArray.Reverse();
    cout << "\n\nArray after Reversing\n";
    MyDynaimcArray.Print();

    MyDynaimcArray.DeleteItem(0);
    cout << "\n\nArray after clearing\n";
    cout << "\nDyanaminArray Size: " << MyDynaimcArray.Size() << endl;
    MyDynaimcArray.Print();

    system("pause>0");

}