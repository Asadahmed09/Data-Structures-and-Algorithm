#include <iostream>
using namespace std;
class tree
{
    public:
    int val;
    tree* left;
    tree* right;
    tree(int v):left(NULL),right(NULL),val(v){}
};
void populate(tree* root)
{
    cout << "Do you want to insert left of (true or false): " << root->val << endl;
    bool left ;
    cin >> left;
    if(left)
    {
        cout << "Enter the value you want to insert  :" << endl;
        int val;
        cin >> val;
        tree* NewTree = new tree(val);
        root->left = NewTree;
        populate(NewTree);
        
    }
    cout << "Do you want to insert right of (true or false): " << root->val << endl;
    bool right ;
    cin >> right;
    if(right)
    {
        cout << "Enter the value you want to insert  :" << endl;
        int val;
        cin >> val;
        tree* NewTree = new tree(val);
        root->right = NewTree;
        populate(NewTree);
        
    }
}
void display(tree* root)
{
    if(root==NULL)
        return;
    cout << root->val;
    display(root->left);
    display(root->right);
}
int main() {
    // Write C++ code here
   tree* root = new tree(15);
   populate(root);
    display(root);
    return 0;
}