#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back 
class TreeNode{
public:
	int val;
	TreeNode *left;
	TreeNode *right;

	TreeNode (int data){
		this-> val= data;
		this-> left= NULL;
		this-> right= NULL;
	}
};
TreeNode* buildTree(TreeNode* root){
	int data; cin>>data;
	root= new TreeNode(data);
	if(data==-1) return NULL;

	root->left= buildTree(root->left);
	root->right= buildTree(root->right);
	return root;
}
// void inorder(TreeNode* root){
// 	if(root==NULL) return;

// 	inorder(root->left);
// 	cout<<root->val<<" ";
// 	inorder(root->right);
// }
pair<int, int> output(TreeNode* root){
        if(root==NULL){
            pair<int, int> p= make_pair(0,0);
            return p;
        }

        pair<int, int> left= output(root->left);
        pair<int, int> right= output(root->right);

        int op1= left.first;
        int op2= right.first;
        int op3= left.second+right.second+1;

        pair<int, int> ans;
        ans.first= max(op1, max(op2, op3));
        ans.second= max(left.second, right.second)+1;
        cout<<root->val<<" ";
        cout<<op1<<" "<<op2<<" "<<op3<<endl;
        return ans;
    }
int diameterOfBinaryTree(TreeNode* root) {
    pair<int, int> temp= output(root);
    return temp.first;
}
void solve(){
	TreeNode* root= NULL;
	root= buildTree(root);

	// inorder(root);
	cout<<diameterOfBinaryTree(root)<<endl;
}

int32_t main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t=1;
	while(t--){
	solve();
	}
	return 0;
}