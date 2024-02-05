/*Check whether a given Binary Tree is Complete or not | Set 1 (Iterative Solution)*/
#include <bits/stdc++.h>
using namespace std;
//simple approach would be to check whether the NULL Node encountered 
//is the last node of the Binary Tree
struct node {
	int data;
	struct node* left;
	struct node* right;
};

bool isCompleteBT(node* root)
{
	queue<node*> q;
	q.push(root);
	bool flag = false;

	while (!q.empty()) {
		node* temp = q.front();
		q.pop();

		if (temp == NULL) {
			flag = true;
		}
		else {
			if (flag == true) {
				return false;
			}

			q.push(temp->left);
			q.push(temp->right);
		}
	}

	return true;
}



int main()
{

	return 0;
}
