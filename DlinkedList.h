#include "DNode.cpp"

class Dlinkedlist
{
	DNode* head;
	DNode* tail;
	int count;
	
	public:
		Dlinkedlist();
		int size();
		bool empty();
		DNode* getHead();
		void insertAtHead(int x);
		void insertAtTail(int x);
		void insertAtPos(int pos,int x);
		void deleteFromHead();
		void deleteFromTail();
		void deleteFromPos(int pos);
		void print();
		void recursiveReversePrint(DNode* p);
		void reversePrint();
};
