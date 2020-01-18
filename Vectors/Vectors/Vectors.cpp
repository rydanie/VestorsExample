///VECTOR

#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
void calculate();  //Function To calculate
int main()
{
	int choice = 0;
	do
	{
		system("cls");   //Clear the Screen
		cout << "Vector\n\n";
		cout << " 1. Enter Numbers \n";
		cout << " 2. End Program \n";
		while ((!(cin >> choice) || (choice < 0 || choice > 2))) {
			cout << "must Ener 1 or 2\n ";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (choice == 1)
		{
			calculate();
			cout << "Enter To Continue ";
			cin.get(); cin.get();
		}

	} while (choice != 2);
	return 0;
}

void calculate()
{
	cout << setprecision(2) << fixed;
	char choice = 'Y';
	vector<double> array;
	double number = 0.0, sum = 0.0, mean = 0.0, median = 0.0;
	do {
		system("CLS");
		cout << "Enter your number: " << endl;
		while (!(cin >> number) || (choice < 0)) {
			cout << "Must Ener a positive Number\n ";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		array.push_back(number);
		cout << "Enter Another Number Y/N ";
		cin >> choice;
	} while (toupper(choice) == 'Y');

	//Unsorted Numbers
	cout << "\nUnsorted Numbers    ";
	for (int j = 0; j < array.size(); ++j)
		cout << array[j] << ' ';

	//Sort Descending
	cout << "\nSorted Ascending    ";
	sort(array.begin(), array.end());
	for (int j = 0; j < array.size(); ++j)
		cout << array[j] << ' ';

	//Sort Ascending
	cout << "\nSorted Descending   ";
	sort(array.begin(), array.end(), greater<int>());
	for (int j = 0; j < array.size(); ++j)
		cout << array[j] << ' ';

	//Mean (Average)
	cout << "\nAverage             ";

	for (int j = 0; j < array.size(); ++j)
		sum += array[j];
	
	mean = sum / array.size();
	cout << mean << ' ';

	//Median
	cout << "\nMedian              ";
	int size = array.size();
	int oddeven = size % 2;

	if (size == 1)
	{
		median = array[0];
		cout << median << ' ';
	}
	else if (oddeven = 0) 
	{
		int index = size / 2;
		median = array[index];
		cout << median << ' ';

	}
	else
	{
		int index = size / 2;
		median = (array[index]+ array[index-1])/2;
		cout << median << ' ';
	}

	cout << "\n\nEnter to Continue ";
	//cin.get();
}





