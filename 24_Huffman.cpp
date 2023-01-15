// Yash Singhal CST SPL 2

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	int freq;

	Node *left, *right;

	Node (char d, int f, Node *l = nullptr, Node *r = nullptr)
    {
		data = d;
		freq = f;

		left = l;
		right = r;
	}
};

class compare
{
public:
	bool operator() (Node *a, Node *b)
    {
		return (a->freq > b->freq);
	}
};

void print_codes (Node *node, string str)
{
	if (node != nullptr)
    {
		if (node->data != '*')
			cout << node->data << ": " << str << endl;
		
		print_codes(node->left, str+'0');
		print_codes(node->right, str+'1');
	}
}

void huffman_encode (char *arr, int *freq, int n)
{
	// Node *left, *right, *top;
	priority_queue<Node *, vector<Node *>, compare> pq;

	for(int i = 0;i < n;i++)
    {
		pq.push(new Node(arr[i], freq[i]));
	}

	while(pq.size() != 1)
    {
        Node *left = pq.top();
        pq.pop();

        Node *right = pq.top();
        pq.pop();

        int z = left->freq + right->freq;
        Node *root = new Node('*', z ) ;

        root->left = left;
        root->right = right;

        pq.push(root);
    }

    print_codes(pq.top(),"");
}

int main (){
	char arr[] = { 'a', 'b', 'c', 'd', 'e' }; 
	int freq[] = { 3,5,13,16,46 };

	huffman_encode(arr, freq, sizeof(arr));

	return 0;
}