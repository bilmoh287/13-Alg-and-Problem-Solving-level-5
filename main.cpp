#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
    clsDynamicArray<int> MyDynaimcArray(5);

    cout << MyDynaimcArray.Size();

    MyDynaimcArray.SetItem(0, 10);
    MyDynaimcArray.SetItem(1, 20);
    MyDynaimcArray.SetItem(3, 30);
    MyDynaimcArray.SetItem(4, 40);
    MyDynaimcArray.SetItem(5, 50);

    cout << "\nIs Empty: " << MyDynaimcArray.IsEmpty();
    cout << "\nDyanaminArray Size: " << MyDynaimcArray.Size();
    cout << "\n\nArray Items: \n";
    MyDynaimcArray.Print();


    MyDynaimcArray.Resize(2);
    cout << "\nArray item after Resize to 2\n";
    MyDynaimcArray.Print();

    MyDynaimcArray.Resize(10);
    cout << "\nArray item after Resize to 10\n";
    MyDynaimcArray.Print();

    system("pause>0");

}