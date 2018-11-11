#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data); // able to traverse even though root = 3 (top node) b/c every time
                                                    // insert is called recursively, whatever node currently looked at
                                                    // becomes the temporary root in the insert func (e.g. Node* insert (
                                                    // Node* root, int data) and so you continue to traverse down the tree
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root; // returns root so you always point to the top (3)
           }
        }
      
        int lftHeight = 0;
        int rghtHeight = 0;
        int height = 0;

        int getHeight(Node* root){
            if (root == NULL) {
                return height = -1;
            } else {
                lftHeight = getHeight(root->left);
                rghtHeight = getHeight(root->right);         
            
                if (lftHeight > rghtHeight) 
                    return lftHeight+1;
                else
                    return rghtHeight+1;
            }
         }
}; // end of Solution


int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}
