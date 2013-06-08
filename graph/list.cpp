#ifndef NULL
#define NULL 0
#endif

template <class t>
bool List<t>::append(t newItem){
	if(nextPointer){
		return nextPointer->append(newItem);
	}else{
		nextPointer = new List(newItem);
		return true;
	}
}

template <class t>
List<t>* List<t>::remove(t oldItem){
	if(item == oldItem){
		List *newList=nextPointer;
		nextPointer=NULL;
		delete this;
		return newList;
	}else if(nextPointer){
		nextPointer=nextPointer->remove(oldItem);
	}
	return this;
}

template <class t>
bool List<t>::isThere(t searchItem){
	if(item == searchItem){
		return true;
	}else if(nextPointer){
		return nextPointer->isThere(searchItem);
	}else{
		return false;
	}
}

template <class t>
List<t>* List<t>::getNext(){
	return nextPointer;
}

template <class t>
t List<t>::getItem(){
	return item;
}

template <class t>
void List<t>::setItem(t newItem){
	item=newItem;
}

template <class t>
List<t>::List(){
	nextPointer=NULL;
}

template <class t>
List<t>::List(t newItem){
	item=newItem;
	nextPointer=NULL;
}

template <class t>
List<t>::~List(){
	if(nextPointer)
		delete nextPointer;
}

