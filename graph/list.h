template <class t>
class List{
	t item;
	List *nextPointer;
public:
	bool append(t newItem);
	List* remove(t oldItem);
	bool isThere(t searchItem);
	List* getNext();
	t getItem();
	void setItem(t newItem);
	List();
	List(t newItem);
	~List();
};
#include"list.cpp"
