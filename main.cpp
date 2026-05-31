#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"


int main()
{
   
   //clsDblLinkedList<int> MyDblLinkedList;
   
   //if (MyDblLinkedList.IsEmpty() )
//   {
//   	cout<<"\nYes,the linked list is a empty!\n";
//   }
//   else
//   {
//   	cout<<"\nNo,the linked list isn't  a empty!\n";
//   }
   
   //MyDblLinkedList.InsertAtBeginning(50);
//   MyDblLinkedList.InsertAtBeginning(40);
//   MyDblLinkedList.InsertAtBeginning(30);
//   MyDblLinkedList.InsertAtBeginning(20);
//   MyDblLinkedList.InsertAtBeginning(10);
// 
  
  //clsDblLinkedList<int>::Node* N1 =MyDblLinkedList.Find(20);
 
  
  //if (N1 !=NULL)
//      cout<<"\n\nThe node is found :-)";
//
//  cout<<"\n\nThe node Not found :-(";
// 
//  
//  cout<<"\n\nLinked list content after deleting first Node: ";
//    MyDblLinkedList.DeleteFirstNode();
//  MyDblLinkedList.PrintList();
//  
//  cout<<"\n\nLinked list content after Inserting : 500 ";
//  MyDblLinkedList.InsertAfter(N1 , 500);
//  MyDblLinkedList.PrintList();
//  
//  cout<<"\n\nLinked list content after Inserting at End: ";
//  MyDblLinkedList.InsertAtEnd(60);
//  MyDblLinkedList.PrintList();
//  
//  cout<<"\n\nLinked list content after Deleting  a node: ";
//  MyDblLinkedList.DeleteNode(N1);
//  MyDblLinkedList.PrintList();
//   
//  cout<<"\n\nLinked list content after deleting a last  node: ";
//  MyDblLinkedList.DeleteLastNode();
//  MyDblLinkedList.PrintList();  
  //cout<<"\nLinked list contents : ";
//  MyDblLinkedList.PrintList();
 
  //cout<<"\nThe Linked  list size : ";
//  cout<<MyDblLinkedList.Size();

//if (MyDblLinkedList.IsEmpty() )
//   {
//   	cout<<"\nYes,the linked list is a empty!\n";
//   }
//   else
//   {
//   	cout<<"\nNo,the linked list isn't  a empty!\n";
//   }
      
      //MyDblLinkedList.Clear();
//      cout<<"\nLinked list contents : ";
//      MyDblLinkedList.PrintList();
  
//cout<< "The linked list size of items :"<<MyDblLinkedList.Size();


//MyDblLinkedList.Clear();
//cout<< "\nThe linked list size of items after execution Clear() : "<< MyDblLinkedList.Size();

 //cout <<"\nthe linked list contents before execution reverse()\n";
// MyDblLinkedList.PrintList();
//MyDblLinkedList.Reverse();
//cout <<"\nthe linked list contents after execution reverse()\n";
//MyDblLinkedList.PrintList();

//clsDblLinkedList<int >::Node* N ;
//cout<<"\nLinked list contents : ";
//MyDblLinkedList.PrintList();

//int Pos = 3;
//N = MyDblLinkedList.GetNode(3);
// 
// if (N !=nullptr){
// 	cout<<"\nthe node with index " << Pos << " its value is : "<<N->value;
// }
// else
// {
// 	cout<<"\nThere isn't node with index " <<Pos <<endl;
// }
 
//short Pos =3;

//  cout <<"\nThe item of index " << Pos <<" is : " <<MyDblLinkedList.GetItem(Pos);
  //MyDblLinkedList.UpdateItem(2 , 500);
//  cout <<"\nThe Node value after update :"  ;
//  MyDblLinkedList.PrintList();

//MyDblLinkedList.InsertAfter(2 , 500);
//cout<<"\nLinked list after insert 500 after index : 2";
//MyDblLinkedList.PrintList();
 
 
 //*****My Queue library**//
  clsMyQueue<int> MyQueue;
  
  MyQueue.push(10);
  MyQueue.push(20);
  MyQueue.push(30);
  MyQueue.push(40);
  MyQueue.push(50);
 
 cout<<"\The Queue content : ";
 MyQueue.Print();
 
 cout<<"\nQueue size  : "<<MyQueue.size();
 cout<<"\nQueue fornt : "<<MyQueue.front();
 cout<<"\nQueue back : "<<MyQueue.back();
 MyQueue.pop();
 cout<<"\nQueue  content after pop : ";
 MyQueue.Print();
 
 
 
 


   return 0 ;
}