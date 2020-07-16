#include<iostream>
#include<string>
using namespace std;

template <typename T>
void showArray(T array[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}


template<typename T3>
T3 test(T3 a, T3 b) {
	return a + b;
}

template<typename T, typename T2>
void insertElement(T array[], int size, T2 newElement, int indexNewElement) {
	if (size < indexNewElement)
	{
		cout << "Error: not correct index" << endl;
	}
	else {
		array[indexNewElement] = newElement;
		showArray(array, size);
	}
}


int main() {

	int Numbers[10] = {13,23,15,18};
	string Names[10] = { "Vadim", "Mark", "Sasha" };

	cout << test(5,24) << endl;

	insertElement(Names,10,"Aaaa",5);
	insertElement(Numbers, 10, 13, 5);
}