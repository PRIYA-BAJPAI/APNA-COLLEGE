class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
static int idx=-1;
Node *buildTree(preOrder[]){
    idx++;
    if(preOrder[idx] == -1){
        return NULL;
    }
    Node* newNode = new Node(preOrder[idx]);
    newNode->left = buildTree(preOrder);
    newNode->right = buildTree(preOrder);
    return newNode;
}
int main(){
    int preOrder[] = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(preOrder);
    return 0;
}
