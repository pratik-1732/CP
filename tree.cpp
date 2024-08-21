#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

class node {
public:
	int data;
	node *left;
	node *right;

	node(int data){
		this-> data=data;
		this-> left=NULL;
		this-> right=NULL;
	}
};

node* buildTree(node* root){
	int data; cin>>data;
	root= new node(data);
	if(data==-1) return NULL;
	root->left= buildTree(root->left);
	root->right= buildTree(root->right);
	return root;
}
void inorder(node* root){
	if(root==NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void preorder(node* root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(node* root){
	if(root==NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
void levelTraverse(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp= q.front();
		q.pop();

		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp-> data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp-> right);
			}
		}
	}
}
void buildFromLevel(node* &root){
	queue<node*> q;
	int data; cin>>data;
	root= new node(data);
	q.push(root);
	while(!q.empty()){
		node* temp= q.front();
		q.pop();
		int leftNode; cin>>leftNode;
		if(leftNode!=-1){
			temp-> left= new node(leftNode);
			q.push(temp-> left);
		}
		int rightNode; cin>>rightNode;
		if(rightNode!=-1){
			temp-> right= new node(rightNode);
			q.push(temp-> right);
		}
	}
}
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    node* root= NULL;
    //root= buildTree(root);
    buildFromLevel(root);
    inorder(root);
	return 0;
}