#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;


int main() {
    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAfter(2, 500);
    cout << "\nafter updating inserting using index:\n";
    MydblLinkedList.PrintList();


    system("pause>0");

    return 0;
}