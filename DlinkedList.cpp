#include "DlinkedList.h"
#include<iostream>
using namespace std;

Dlinkedlist::Dlinkedlist()
{
	head = NULL;
	tail = NULL;
	count = 0;
}

int Dlinkedlist::size()
{
	return count;
}

bool Dlinkedlist::empty()
{
	return (NULL==head && NULL==tail);
}

DNode* Dlinkedlist::getHead()
{
	return head;
}

void Dlinkedlist::insertAtHead(int x)
{
	DNode* temp = new DNode();
	temp->setData(x);
	if(empty())
	{
		temp->setNext(NULL);
		head = temp;
		tail = temp;
		count++;
	}
	else
	{
		head->setPrev(temp);
		temp->setNext(head);
		head = temp;
		count++;
	}
}

void Dlinkedlist::insertAtTail(int x)
{
	DNode* temp = new DNode();
	temp->setData(x);
	if(empty())
	{
		temp->setNext(NULL);
		head = temp;
		tail = temp;
		count++;
	}
	else
	{
		temp->setNext(NULL);
		temp->setPrev(tail);
		tail->setNext(temp);
		tail = temp;
		count++;
	}
}

void Dlinkedlist::insertAtPos(int pos,int x)
{
	DNode* temp = new DNode();
	temp->setData(x);
	if(pos==1)
	{
		insertAtHead(x);
		return;
	}
	else
	{
		DNode* temp2 = head;
		for(int i=0 ; i<pos-2 ; i++)
		{
			temp2 = temp2->getNext();
		}
		temp->setNext(temp2->getNext());
		DNode* temp3 = temp2->getNext();
		temp->setPrev(temp2);
		temp3->setPrev(temp);
		temp2->setNext(temp);
		count++;
	}
}

void Dlinkedlist::deleteFromHead()
{
	if(!empty())
	{
		DNode* temp = head;
		if(head == tail)
		{
			head = NULL;
			temp = NULL;
			count--;
			delete temp;
			return;
		}
		else
		{
			head = head->getNext();
			head->setPrev(NULL);
			delete temp;
		}
	}
}

void Dlinkedlist::deleteFromTail()
{
	if(!empty())
	{
		DNode* temp = head;
		if(head == tail)
		{
			head = NULL;
			temp = NULL;
			count--;
			delete temp;
			return;
		}
		else
		{
			DNode* t = head;
			while(t->getNext()!= tail)
			{
				t = t->getNext();
			}
			t->setNext(NULL);
			delete tail;
			tail = t;
			count--;
			
		}
	}
}

void Dlinkedlist::deleteFromPos(int pos)
{
	if(!empty())
	{
		DNode* temp = head;
		if(head == tail)
		{
			head = NULL;
			temp = NULL;
			count--;
			delete temp;
			return;
		}
		else
		{
			for(int i = 0; i<pos-2 ; i++)
			{
				temp = temp->getNext();
			}
			DNode* temp2 = temp->getNext();
			DNode* temp3 = temp2->getNext();
			temp->setNext(temp3);
			temp3->setPrev(temp);
			delete temp2;
			count--;
		}
	}
}

void Dlinkedlist::print()
{
	DNode* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->getData()<<" ";
		temp= temp->getNext();
	}
	cout<<"\n";
}

void Dlinkedlist::recursiveReversePrint(DNode* p)
{
	if(p==NULL)
	  return;
	else
	  {
	  	recursiveReversePrint(p->getNext());
	  	cout<<p->getData()<<" ";
	  }
}

void Dlinkedlist::reversePrint()
{
	if(!empty())
	{
		DNode* temp = head;
		while(temp->getNext() != NULL)
		{
			temp = temp->getNext();
			
		}
		cout<<"Reverse :";
		while(temp != NULL)
		{
			cout<<temp->getData()<<" ";
			temp = temp->getPrev();
		}
	
	}
}



