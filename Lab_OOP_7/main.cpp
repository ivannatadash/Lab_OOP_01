#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <ctime>

using namespace std;

void Ask(vector<int>);
void ChangeElement(vector<int>*, int);
vector<int> Input();
void Output(vector<int>);

const int STR_MAX = 50;
const int NUMS_MAX = 100;

int main(void)
{
	vector<int> v = Input();

	cout << "Output:" << endl;
	Output(v);

	Ask(v);

	getchar();
	return 0;
}

void Ask(vector<int> v)
{
	int user;
	char str[] = "Enter 0 if you want to exit, 1 to save vector to a file or 2 to change an element:";
	cout << str << endl;
	cin >> user;
	while (user)
	{
		if (user == 1)
		{
			char filename[STR_MAX];
			cout << "Enter file name to save vector to: ";
			cin >> filename;
			cout << "Saving..." << endl;
			ofstream file;
			file.open(filename);
			if (!file)
			{
				cout << "Sorry, couldn't create file." << endl;
			}
			else
			{
				for (int i : v)
				{
					file << i << endl;
				}
				file.close();
				cout << "Saved!" << endl;
			}
		}
		else if (user == 2)
		{
			int ind;
			cout << "Enter index of element you want to change: ";
			cin >> ind;
			ChangeElement(&v, ind);
			cout << "\nChanged vector:" << endl;
			Output(v);
		}
		cout << str << endl;
		cin >> user;
	}
	cout << "Exiting..." << endl;
}

void ChangeElement(vector<int>* v, int ind)
{
	int temp;
	cout << "What it should become?" << endl;
	cin >> temp;
	(*v)[ind] = temp;
}

vector<int> Input()
{
	int user;
	cout << "Enter 0 if you want to get numbers from keyboard, 1 to get numbers from file or 2 to generate " << NUMS_MAX << " numbers: " << endl;
	cin >> user;
	if (user == 1)
	{
		vector<int> vect1(0);
		char filename[STR_MAX];
		cout << "Enter file name: ";
		cin >> filename;
		ifstream file;
		file.open(filename);
		if (!file)
		{
			cout << "Couldn't open file." << endl;
			exit(1);
		}
		int curNum;
		while (file >> curNum)
		{
			vect1.push_back(curNum);
		}
		file.close();
		return vect1;
	}
	else if (!user)
	{
		int size;
		cout << "Enter how many numbers you want to enter? " << endl;
		cin >> size;
		vector<int> vect2(size);
		for (int i = 0; i < size; i++)
		{
			cout << "Enter " << i + 1 << " element: ";
			cin >> vect2[i];
		}
		return vect2;
	}
	else
	{
		vector<int> vect3(NUMS_MAX);
		int curNum;
		for (int i = 0; i < NUMS_MAX; i++)
		{
			curNum = rand() % 10000 + 1;
			vect3[i] = curNum;
		}
		return vect3;
	}
}

void Output(vector<int> v)
{
	time_t start = clock();
	for (int i : v)
	{
		cout << i << ", ";
	}
	cout << endl;
	time_t final = clock();
	cout << "Time took for output is: " << final - start << " milliseconds." << endl;
}
