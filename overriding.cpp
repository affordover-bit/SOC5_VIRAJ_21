#include<iostream>
using namespace std;

class Person
{
	public:
	void walk()
	{
		cout<<"The Person is Walking.";
	}
};
class Student: public Person
{
	public:
	void walk()
	{
		cout<<"The Student is Walking.";
	}
};
int main()
{
	Person p;
	Student s;
	s.walk();
	p.walk();
	return 0;
}
