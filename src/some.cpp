#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include "AudioFile.h"

// #include <string>

using namespace std;

void SwapNos(int &a, int &b)
{
	int c = b;
	b = a;
	a = c;
}

enum Movement
{
	Left,
	Right,
	Up,
	Down
};

class Fish
{
	public:
		int length;
		int height;
		string Move(Movement movn);
		Fish(int l, int h, int w);

		Fish()
		{}

	private:
		int weight;

	protected:
		string shape;
};

string Fish::Move(Movement mov)
{
	switch(mov)
	{
		case Left:
			return "Left";
			break;

		case Right:
			return "Right";
			break;

		default:
			return "Unknown movement";
	}
}

Fish::Fish(int l, int h, int w)
{
	length = l;
	height = h;
	weight = w;
}

class Cichlid : public Fish
{
	public:
		void Cichlid_(int l, int h)
		{
			length = l;
			height = h;
		}

		void setLength(int l)
		{
			length = l;
			// weight = 3;
			shape = "pointed";
		}

};

int main()
{
	AudioFile<double> audioFile;
	audioFile.load("test-audio.wav");

	audioFile.printSummary();

	std::cout << "Learn cpp ";

	char s = 'F';
	char l = 66;
	string str = "Str";
	str.append("str");

	cout << s << endl;
	cout << l << endl;
	cout << str;
	// getline(cin, str);
	// cout << "Str is " << str;
	cout << sqrt(64);

	// int arr[3] = { 6, 8, 1 };
	int arr[] = { 6, 8, 1 };

	for(int ele : arr)
	{
		cout << ele;
	}

	cout << "Size of the array is: ";
	cout << sizeof(arr)/sizeof(int);

	string someVar = "someVar is string there";
	string &soeVar_ = someVar;
	cout << soeVar_;

	string* po = &someVar;
	cout << *po; //De reference

	*po = "New value now!";
	cout << someVar;
	cout << *po;
	int aa = 1;
	int bb = 7;
	SwapNos(aa, bb);
	cout << aa << endl << bb;

	Fish fish(1, 3, 6);
	fish.height = 6;
	fish.length = 1;
	// fish.weight = 1;
	// fish.shape = "shape is":
	cout << fish.height << " " << fish.length << " " << fish.Move(Left);

	Cichlid cichlid;
	cout << cichlid.height << " " << cichlid.length;

	ofstream SomeFile("NameFile");
	SomeFile << "Some content to the file!";
	SomeFile.close();
}
