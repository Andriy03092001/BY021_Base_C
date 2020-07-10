#include<iostream>
#include<ctime>
#include<windows.h>
#include<string>

using namespace std;
//
//#define CLEAR system("cls")
//#define PAUSE(seconds) Sleep(seconds)
//#define ANIMATE system("cls"); Sleep(1000);
//
//inline int suma(int a, int b) {
//	return a + b;
//}
//void showMessage(string text) {
//	cout << text << endl;
//}
//
//void showMessage(string text, int numberMessage) {
//	cout << numberMessage << ". " << text << endl;
//}
//
//void showMessage() {
//	cout << "Please set text for print!" << endl;
//}

template <typename Type>
void uniteElements(Type a, Type b) {
	cout << a + b << " ";
}

template <typename Type>
void showArray(Type array[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}

template <typename Type1>
Type1 test(Type1 t) {
	return t * 2;
}

int main() {
	//cout << "1" << endl;
	//cout << "2" << endl;
	//PAUSE(2000);
	//CLEAR;
	//cout << "3" << endl;
	//ANIMATE;
	//showMessage("GROUP: BY021");
	//showMessage("GROUP: BY021", 9);
	//showMessage();
	//showMessage();
	//string a = "IT";
	//string b = "STEP";
	//string c = a + b;
	//cout << c << endl;
	//uniteElements(25,5);
	//uniteElements("IT", "STEP");
	//uniteElements(25.5, 5.1);

	int arrayInt[10] = { 1,2,3,4,5,6,7,8,9,10 };
	string arrayString[5] = { "Mark","Sasha","Vadim","Max","Vlad" };

	showArray(arrayInt, 10);
	cout << endl;
	showArray(arrayString, 5);
	test(5);



	return 0;
}