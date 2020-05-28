#include<iostream>

// 8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

using namespace std;

 class node
 { public:
    int data;
    node * left;
    node * right;

    node(int d)
    { data=d;
        left=NULL;
        right=NULL;


    }
};

 node * buildTree()
 { int d;
  cin>>d;
 if(d==-1)
   return NULL;

  node * root = new node(d);
  root->left=buildTree();
  root->right=buildTree();
  return root;

 }

 void printPre(node * root)
 { if(root==NULL)
    return;

   cout<<root->data<<" ";
   printPre(root->left);
   printPre(root->right);

 }

 void printIn(node * root)
 { if(root==NULL)
    return;


   printIn(root->left);
   cout<<root->data<<" ";
   printIn(root->right);

 }

 void printPo(node * root)
 { if(root==NULL)
    return;


   printPo(root->left);
   printPo(root->right);
    cout<<root->data<<" ";

 }

 int height(node * root)
 { if(root==NULL)
       return 0;
   int ls= height(root->left) ;
    int rs= height(root->right) ;
    return (max(ls,rs)+1);
}

 void printKlevel(node * root , int k)
  { if(root==NULL)
     return;

    if(k==1)
     { cout<<root->data<<" ";
       return ;

     }

     printKlevel(root->left,k-1);
     printKlevel(root->right,k-1);
     return;
}

 void printAlevel(node * root)
 { int h;
  h=height(root);
  for(int i=1;i<=h;i++)
  { cout<<i<<" level is  ";
     printKlevel(root,i);
     cout<<endl;
   }
   return;

}

 int count(node * root)
  { if(root==NULL)
          return 0;

     return count(root->left)+count(root->right)+1;



   }

 int diameter(node * root)
 { if(root==NULL)
      return 0;

     int h1=height(root->left);
     int h2=height(root->right);
     int op1=h1+h2;

     int op2=height(root->left);
     int op3=height(root->right);

     return max(op1,max(op2,op3));

 }


 int main()
 { node *root=buildTree();
   printPre(root);
   cout<<endl;
    printIn(root);
   cout<<endl;
    printPo(root);
   cout<<endl;

   cout<<"Height of the tree is : "<<height(root)<<endl;
   printAlevel(root);

   cout<<"Total nodes in the tree is .."<<count(root)<<endl;


   cout<<"Diameter of the tree is .."<<diameter(root)<<endl;
 return 0;
 }
