#include<iostream>

using namespace std;
 
struct tree_node
{
    tree_node * left;
    tree_node * right;
    int data;
};

class tree
{
    tree_node * root;

    public:

    tree() 
    {
        root = NULL;
    }

    int isempty() 
    {
        if(root == NULL)
            return true;
        
        else
            return false;
    }

    void insert(int node);
    void displaytree();
    void printtree(tree_node *);
     
};

void tree::insert(int node){
    tree_node * p = new tree_node;
    tree_node * parent;
    p->data = node;
    p->left = NULL;
    p->right = NULL;
    parent = NULL;

    if(isempty())
        root=p;

    else
    {
        tree_node *ptr;
        ptr = root;

        while(ptr != NULL)
        {
            parent = ptr;

            if(node > ptr->data)        
                ptr = ptr->right;

            else
                ptr = ptr->left;
        }

        if(node < parent->data)
            parent->left = p;

        else
            parent->right = p;
    }
}

void tree::displaytree()
{
    printtree(root);
}

void tree::printtree(tree_node *ptr)
{
    if(ptr != NULL)
    {
        printtree(ptr->left);
        cout<<"  "<<ptr->data<<"     ";
        printtree(ptr->right);
    }
}

int main()
{
    tree b;
    b.insert(200);
    b.insert(500);
    b.insert(900);
    b.insert(150);
    b.insert(400);
    b.insert(456);
    b.insert(304); 
     
    cout<<"Binary tree created: "<<endl;
    b.displaytree(); 
}