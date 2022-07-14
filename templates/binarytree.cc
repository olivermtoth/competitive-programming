struct Node {
    int value;
    Node *left;
    Node *right;
};

class binaryTree {
private:
    Node *root;
public:
    binaryTree() {
        root = NULL;
    }


    void insert(int value) {
        // cout<<value<<endl;

        if(root==NULL) {

            root = new Node;
            root->value = value;
            root->left = NULL;
            root->right = NULL;
            return;
        }
        // Node *node = root;
        queue<Node*>q;
        q.push(root);
        // cout<<"after first push"<<endl;
        while(!q.empty()) {
            Node *current = q.front();
            q.pop();
            if(current->left == NULL) {
                // cout<<"left>>" <<value<<endl;
                current->left = new Node;
                current->left->value = value;
                current->left->left = NULL;
                current->left->right = NULL;
                return;

            } else if(current->right == NULL) {
                // cout<<"right>>" <<value<<endl;
                current->right = new Node;
                current->right->value = value;
                current->right->left = NULL;
                current->right->right = NULL;
                return;

            } else {
                q.push(current->left);
                q.push(current->right);
            }


        }
    }
};

