#include <iostream>
#include "Student.h"

using namespace std;

void check(int anws)
{
	if(anws == 1)
	{
		cout << "pass" << endl;
	}
	else
	{
		cout << "failed"<<endl;
	}
}

int main() {
	int g1,g2,g3,re;
	
	cout << "dose touw bathmous"<<endl;
	cin >> g1;
	cin >> g2;
	cin >> g3;
	Student obj1(g1,g2,g3);
	
	cout << "dose touw bathmous"<<endl;
	cin >> g1;
	cin >> g2;
	cin >> g3;
	Student obj2(g1,g2,g3);
	
	cout << "dose touw bathmous"<<endl;
	cin >> g1;
	cin >> g2;
	cin >> g3;
	Student obj3(g1,g2,g3);
	
	re = obj1.pass();
	check(re);
	
	re = obj2.pass();
	check(re);
	
	re = obj3.pass();
	check(re);
	
	re = obj1.mo();
	cout << re << endl;
	
	re = obj2.mo();
	cout << re << endl;
	
	re = obj3.mo();
	cout << re << endl;
	
	return 0;
}
