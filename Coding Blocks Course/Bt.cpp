#include<iostream>

 using namespace std;

 class node
 { 
     public :
     int data;
     node * left;
     node * right;

     node(int d)
      { data=d;
        left=NULL;
        right=NULL;
      }
  };

 node * buildT()
  { int d;
    cin>>d;
    if(d==-1)
      return NULL;

     node * root = new node(d);
  root->left=buildT();
  root->right=buildT();
  return root;

     return root;  
  }

  void printPre(node * root)
   {
      if(root==NULL)
       return ;
      cout<<root->data<<" "; 
      printPre(root->left);
      printPre(root->right);
      
   }  

  void printIn(node * root)
   {
      if(root==NULL)
       return ;
      printIn(root->left);
      cout<<root->data<<" ";
      printIn(root->right); 
   } 

  void printPo(node * root)
   {
      if(root==NULL)
       return ;
      printPo(root->left);
      printPo(root->right);
      cout<<root->data<<" "; 
   }  
  
  int height(node *root)
   { 
      if(root==NULL)
      	 return 0;

      int ls=height(root->left);
      int rs=height(root->right);

      return (max(ls,rs)+1);	

   } 

   int count(node * root)
   { if(root==NULL)
   	   return 0;

   	  return count(root->left)+count(root->right)+1; 


   }

  void printKlevel(node * root,int k)
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
    { int h=height(root);
    	for(int i=1;i<=h;i++)
    		 {  cout<<i<<"th level is ";
    		 	printKlevel(root,i);
    		 	cout<<endl;
    		 }
     return; 		 

    } 



 int main()
 { node * root=buildT();
   printPre(root);
   cout<<endl;	
   printIn(root);
   cout<<endl;
   printPo(root);

   cout<<"Height of the tree is "<<height(root)<<endl;
       cout<<"Nodes in the tree is ";
       cout<<count(root);
       cout<<endl;
       cout<<"3rd level is ";
       printKlevel(root,3);
       cout<<"level wise printing ";
       printAlevel(root);


   return 0;
 } 