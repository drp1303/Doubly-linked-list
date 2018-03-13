#include "DlinkedList.cpp"
#include<iostream>

using namespace std;

int main()
{
	Dlinkedlist obj;
	obj.insertAtHead(1);
	obj.print();
	obj.insertAtHead(2);
	obj.print();
	obj.insertAtHead(3);
	obj.print();
	obj.insertAtHead(4);
	obj.print();
	obj.insertAtTail(5);
	obj.print();
	obj.insertAtTail(6);
	obj.print();
	obj.insertAtPos(4,7);
	obj.print();
	obj.insertAtPos(3,8);
	obj.print();
	cout<<"Size of doubly linked list :"<<obj.size();
	cout<<"\ndelete from head :";
	obj.deleteFromHead();
	obj.print();
	cout<<"\ndelete from tail :";
	obj.deleteFromTail();
	obj.print();
	cout<<"\ndelete from position 3 :";
	obj.deleteFromPos(3);
	obj.print();
	cout<<"\nRecursive reverse print :";
	obj.recursiveReversePrint(obj.getHead());
	cout<<"\n";
	obj.reversePrint();
}
