#include <iostream>
using namespace std;

#define SIZE 10
#define MAX_MARK 10
int main() {
	int marks[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		marks[i] = rand() % (MAX_MARK + 1);

	}
	cout << "Students marks: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << marks[i] << " ";
	}
	double avg = 0;
	for (int i = 0; i < SIZE; i++)
	{
		avg += marks[i];
	}
	avg = avg / SIZE;
	cout << "Average: " << avg << endl;

}