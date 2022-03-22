#include <iostream>
#include <cstdlib>
#include "MyRandom.h"
#include "Q_add.h"

using namespace std;


int main()
{
	int count=0,re,ans;
	
	while(count < 3)
	{
		Q_add obj;
		obj.print_quest();
		re = obj.get_correct();
		cin >> ans;
		if(ans == re)
		{
			count++;
			cout << "you are right" << endl;
		}
		else
		{
			cout << "you are wrong the right answer is = " << re <<endl; 
		}	
	}
	
	
	return 0;
}
