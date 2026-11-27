#include<iostream>
using namespace std;

class Calculator
{
	private:
	int num;

	public:
	float add(float x, float y)
	{
		return x+y;
	}

	int add(float x, float y, float z)
	{
		return x+y+z;
	}

	void display()
	{
		cout<<"The Addition 1 is: "<<add(2,4)<<endl;
		cout<<"The Addition 2 is: "<<add(3,5,6)<<endl;
	}
};
int main()
{
	Calculator calc;
	calc.display()<<endl;
	return 0;
}
