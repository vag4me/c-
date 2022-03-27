#include <iostream>
#include <string>
using namespace std;

class Student
{
	private:
		int id;
		string name;
	public:
		void get_data()
		{
			cout << "ender id ";
			cin >> id;
			
			cout << "ender name ";
			cin.ignore();
			cin >> name;
				
		};
		
		void put_data()
		{
			cout << id << " "<<name<<endl;
		};
};

int main() {
	Student obj[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		obj[i].get_data();
	}
	
	for(i=0;i<=5;i++)
	{
		obj[i].put_data();
	}
	
	return 0;
}
