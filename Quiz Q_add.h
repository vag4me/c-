#include <iostream>
using namespace std;
class Q_add
{
	private:
		MyRandom mr;
		int a;
		int b;
		
	public:
		Q_add()
		{
			a = mr.get_number(20);
			b = mr.get_number(20);
		}
		
		void print_quest()
		{
			cout << a <<"+"<< b << "= "<< endl;
		};
		
		int get_correct()
		{
			return a+b;
		};		
};
