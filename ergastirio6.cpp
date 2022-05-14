#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
	protected:
		string owner;
		string number;
		int year;
	public:
		Vehicle(string o,string n,int y)
		{
			owner = o;
			number = n;
			year = y;
		}
		void set_owner(string o)
		{
			owner = o;
		}
		void show()
		{
			cout << "owner : " << owner << " number is : " << number << " year is " << year; 
		}
};


class Mcycle : public Vehicle
{
	private:
		int sidecar;
	public:	
		Mcycle(string o,string n,int y,int s) : Vehicle(o,n,y)
		{
			owner = o;
			number = n;
			year = y;
			sidecar = s;
		}
		void show()
		{
			Vehicle::show();
			cout << " sidecar is " << sidecar << endl;	
		}			
};

class Car : public Vehicle
{
	private:
		int gates;
	public:
		Car(string o,string n,int y,int g) : Vehicle(o,n,y)
		{
			gates = g;
		}
		void show()
		{
			Vehicle :: show();
			cout << " gates are: " << gates << endl;
		}
};

class truck : public Vehicle
{
	private:
		int axe;
	public:
		truck(string o,string n,int y,int a) : Vehicle(o,n,y)
		{
			axe = a; 
		}
		void show()
		{
			Vehicle :: show();
			cout << " axes are " << axe << endl;
		}
};

int main() {
	
	
	Mcycle obj1("vaggelis","ERN25745",2006,1);
	Car obj2("Kteno","ERN56184",2004,4);
	truck obj3("Stauros","ERN65984",2001,6);
	
	obj1.show();
	obj2.show();
	obj3.show();
	
	obj1.set_owner("nikos");
	obj1.show();
	
	obj2.set_owner("manos");
	obj2.show();
	
	return 0;
}
