#include <iostream>
#include  <queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
    this -> data = d;
    this -> left = NULL;
    this -> right = NULL;
    }
};


node* buildTree(node* root){
cout<<"Enter Data"<<endl;
int data;
cin>>data;
root = new node(data);
if(data == -1){
    return NULL;
}
cout<<"Enter data for inserting in left for"<<data<<endl;
root -> left = buildTree(root -> left);
cout<<"Enter data for inserting in right for"<<data<<endl;
root -> right = buildTree(root -> right);

return root;
}

void levelOrderTraversal(node *root){
queue<node*>q;
q.push(root);
q.push(NULL);


while(!q.empty()){
    node* temp = q.front();
    q.pop();
    if(temp==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }
        else{
             cout<<temp -> data<<" ";
             if(temp -> left){
                q.push(temp -> left);
             }
              if(temp -> right){
                q.push(temp -> right);
             }
        }
    }


}
node* buildTreeformLevelOrder(node* root){
     queue<node* > q;
     cout<<"Enter Data"<<endl;
     int data;
     cin>>data;
     root = new node(data);
     q.push(root);

     while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for" <<temp ->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            temp -> left = new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter right node for" <<temp ->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata != -1){
            temp -> right = new node(rightdata);
            q.push(temp->right);
        }

     }
return root;
}
int main(){
    node* root = NULL;
    root = buildTreeformLevelOrder(root);
    levelOrderTraversal(root);
    return 0;
}
