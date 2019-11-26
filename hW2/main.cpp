//
//  main.cpp
//  hW2
//
//  Created by Hllbrhm on 26.11.2019.
//  Copyright © 2019 Hllbrhm. All rights reserved.
//

//


//recursive bubble

//non-recursive bubble

/*
#include <iostream>

int main(int argc, const char * argv[]) {
    
    
    //Entered numbers from user
    
    // insert the numbers to stack
    
    //choise betweeen recursive or non-recursive
    
    //display stack
    
    
}
*/
/*
#include<iostream>

#define SIZE 5
 
using namespace std;
 
class STACK
{
    private:
        int num[SIZE];
        int top;
    public:
        STACK();    //defualt constructor
        int push(int);
        int isEmpty();
        int isFull();
        void displayItems();
};
STACK::STACK(){
    top=-1;
}
 
int STACK::isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}
 
int STACK::isFull(){
    if(top==(SIZE-1))
        return 1;
    else
        return 0;
}
 
int STACK::push(int n){
    //check stack is full or not
    if(isFull()){
        return 0;
    }
    ++top;
    num[top]=n;
    return n;
}
  
void STACK::displayItems(){
    int i; //for loop
    cout<<"STACK is: ";
    for(i=(top); i>=0; i--)
        cout<<num[i]<<" ";
    cout<<endl;
}
 
int main(){
    //declare object
    STACK stk;
    int choice, n,temp;
     
    do
    {
        cout<<endl;
        cout<<"0 - Exit."<<endl;
        cout<<"1 - Push Item."<<endl;
        cout<<"2 - Recursive Bubble."<<endl;
        cout<<"3 - Non-Recursive Bubble."<<endl;
        cout<<"4 - Display Items (Print STACK)"<<endl;
         
        cout<<"Enter your choice: ";
        cin>>choice;
         
        switch(choice){
            case 0: break;
             
            case 1:
                cout<<"Enter item to insert: ";
                cin>>n;
                temp=stk.push(n);
                if(temp==0)
                    cout<<"STACK is FULL."<<endl;
                else
                    cout<<temp<<" inserted."<<endl;
            break;
                 
            case 2:
               //recursive
            break;
             
            case 3:
                //non recursive
                break;
            case 4:
                stk.displayItems();
                break;

            default:
                cout<<"An Invalid choice."<<endl;
        }
    }while(choice!=0);
 
     
    return 0;
     
}
*/
// C program to Implement a stack
//using singly linked list
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
public:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void push()
    {
        int n;
        cout<<"Enter value: "<<endl;
        cin>>n;
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    void display(node *list)
    {
      
      while(list!=NULL)
      {
          cout<<list->data<<" ";
          list=list->next;
        
    }
        cout<<endl;
    }

    void nonRecursiveBubbleSort(node *head)
    {
        
        node *i,*j;
        i=head;
        j=head->next;
         

        for(i=head;i!=NULL;i=i->next){
            for(j=i->next;j!=NULL;j=j->next){
                if((i->data)>(j->data)){swap(i->data, j->data);}
            }
        }
         
        
    }
    void recursiveBubbleSort(){
    
    }
    
    };

// Driver Code
int main()
{
    linked_list list;
    // push the elements of stack
    int x=0;
    while(x!=-1){
        cout<<"1-ekle"<<endl<<"press -1 exit"<<endl;
        cin>>x;
        if(x!=-1){list.push();}
    }
    // display stack elements

    list.display(list.head);
    list.nonRecursiveBubbleSort(list.head);
    list.display(list.head);


   
    return 0;

    
}


