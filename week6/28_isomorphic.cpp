#include <bits/stdc++.h>
using namespace std;

/*isomorphic
using queue, map, vector*/
struct node {
	int data;
	struct node* left;
	struct node* right;
};

bool isIsomorphic(node* root1, node* root2)
{
	if (root1 == NULL and root2 == NULL)
		return true;

	else if (root1 == NULL or root2 == NULL)
		return false;

	queue<node *> q1, q2;

	q1.push(root1);
	q2.push(root2);

	int level = 0;
	int size;

	vector<int> v2;

	unordered_map<int, int> mp;

	while (!q1.empty() and !q2.empty()) {

		if (q1.size() != q2.size())
			return false;

		size = q1.size();

		level++;

		v2.clear();
		mp.clear();

		while (size--) {

			node* temp1 = q1.front();
			node* temp2 = q2.front();

			q1.pop();
			q2.pop();

			if (mp.find(temp1->data) == mp.end())
				mp[temp1->data] = 1;

			else
				mp[temp1->data]++;

			v2.push_back(temp2->data);

			if (temp1->left)
				q1.push(temp1->left);

			if (temp1->right)
				q1.push(temp1->right);

			if (temp2->left)
				q2.push(temp2->left);

			if (temp2->right)
				q2.push(temp2->right);
		}

		for (auto i : v2) {

			if (mp.find(i) == mp.end())
				return false;

			else {
				mp[i]--;

				if (mp[i] < 0)
					return false;

				else if (mp[i] == 0)
					mp.erase(i);
			}
		}

		if (mp.size() != 0)
			return false;
	}
	return true;
}

int main()
{
	return 0;
}
