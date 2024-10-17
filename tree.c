#include<stdio.h>
#include<stdlib.h>
 struct node{
  int data;
   struct node *left,*right;
   };
  struct node *create(){
      int x;
      struct node *newnode;
      newnode=(struct node*)malloc(sizeof(struct node));
     printf("enter the data on the node\n");
     scanf("%d",&x);
     if(x==-1){
     return 0 ;
      }
     newnode->data = x;
     printf("Enter the left child of %d\n", x);
     newnode->left = create();
     printf("enter the right child of %d\n", x);
     newnode->right = create();
         return newnode;
}
   void preorder(struct node *root){
       if(root==0){
       return ;
       }
      printf("%d",root->data);
      preorder(root->left);
      preorder(root->right);
  }
   void inorder(struct node *root){
    if(root==0){
     return;
   }
   inorder(root->left);
  printf("%d",root->data);
  inorder(root->right);
}
    void postorder (struct node *root){
     if(root==0){
        return;
        }
      postorder(root->left);
      postorder(root->right);
      printf("%d",root->data); 
 }
      

   void main(){
  struct node *root;
 root = create();
printf("Preorder is\n");
 preorder(root);
  printf("\n");
printf("Inorder is\n");
inorder(root);
   printf("\n");
printf("Postorder is\n");
  postorder(root);
}

      
 