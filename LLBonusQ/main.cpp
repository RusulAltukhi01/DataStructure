#include<iostream>
#include"LinkedList.cpp"
#include"Node.cpp"

using namespace std;

int main() {

	LinkedList<int> l1;
	LinkedList<int> l2;
	LinkedList<int> l3;

	l1.Insert(5);
	l1.Insert(2);
	l1.Insert(7);
	l1.Insert(2);
	l1.Insert(9);


	l2.Insert(2);
	l2.Insert(6);
	l2.Insert(9);
	l2.Insert(9);
	l2.Insert(1);
	l2.Insert(3);
	l2.Insert(5);


	cout << "First list elements :" << endl;
	for (int i = 0; i < l1.Length(); i++) {
		cout << l1.At(i) << endl;
	}
	cout << "------------------------------------------------------------" << endl;

	cout << "Length : " << endl;
	cout << l1.Length() << endl;

	cout << "\n" << endl;

	cout << "Min value is :" << l1.getMin()<<endl;

	cout << "------------------------------------------------------------" << endl;

	cout << "Second list elements :" << endl;
	for (int i = 0; i < l2.Length(); i++) {
		cout << l2.At(i)<<endl;
	}

	cout << " " << endl;
	cout << "Min value is :" << l2.getMin()<<endl;

	cout << "------------------------------------------------------------" << endl;

	cout << "Intersections :" << endl;
	l1.Intersection(l2);

	cout << "------------------------------------------------------------" << endl;

	l1.merge(l2);
	cout << "Merged list :" << endl;
	for (int i = 0; i < l1.Length(); i++) {
		cout << l1.At(i) << endl;
	}

	cout << "------------------------------------------------------------" << endl;

	cout << "Length : " << endl;
	cout << l1.Length() << endl;

	cout << "------------------------------------------------------------" << endl;
	cout << " " << endl;
	cout << "Min value is :" << l1.getMin()<<endl;

	cout << "------------------------------------------------------------" << endl;

	
	
}