#include<iostream>
using name space std;
struct node
{
	int data;
	 struct node*left;
	 struct node*right;
}*root
class BST
{
	public:
void insert(node*,node*);
void find(int*, node**,node**);
void delete(ele);
void case_a(node*,node*);
void case_b(node*,node*);
void case_c(node*,node*);
void inorder(node*,node*);
void preorder(node*,node*);
void postorder(node*,node*);

}
int main()
{
	int ele,choice;
	 BST bst()
	cout<<"---------"<<endl;
	cout<<"enter the elements"<<endl;
	cout<<"\n----------\n"<<endl;
	cout<<1."insert the element"<<endl;
	cout<<2."delete the element"<<endl;
	cout<<3."inorder"<<endl;
	cout<<4."preorder"<<endl;
	cout<<5."postorder"<<endl;
	cout<<6."display"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>choice;{
	switch(ch)
	{
		case 1:
			cout<<"insert the elememt"<<endl;
			bst.insert(root,node)
			break;
				case 2:
			cout<<"find the elememt"<<endl;
			bst.find(ele)
			break;
				case 3:
			cout<<"delete the elememt"<<endl;
			bst.delete(ele)
			break;
				case 4:
			cout<<"inorder"<<endl;
			bst.inorder(root,node)
			break;
				case 5:
			cout<<"preorder"<<endl;
			bst.preorder(root,node)
			break;
				case 6:
			cout<<"preorder"<<endl;
			bst.insert(root,node)
			break;
				case 7:
					default:
			cout<<"invalid choice"<<endl;
			exit;
			
				}
				void bst::find(int *par,int*loc)
				{
					int *ptr,*ptrsave
					if(temp==NULL)
					{
						*par=NULL;
						*loc=NULL;
					}
					if(temp=root->info)
					{
						*par=root;
						*loc=NULL;
					}
					
						if(temp<=root->info)
					{
						*par=root;
						*loc=node;
					}
					void bst::insert(int root,*node)
					{
						int root,node;
						if(root==NULL)
						root->info=new node->info
						root->lrft=null;
						root->right=nu;
						cout<<"element inserted"<<endl;
						{
							if(root->info<new node)
							{
								if(root->left=null)
								
							}
							cout<<"element inserted into left node"<<endl;
						}
						elseif(root->info>new node
						{
							if(root->right=null)
								
							}
							cout<<"element inserted into right node"<<endl;	
						}
						}
							if(root->left=null)
								
							}
							cout<<"element inserted into left node"<<endl;
								if(root->left=null)
								
}
void bst::inorder(*ptr)
{
	if(temp==null)
	cout<<"no elements";
	}
	while(temp!==null)
	{
	inorder(ptr->left);
	cout<<ptr->info;
	inorder(ptr->right);
	
	}				
	void bst::postorder(*ptr)
{
	if(temp==null)
	cout<<"no elements";
	}
	while(temp!==null)
	{
	inorder(ptr->left);
	inorder(ptr->right);
	cout<<ptr->info;
		}	
	void bst::preorder(*ptr)
{
	if(temp==null)
	cout<<"no elements";
	}
	while(temp!==null)
	{

		cout<<ptr->info;
	inorder(ptr->left);
	inorder(ptr->right);

		}	
	}
		
		
	
