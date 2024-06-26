#include<iostream>
using namespace std;
class Person
{
public:
	string name;
	int age;
	bool male;
	string occupation;
	bool cook;

	void display()
	{
		cout << "Name = " << name << endl;
		cout << "Age = " << age << endl;
		cout << "Gender = " << male << endl;
		cout << "Occupation = " << occupation << endl;
		cout << "Can Cook ? " << cook << endl;
	
	}
};

int main()
{
	Person p1;
	cout << "Enter name" << endl;
	cin >> p1.name;
	cout << "Enter age" << endl;
	cin >> p1.age;
	cout << "Enter gender (Press 1 for male and 0 for female)" << endl;
	cin >> p1.male;
	cout << "Enter occupation" << endl;
	cin >> p1.occupation;
	cout << "Enter 1 if cook while 0 if not" << endl;
	cin >> p1.cook;
	p1.display();
	//Person p2;
	cout << "Enter name" << endl;
	cin >> p1.name;
	cout << "Enter age" << endl;
	cin >> p1.age;
	cout << "Enter gender (Press 1 for male and 0 for female)" << endl;
	cin >> p1.male;
	cout << "Enter occupation" << endl;
	cin >> p1.occupation;
	cout << "Enter 1 if cook while 0 if not" << endl;
	cin >> p1.cook;
	p1.display();
}