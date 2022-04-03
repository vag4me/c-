#include <iostream>

using namespace std;

class add
{
		
	public:
		int a;
		int b;
		add(){};
		take(int num1,int num2)
		{
			a = num1;
			b = num2;
		}
		void add_two()
		{
			cout << a << " + " << b << " = " << a+b << endl;
		}
};

class Min : public add
{
	public:
		void minus_two() 
		{
			cout << a << " - " << b << " = " << a-b;
		}
};

int main() {
	int num1,num2,num3;
	Min obj1;
	
	cin >> num1;
	cin >> num2;
	
	obj1.take(num1,num2);
	obj1.add_two();
	
	obj1.minus_two();

	
	
	return 0;
}
