/*Find a pair with given sum in a Balanced BST*/
/* In a balanced binary search tree 
isPairPresent two element which sums to 
a given value time O(n) space O(logn) */
#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100

// A BST node
class node {
public:
	int val;
	node *left, *right;
};

// Stack type
class Stack {
public:
	int size;
	int top;
	node** array;
};

// A utility function to create a stack of given size
Stack* createStack(int size)
{
	Stack* stack = new Stack();
	stack->size = size;
	stack->top = -1;
	stack->array = new node*[(stack->size * sizeof(node*))];
	return stack;
}

// BASIC OPERATIONS OF STACK
int isFull(Stack* stack)
{
	return stack->top - 1 == stack->size;
}

int isEmpty(Stack* stack)
{
	return stack->top == -1;
}

void push(Stack* stack, node* node)
{
	if (isFull(stack))
		return;
	stack->array[++stack->top] = node;
}

node* pop(Stack* stack)
{
	if (isEmpty(stack))
		return NULL;
	return stack->array[stack->top--];
}

bool isPairPresent(node* root, int target)
{
	Stack* s1 = createStack(MAX_SIZE);
	Stack* s2 = createStack(MAX_SIZE);

	bool done1 = false, done2 = false;
	int val1 = 0, val2 = 0;
	node *curr1 = root, *curr2 = root;


	while (1) {

		while (done1 == false) {
			if (curr1 != NULL) {
				push(s1, curr1);
				curr1 = curr1->left;
			}
			else {
				if (isEmpty(s1))
					done1 = 1;
				else {
					curr1 = pop(s1);
					val1 = curr1->val;
					curr1 = curr1->right;
					done1 = 1;
				}
			}
		}

		while (done2 == false) {
			if (curr2 != NULL) {
				push(s2, curr2);
				curr2 = curr2->right;
			}
			else {
				if (isEmpty(s2))
					done2 = 1;
				else {
					curr2 = pop(s2);
					val2 = curr2->val;
					curr2 = curr2->left;
					done2 = 1;
				}
			}
		}

		if ((val1 != val2) && (val1 + val2) == target) {
			cout << "Pair Found: " << val1 << "+ " << val2 << " = " << target << endl;
			return true;
		}

		else if ((val1 + val2) < target)
			done1 = false;

		else if ((val1 + val2) > target)
			done2 = false;

		if (val1 >= val2)
			return false;
	}
}


int main()
{
	return 0;
}

