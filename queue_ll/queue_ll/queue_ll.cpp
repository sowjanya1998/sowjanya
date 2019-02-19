#include<iostream>
using namespace std;
class stack_ll
{
	int data;
	stack_ll *next;
	stack_ll *start;
public:
	stack_ll()
	{
		//next = new stack_ll;
		next = NULL;
		//start = new stack_ll;
		start = NULL;
	}
	~stack_ll()
	{
		stack_ll *temp;
		temp = new stack_ll;
		temp = start;
		while (temp != NULL)
		{
			start = start->next;
			delete temp;
			temp = start;
			cout << "freed" << endl;
		}
		getchar();
	}
	void enque(int ele)//insert at last
	{
		stack_ll *temp;
		temp = new stack_ll;
		temp->data = ele;
		temp->next = NULL;
		if (start == NULL)
		{
			start = temp;
		}
		else
		{
			stack_ll *curr;
			curr= start;
			while (curr->next != NULL)
			{
				curr= curr->next;


			}
			curr->next = temp;
		}


	}
	int deque()//delete at first
	{
		int x = -1;
		if (start == NULL)
			cout << "underflow" << endl;
		else
		{
			stack_ll *temp;
			temp = start;
			x = start->data;
			start = start->next;
			delete(temp);
		}

		return x;

	}
	void display()
	{
		stack_ll *temp;
		temp = new stack_ll;
		temp = start;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
		delete(temp);
	}

};
int main()
{
	int y;
	stack_ll s1;
	s1.enque(1);
	s1.enque(2);
	s1.enque(3);
	y=s1.deque();
	cout << "poppped:" << y << endl;
	s1.display();
	s1.enque(4);
	s1.enque(5);
		y = s1.deque();
	cout << "popped:" << y << endl;
	s1.display();
	getchar();
	
}