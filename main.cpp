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
    cout << "\nDynamic Array Size: " << MyDynaimcArray.Size();
    cout << "\n\nArray Items: \n";
    MyDynaimcArray.Print();

    //cout << "\nget item at index 2: " << MyDynaimcArray.GetItem(1);


    MyDynaimcArray.DeleteFirstItem();
    cout << "\n\nArray after Deleting First item";
    cout << "\nDyanaminArray Size: " << MyDynaimcArray.Size() << endl;
    MyDynaimcArray.Print();

    cout << "\nIs Empty: " << MyDynaimcArray.IsEmpty();

    MyDynaimcArray.DeleteLastItem();
    cout << "\n\nArray after Deleting Last item";
    cout << "\nDynamic Array Size: " << MyDynaimcArray.Size() << endl;
    MyDynaimcArray.Print();

    system("pause>0");

}