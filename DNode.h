class DNode
{
	int data;
	DNode* prev;
	DNode* next;
	
	public:
		void setData(int x);
		int getData();
		void setPrev(DNode* previous);
		DNode* getPrev();
		void setNext(DNode* nxt);
		DNode* getNext();
};
