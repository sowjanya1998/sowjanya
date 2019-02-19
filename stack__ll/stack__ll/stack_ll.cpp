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
	void push(int ele)//insert at first
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
			temp->next = start;
			start = temp;
		}


	}
	int pop()//delete at first
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
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	y = s1.pop();
	cout << "poped:" << y << endl;
	y = s1.pop();
	cout << "poped:" << y << endl;
	s1.push(5);
	s1.push(6);
	s1.display();
	getchar();

}