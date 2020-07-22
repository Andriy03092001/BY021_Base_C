#include<iostream>
using namespace std;

void showArray(int array[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main() {

	const int sizeArray = 15;
	int array[sizeArray] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};

	cout << "My Array:" << endl;
	showArray(array, sizeArray);

	//Ctrl + K + C - commit
	//Ctrl _ K + U - uncomit

	//1.Бульбашка
	//for (int i = 0; i < sizeArray-1; i++)
	//{
	//	for (int j = 0; j < sizeArray-1; j++)
	//	{
	//		if (array[j] > array[j +1])
	//		{
	//			int temp = array[j];
	//			array[j] = array[j + 1];
	//			array[j + 1] = temp;
	//		}
	//	}
	//}

	//2.Вибіркою
	//for (int i = 0; i < sizeArray; i++)
	//{
	//	int temp = array[0];
	//	for (int j = i + 1; j < sizeArray; j++)
	//	{
	//		if (array[i] > array[j])
	//		{
	//			temp = array[i];
	//			array[i] = array[j];
	//			array[j] = temp;
	//		}
	//	}
	//}

	int temp = 0;//тимчасо змінна для збереження числа яке буде шукать своє своє місце
	int indexPrev = 0;//змінна яка буде зберігати індекси попередніх значень елемента
	int count = 0;

	for (int i = 1; i < sizeArray; i++)
	{
		temp = array[i]; //присвоємо в тимчасу змінну поточний елемент
		indexPrev = i - 1;//задаэмо індекс попереднього значення 
		
		//йде до тих пір поки попередній індекс != 0 і попередній елемент більше поточно
		while (indexPrev >= 0 && array[indexPrev] > temp)
		{
			array[indexPrev + 1] = array[indexPrev];
			array[indexPrev] = temp;
			indexPrev--;
			count++;
		}
	}


	cout << "After sort:" << endl;
	showArray(array, sizeArray);

	cout << "Count step inset sort:" << count << endl;




	return 0;
}