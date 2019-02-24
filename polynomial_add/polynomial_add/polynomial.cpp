#include<iostream>
using namespace std;
class ll
{
	int coeff;
	int power;
	class ll *next,*start;
public:
	ll()
	{
		start = NULL;
	}
	/*void insert_first(int c,int p)
	{
		ll *temp;
		temp->coeff = c;
		temp->power = p;
		temp->next = start;
		start = temp;
	}*/
	void insert_last(int c, int p)
	{
		ll *temp, *curr;
		temp = new ll;
		temp->coeff = c;
		temp->power = p;
		temp->next = NULL;
		if (start == NULL)
		{
			start = temp;
			return;
		}
		curr = start;
		while (curr->next!=NULL)
			curr = curr->next;
		curr->next = temp;


	}
	void add(ll l1,ll l2)
	{
		ll *curr1, *curr2;
		curr1 = l1.start;
		curr2 = l2.start;
		while (curr1 != NULL && curr2 != NULL)
		{
			while (curr1!=NULL &&curr2!=NULL && (curr1->power > curr2->power))
			{
			insert_last(curr1->coeff,curr1->power);
			curr1 = curr1->next;
			}
			while (curr2!=NULL && curr1!=NULL && (curr2->power > curr1->power))
			{
				insert_last(curr2->coeff, curr2->power);
				curr2 = curr2->next;
			}
			if (curr1!=NULL && curr2!=NULL && (curr1->power == curr2->power))
			{
				insert_last(curr1->coeff + curr2->coeff, curr1->power);
				curr1 = curr1->next;
				curr2 = curr2->next;
			}

		}
		while (curr1 != NULL)
		{
			insert_last(curr1->coeff,curr1->power);
			curr1 = curr1->next;
		}
		while (curr2 != NULL)
		{
			insert_last(curr2->coeff, curr2->power);
			curr2 = curr2->next;
		}
	}
	void display()
	{
		ll *curr;
		curr = start;
		while (curr->next != NULL)
		{
			cout << curr->coeff << 'x' << curr->power << '+';
			curr = curr->next;
		}
		cout << curr->coeff << 'x' << curr->power;
		
	}
};
int main()
{
	ll l1, l2, l3;
	l1.insert_last(5, 5);
	l1.insert_last(1, 1);
	l2.insert_last(4, 4);
	l2.insert_last(3, 3);
	l2.insert_last(2, 2);
	l3.add(l1, l2);
	l3.display();
	getchar();
}