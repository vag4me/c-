#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
	bool choice;
	int day,month,money;
	string line;
	string delimiter = ","; // gia na gnorizei se poio character na kanei split 
	size_t pos = 0;
	string token;
	stringstream ss; 
	int numb,total = 0,count_days = 0;
	
	ofstream file("elements.txt",ios::app);
	
	if(!file)
	{
		cout << "Error" << endl;
	}
	
	while(1)
	{
		cout << "press 0 to see the earnings" << endl;
		cout << "press 1 to give a new date" << endl;
		cin >> choice;
		if(choice == 0)
		{
			break;
		}
		else 
		{
			cout << "give the day " << endl;
			cin >> day;
			cout << "give the month " << endl;
			cin >> month;	
			cout << "give the money" << endl;
			cin >> money;
			file << day << "/" << month << "/2022  " << money << "$" << endl;		
		}	
    }
    
	file.close();
	
	ifstream file2("elements.txt");
	
	
	if(!file2)
	{
		cout << "error";
	}
	
	while(getline (file2, line))
	{
		count_days++;
		cout << line << endl;
		pos = line.find(delimiter);
		token = line.substr(pos+1, '/0');  
		stringstream saver(token);
		saver >> numb;
		total += numb;
	}
	
	cout << "in " << count_days <<" days you earn " << total << " euros";

	
	
	return 0;
}
