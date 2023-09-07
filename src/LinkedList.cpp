#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

// #include <string>

using namespace std;

struct LinkList
{
	int no;
	LinkList *next;
} one, three;

class LinkList_
{

private:
	LinkList *_linkList = NULL;

public:
	LinkList_()
	{}

	void InsertEleTail(int num)
	{
		// if first ele
		if (_linkList == NULL)
		{
			InsertFirst(num);
			return;
		}

		// LinkList *linkList = new LinkList();
		LinkList *linkList = _linkList;
		while (linkList->next != NULL)
		{
			linkList = linkList->next;
		}

		LinkList *newEle = new LinkList();
		newEle->no = num;
		// newEle->next_ = NULL;
		linkList->next = newEle;
		// _linkList->next_ = linkList;
	}

	void InsertFirst(int num)
	{
		if (_linkList == NULL)
		{
			_linkList = new LinkList();
			_linkList->no = num;
		}
	}

	void InsertEleHead(int num)
	{
		// if first ele
		if (_linkList == NULL)
		{
			InsertFirst(num);
			return;
		}

		// store ele in first
		LinkList *newEle = new LinkList();
		newEle->no = num;
		newEle->next = _linkList;
		_linkList = newEle;
	}

	void DisplayList()
	{
		while (_linkList != NULL)
		{
			cout << _linkList->no << " ";
			_linkList = _linkList->next;
		}
	}
};

int main()
{

	LinkList_ *linkList = new LinkList_();

	linkList->InsertEleTail(10);
	linkList->InsertEleTail(20);
	linkList->InsertEleTail(60);
	// linkList.DisplayList();
	linkList->InsertEleHead(25);
	linkList->InsertEleHead(65);
	linkList->DisplayList();

	LinkList_ linkList_;
	cout << endl << linkList << endl;
	cout << &linkList_ << endl;

	linkList = new LinkList_();
	// linkList = NULL;
	cout << linkList << endl;
}
