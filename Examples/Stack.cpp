#include<iostream>

using namespace std;
struct StackFrame
{
	char data;
	StackFrame *link;
};

typedef StackFrame* StackFramePtr;

class Stack
{
	public:
	  Stack();
	  Stack(const Stack&);
	  ~Stack();
     void push(char);
	  char pop();
	  bool empty();
   private:
	  StackFramePtr top;

};

Stack::Stack()
{
  top = NULL;
}

Stack::Stack(const Stack& s)
{
	StackFramePtr current = s.top;
	StackFramePtr temp = new StackFrame; 
	temp->data = s.top->data;
	top = temp;
   while	(temp != NULL)
		temp = temp->link;
   while(temp != s.top)
	{
		push(temp->link->data);
	}
}

Stack::~Stack()
{
	char next;
	while(!empty())
	{
     next = pop();
	}
}

char
Stack::pop()
{
	char c;
	StackFramePtr temp;
	if(!empty())
	{
     c = top->data;
	  temp = top;
	  top = top->link;
	  delete temp;
	}
	return c;
}


bool
Stack::empty()
{
	return top == NULL;
}

void
Stack::push(char c)
{
	StackFramePtr temp = new StackFrame;
	temp->data = c;
	temp->link = top;
	top = temp;
}

int main()
{

   Stack s;
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');

   Stack s2(s);

	while(!s.empty())
		cout << s.pop() << endl;

	while(!s2.empty())
		cout << s2.pop() << endl;
	return 0;
}
