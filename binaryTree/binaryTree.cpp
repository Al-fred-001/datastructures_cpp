#include <iostream>
#include <vector>

class Node
{
public:
    float val = 0;         // value to store
    Node *left = nullptr;  // left node
    Node *right = nullptr; // right node

    Node() {}
    Node(float v) { val = v; }
};

class BinaryTree
{
public:
    Node *root = nullptr; // cannot reference or acces nullptr

    void insert(float value)
    {

        if (root == nullptr)
        {
            root = new Node(value);
            return;
        }

        Node *curr_node = root;
        bool found = false;
        int i = 0;
        while (!found)
        {
            if (value <= curr_node->val)
            {
                if (curr_node->left)
                {
                    curr_node = curr_node->left;
                }
                else
                {
                    curr_node->left = new Node(value);
                    found = true;
                }
            }
            else
            {
                if (curr_node->right)
                {
                    curr_node = curr_node->right;
                }
                else
                {
                    curr_node->right = new Node(value);
                    found = true;
                }
            }
            i++;
        }
    }

    Node *search(float value)
    {
        Node *curr_node = root;
        bool found = false;
        while (!found)
        {
            if (curr_node)
            {
                if (value == curr_node->val)
                {
                    found = true;
                    return curr_node;
                }
                if (value < curr_node->val)
                {
                    curr_node = curr_node->left;
                }
                else
                {
                    curr_node = curr_node->right;
                }
            }
            else
            {
                return nullptr;
            }
        }
        return nullptr;
    }
    std::vector<bool> searchPath(float value)
    {
        Node *curr_node = root;
        bool found = false;
        std::vector<bool> path; // false = left, true = right
        while (!found)
        {
            if (curr_node)
            {
                if (value == curr_node->val)
                {
                    found = true;
                    return path;
                }
                if (value < curr_node->val)
                {
                    curr_node = curr_node->left;
                    path.push_back(false);
                }
                else
                {
                    curr_node = curr_node->right;
                    path.push_back(true);
                }
            }
            else
            {
                break;
            }
        }
        return {}; // std::vector<bool> (0)
    }
};

using namespace std;
int main()
{
    BinaryTree tree;

    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(4);
    tree.insert(365);
    tree.insert(909);
    tree.insert(2.5);
    tree.insert(4.5);
    tree.insert(4.57);
    tree.insert(4.39);
    tree.insert(14);

    //              FIRST TEST
    // std::cout << tree.root->right->left->val << std::endl;

    //              SECOND TEST
    // Node *result = tree.search(4.39);
    // if (result)
    // {
    //     std::cout << "Found: " << result->val << std::endl;
    // }
    // else
    // {
    //     std::cout << "Not found!" << std::endl;
    // }

    //              THIRD TEST

    vector<bool> result = tree.searchPath(4.29);
    if ((result.size() == 0))
    {
        std::cout << "\nNOT FOUND KANCHA!!" << std::endl;
    }
    else
    {
        Node *curr_node = tree.root;
        std::cout << "PATH : ./ ";
        for (int i = 0; i < result.size(); i++)
        {
            std::cout << (result[i] ? "right/" : "left/") << "  ";
            if (result[i] == false)
            {
                curr_node = curr_node->left;
            }
            else if (result[i] == true)
            {
                curr_node = curr_node->right;
            }
        }
        std::cout << "here :)\nFOUND : " << curr_node->val << std::endl;
    }

    return 0;
}