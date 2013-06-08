#include<iostream>
#include"list.h"
using namespace std;

void display(List<int> *list){
	int count = 0;
	while(list){
		cout<<list->getItem()<<endl;
		count++;
		list=list->getNext();
	}
	cout<<"The List contain "<<count<<" Items."<<endl;
}

List<int>* append(List<int> *list){
	cout<<"Enter an Integer to append to the list"<<endl;
	int item;
	cin>>item;
	if(list){
		list->append(item);
		return list;
	}else{
		return new List<int>(item);
	}
}

List<int>* remove(List<int> *list){
	cout<<"Enter an Integer to remove form the list"<<endl;
	int item;
	cin>>item;
	return list->remove(item);
}

void search(List<int> *list){
	cout<<"Enter an Integer to search form the list"<<endl;
	int item;
	cin>>item;
	if(list&&list->isThere(item)){
		cout<<item<<" is found in the list."<<endl;
	}else{
		cout<<item<<" is not found in the list."<<endl;
	}
}

int main(){
	List<int> *myList = NULL;
	int option;
	do{
		cout	<<"1.Display."<<endl
			<<"2.Append."<<endl
			<<"3.Delete."<<endl
			<<"4.Search."<<endl
			<<"0.Exit."<<endl;
		cin	>>option;
		switch(option){
		case 1:
			display(myList);
			break;
		case 2:
			myList = append(myList);
			break;
		case 3:
			myList = remove(myList);
			break;
		case 4:
			search(myList);
			break;
		case 0:
			cout<<"bye."<<endl;
			break;
		default:
			cout<<"You entered an invalid option. Please try again."<<endl;
		}
	}while(option != 0);
	return 0;
}
