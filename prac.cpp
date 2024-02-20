#include<iostream>
using namespace std;

class Node{
    int data;
    Node * lchild;
    Node* rchild;

    public:
 Node(){
    data=0;
    lchild=NULL;
    rchild=NULL;
 }
 Node(int data){

    this->data=data;
    lchild=NULL;
    rchild=NULL;
 }

 int get_data(){
  return data;
 }

  void set_lchild(Node * lchild){
    this->lchild=lchild;
  }
  Node * get_lchild(){
    return lchild;
  } 

  void set_rchild(Node * rchild){
    this->rchild=rchild;
  }

  Node * get_rchild(){
    return rchild;
  }


};
    
class Binary{
 Node * head;

 public:
 Binary(){
    head=NULL;
 }

 void insert_node(int data){
    Node* new_node=new Node(data);
    if(head==NULL){;
        head=new_node;
    }
    else{
      Node * pres=head;
      Node * prev=NULL;

      while(pres!=NULL){
        prev=pres;
        if(pres->get_data()>data){
          pres=pres->get_lchild();
        }
        else{
          pres=pres->get_rchild();
        }
      }

      if(prev->get_data()>data){
        prev->set_lchild(new_node);
      }
      else{
        prev->set_rchild(new_node);
      }
    }
 }
  void preorder(){
    preorder(head);
   }
   void preorder(Node * root){
    
    if(root!=NULL){
         cout<<root->get_data()<<endl;
    preorder(root->get_lchild());
   
    preorder(root->get_rchild());
    
    }
   }
};

int main(){
  Binary b1;

  b1.insert_node(10);
  b1.insert_node(44);
  b1.insert_node(75);
  b1.insert_node(99);
  b1.insert_node(20);
  b1.preorder();
    return 0;
}
