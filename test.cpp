<<<<<<< HEAD
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	//write your code from here
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "👻";
		}
		cout << endl;
	}

	return 0;
=======
#include <bits/stdc++.h>
using namespace std;
typedef struct mynode
{
    int key;
    mynode *left;
    mynode *right;
} NODE;
NODE *newNode(int key)
{
    NODE *node = (NODE *)malloc(sizeof(NODE));
    node->key = key;
    node->right = NULL;
    node->left = NULL;
    return node;
}
void addGreaterUtil(NODE *root, int *sum_ptr)
{
    if (root == NULL)
        return;
    addGreaterUtil(root->right, sum_ptr);
    *sum_ptr = *sum_ptr + root->key;
    root->key = *sum_ptr;
    addGreaterUtil(root->left, sum_ptr);
}
void addGreater(NODE *root)
{
    int sum = 0;
    addGreaterUtil(root, &sum);
}
void constructNode(NODE *node)
{
    if (node == NULL)
        return;
    constructNode(node->left);
    constructNode(node->right);
    cout << node->key << " ";
}
int main()
{
    NODE *root = newNode(5);
    root->left = newNode(2);
    root->right = newNode(13);
    cout << "Given tree is " << endl;
    constructNode(root);
    addGreater(root);
    cout << endl;
    cout << "Modified tree is" << endl;
    constructNode(root);
    return 0;
>>>>>>> e32f673b2093ded28ba9277b59a2d78ca0d4cd85
}