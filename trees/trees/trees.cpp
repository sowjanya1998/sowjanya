#include<iostream>
#include<math.h>
#include<algorithm>
//#define _max(a,b) (((a)>(b)) :a ?b)
using namespace std;
struct node
{
	int data;
	node *left, *right;
};
class tree
{
struct node *root;
public:
	
	tree()
	{
		root = NULL;
		//root->left = NULL;
	//	root->right = NULL;
	}
	void buildtree()
	{
		int num, i,del;
		cout << "enter no of node"<<endl;
		cin >> num;
		int *arr;
		arr = new int[num];
		for (i = 0; i < num; i++)
			cin >> arr[i];
		for (i = 0; i < num; i++)
			root = insert(arr[i],root);
		
		cout << "enter node to delete" << endl;
		cin >> del;
		root = deletenode(del,root);

		inorder(root);
		getchar();

	}
	node* insert(int e, struct node  *curr)
	{
		if (curr == NULL)
		{
			struct node*temp;
			temp = new struct node;
			temp->data = e;
			temp->left = NULL;
			temp->right = NULL;
			curr = temp;
		}
		else
		{
			if (e < curr->data)
				curr->left = insert(e, curr->left);
			else
				curr->right = insert(e, curr->right);
		}
		return curr;
	}
	int findmax(struct node *curr)
	{
		if (curr->right == NULL)
			return curr->data;
		findmax(curr->right);
	}
	int findmin(struct node *curr)
	{
		if (curr->left == NULL)
			return curr->data;
		findmin(curr->left);
	}
	int height(node *curr)
	{
		if (curr == NULL)
			return -1;
		return(std::max(height(curr->left), height(curr->right)));
	}
	struct node* deletenode(int ele, node *curr)
	{
		if (ele < curr->data)
			curr->left=deletenode(ele,curr->left);
		else if (ele > curr->data)
			curr->right=deletenode(ele,curr->right);
		else
		{
			//struct node *curr = curr;
			if (curr->left == NULL && curr->right == NULL) {
				delete curr;
				return NULL;
			}
			else if (curr->left == NULL && curr->right != NULL)
				curr = curr->right;
			else if (curr->right == NULL && curr->left != NULL)
				curr = curr->left;
			else
			{
				curr->data = findmax(curr->left);
				 curr->left=deletenode(curr->data, curr->left);
			}
		}
		return curr;

	}
	void inorder(node *curr)
	{
		if (curr == NULL)
			return;
		else {
			inorder(curr->left);
			cout << curr->data << endl;

			inorder(curr->right);
		}
	}
	void preorder(node *curr)
	{
		if (curr == NULL)
			return;
		else {
			
			cout << curr->data << endl;
			preorder(curr->left);
			preorder(curr->right);
		}
	}
	void postorder(node *curr)
	{
		if (curr == NULL)
			return;
		else {
			postorder(curr->left);
			postorder(curr->right);
			cout << curr->data << endl;

			
		}
	}

};
int main()
{
	tree t1;
	t1.buildtree();
	getchar();
	
}