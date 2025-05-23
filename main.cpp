#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;


int main() {
    clsDblLinkedList <int> MydblLinkedList;

    if (MydblLinkedList.IsEmpty())
    {
        cout << "Yes Node is Empty\n";
    }
    else {
        cout << "\nNo Node is NOT Empty\n";
    }

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.Reverese();
    cout << "\nLinked List Contenet after Reverse:\n";
    MydblLinkedList.PrintList();




    system("pause>0");

    return 0;
}