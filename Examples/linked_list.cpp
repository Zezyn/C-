#include<iostream>

using namespace std;

struct Node
{
	int data;
	Node *link;
};

typedef Node* NodePtr;

void head_insert(NodePtr& head, int the_number);
NodePtr search(NodePtr& head, int target);

int main()
{
   NodePtr head = new Node;

	(*head).data = 1;
	head->data = 1;

	head->link = NULL;
   cout << head->link << " linked to:" << head;
	head_insert(head,2);
	cout << " data=" << head->data << endl;
   cout << head->link << " linked to:" << head;
	head_insert(head,3);
	cout << " data=" << head->data << endl;
   cout << head->link << " linked to:" << head;
	head_insert(head,4);
	cout << " data=" << head->data << endl;
   cout << head->link << " linked to:" << head;
	head_insert(head,5);
	cout << " data=" << head->data << endl;
   cout << head->link << " linked to:" << head;
	head_insert(head,6);
	cout << " data=" << head->data << endl;
   cout << head->link << " linked to:" << head;
	head_insert(head,7);
	cout << " data=" << head->data << endl;
   cout << head->link << " linked to:" << head;
	cout << " data=" << head->data << endl;

   NodePtr found = search(head,4);
	cout << "number found at node:" << found << endl;
	cout << "the data is: " << found->data << endl;


  for(NodePtr iter = head;iter != NULL; iter= iter->link)
	  cout << "data=" << iter->data << endl;
	return 0;
}

void head_insert(NodePtr& head, int the_number)
{

	   NodePtr temp_ptr;

		temp_ptr = new Node;

		temp_ptr->data = the_number;

		temp_ptr->link = head;

		head = temp_ptr;
}

NodePtr search(NodePtr& head, int target)
{
	NodePtr here = head;

	if(here == NULL)
	{
		return NULL;
	}
	else
	{
		while (here->data != target && here->link != NULL)
		{
			cout << here << endl;
			here = here->link;
		}
      if (here->data == target)
			return here;
      else 
			return NULL;
	}
}
