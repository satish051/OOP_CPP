#include <iostream>
#include <cstring>
using namespace std;
// shallow copy
class copyconstructor
{
	char *s_copy;

public:
	copyconstructor(const char *str)
	{
		s_copy = new char[16];
		strcpy(s_copy, str);
	}
	void concatenate(const char *str)
	{
		strcat(s_copy, str);
	}
	~copyconstructor()
	{
		delete[] s_copy;
	}
	void display()
	{
		cout << s_copy << endl;
	}
};
// Deep copy

class box
{
private:
	int length;
	int *breadth;
	int height;

public:
	// Constructor
	box()
	{
		breadth = new int;
	}

	// Function to set the dimensions
	// of the Box
	void set_dimension(int len, int brea, int heig)
	{
		length = len;
		*breadth = brea;
		height = heig;
	}

	// Function to show the dimensions
	// of the Box
	void show_data()
	{
		cout << " Length = " << length
			 << "\n Breadth = " << *breadth
			 << "\n Height = " << height
			 << endl
			 << endl;
	}

	// Parameterized Constructors for
	// for implementing deep copy
	box(box &sample)
	{
		length = sample.length;
		breadth = new int;
		*breadth = *(sample.breadth);
		height = sample.height;
	}

	// Destructors
	~box()
	{
		delete breadth;
	}
};
int main()
{
	// shallow copyconstructor
	cout << "22. Program to demonstrate shallow copy and deep copy constructor" << endl;
	cout << "Shallowcopy:" << endl;
	copyconstructor c1("copy");
	copyconstructor c2 = c1;
	c1.display();
	c2.display();
	c1.concatenate("constructor");
	c1.display();
	c2.display();
	cout << "Deepcopy: " << endl;
	// deepcopy constructor
	//  Object of class box
	box first;

	// Set the dimensions
	first.set_dimension(12, 14, 16);

	// Display the dimensions
	first.show_data();

	// When the data will be copied then
	// all the resources will also get
	// allocated to the new object
	box second = first;

	// Display the dimensions
	second.show_data();
	first.set_dimension(12, 15, 18);
	first.show_data();
	second.show_data();
	return 0;
}