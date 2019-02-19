#include<iostream>
using namespace std;
class self
{
	int data;
	self *start, *next;
public:
	self()
	{
		start = NULL;
		next = NULL;
	}
	void insert_last(int ele)
	{
		self *temp;
		temp = new self;
		temp->data = ele;
		temp->next = NULL;
		if (start == NULL)
		{
			start = temp;
		}
		else
		{
			self *curr;
			curr = start;
			while (curr->next != NULL)
			{
				curr = curr->next;


			}
			curr->next = temp;
		}

		
	}
	void adjust(int d)
	{
		self *temp, *curr;
		temp = start;
		if (start != NULL)
		{
			if (start->data == d)
			{
				cout << "no self adjust" << endl;
				return;
			}
			while (temp->next != NULL && temp->next->data != d)
			{
				temp = temp->next;
			}
			
			 if (temp->next == NULL)
			{
				cout << "ele not found" << endl;
			}
			else
			{
				curr = temp->next;
				temp->next = temp->next->next;
				curr->next = start;
				start = curr;
			}
		}
		else
			cout << "list empty" << endl;
	}
	void display()
	{
		self *temp;
		temp = start;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

};
int main()
{
	self s1;
	s1.insert_last(1);
	s1.insert_last(2);
	s1.insert_last(3);
	s1.adjust(3);
	s1.display();
	getchar();
}

