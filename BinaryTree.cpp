#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MOD 1000000007
using namespace std;

struct node
{
    ll key;
    ll index;
    struct node *left, *right;
};

struct node *newNode(ll item, ll indx)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->index = indx;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* node, ll key, ll indx)
{
    if (node == NULL) { cout<<indx<<endl; return newNode(key, indx); }
    if (key < node->key)
        node->left = insert(node->left, key, 2*indx);
    else
        node->right = insert(node->right, key, 2*indx +1);
    return node;
}

struct node * minValueNode(struct node* node)
{
    struct node* current = node;
    while (current && current->left != NULL)
        current = current->left;

    return current;
}
struct node* deleteNode(struct node* root, ll key, bool flag)
{
    if (root == NULL) return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key, flag);
    else if (key > root->key)
        root->right = deleteNode(root->right, key, flag);
    else
    {
        if(flag)  cout<<root->index<<endl;

        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key, false);
    }
    return root;
}

int main()
{
    fast
    struct node *root = NULL;
    ll q,x;
    char ch;
    cin>>q;

    while(q--)
    {
        cin>>ch>>x;
        if(ch=='i')
        {
            root = insert(root, x, 1);
        }
        else
        {
            root = deleteNode(root, x, true);
        }

    }

    return 0;
}
