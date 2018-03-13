#include "DNode.h"

void DNode::setData(int x)
{
	data = x;
}

int DNode::getData()
{
	return data;
}

void DNode::setPrev(DNode* previous)
{
	prev = previous;
}

DNode* DNode::getPrev()
{
	return prev;
}

void DNode::setNext(DNode* nxt)
{
	next = nxt;
}

DNode* DNode::getNext()
{
	return next;
}
