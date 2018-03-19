#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
}



void printInorder(struct node* node)
{
     if ((node == NULL)||(node==0))
          return;

      printInorder(node->left);

      printf("%d ", node->data);

      printInorder(node->right);
}

int main()
{
    int n;
    cout<<"Enter the number of trees you want:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cout<<"Enter the root value:";
      cin>>node->data;
      cout<<"Enter the left tree values:";
      cin>>node->left;
      cout<<"Enter the right tree values:";
      cin>>node->right;
    }

}
