#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

// Definition of TreeNode structure
// for a binary tree node
struct TreeNode {
    // Value of the node
    int val;
    
    // Pointer to the left child node
    TreeNode* left;
    
    // Pointer to the right child node
    TreeNode* right;

    // Constructor to initialize the node with a
    // value and set left and right pointers to null
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    // Function to find the floor of a key
    // in a Binary Search Tree (BST)
    int floorInBST(TreeNode* root, int key){
        // Initialize the floor variable
        // to store the floor value
        int floor = -1;
        
        // Traverse the BST until reaching
        // the endor finding the key
        while(root){
            // If the key is found, assign it 
            // as the floor value and return
            if(root->val == key){
                floor = root->val;
                return floor;
            }
            
            // If the key is greater than the current
            // node's value, move to the right subtree
            if(key > root->val){
                // Update the floor with the current node's
                // value and move to the right subtree
                floor = root->val;
                root = root->right;
            }
            else{
                // If the key is smaller than the current
                // node's value, move to the left subtree
                root = root->left;
            }
        }
        // Return the computed floor value
        return floor;
    }
};



// Function to perform an in-order traversal
// of a binary tree and print its nodes
void printInOrder(TreeNode* root) {
    // Check if the current node
    // is null (base case for recursion)
    if (root == nullptr) {
        // If null, return and
        // terminate the function
        return;
    }

    // Recursively call printInOrder
    // for the left subtree
    printInOrder(root->left);

    // Print the value of the current node
    cout << root->val << " ";

    // Recursively call printInOrder
    // for the right subtree
    printInOrder(root->right);
}

int main() {
    // Creating a BST
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(13);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(2);
    root->left->left->right = new TreeNode(4);
    root->left->right = new TreeNode(6);
    root->left->right->right = new TreeNode(9);
    root->right->left = new TreeNode(11);
    root->right->right = new TreeNode(14);
    
    cout << "Binary Search Tree: "<< endl;
    printInOrder(root);
    cout << endl;

    Solution solution;
    
    // Searching for a value in the BST
    int target = 8;
    int ciel = solution.floorInBST(root, target);
    
    if(ciel != -1){
        cout << "Floor of " << target << " is: " << ciel << endl;
    }
    else{
        cout << "No floor found!";
    }
    
    return 0;
}
                            
                  