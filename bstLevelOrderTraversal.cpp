#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
        void printGivenLevel(Node* root, int level) { 
            if (root == NULL) 
                return; 
            if (level == 1) 
                cout << root->data << " ";
            else if (level > 1) 
            { 
             printGivenLevel(root->left, level-1); 
                printGivenLevel(root->right, level-1); 
            } 
        }

        int lftHeight = 0;
        int rghtHeight = 0;
        int height = 0;

        int getHeight(Node* root){
            if (root == NULL) {
                return height;
            } else {
                lftHeight = getHeight(root->left);
                rghtHeight = getHeight(root->right);         
            
                if (lftHeight > rghtHeight) 
                    return lftHeight+1;
                else
                    return rghtHeight+1;
            }
        }

        void levelOrder(Node * root){
            int h = getHeight(root); 
            int i; 
            for (i=1; i<=h; i++) 
                printGivenLevel(root, i);
        }
    
};//End of Solution


int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}    
