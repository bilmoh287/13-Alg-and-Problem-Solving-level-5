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

    clsDblLinkedList <int> ::Node* N1;

    N1 = MydblLinkedList.GetNode(4);
    cout << "N1 value is = " << N1->value;
    //MydblLinkedList.PrintList();


    system("pause>0");

    return 0;
}