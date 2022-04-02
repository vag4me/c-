#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;

class Elements
{
	private:
   		int a_num;
 		string name;
 		string symbol;
 		int a_mass;
    public:
    	
 		void get_data(int an,string n ,string s,int am)
 		{
 			a_num = an;
 			name = n;
 			symbol = s;
 			a_mass = am;
		};
		void show_data()
		{
			cout << "number: " << a_num << endl;
			cout << "name: " << name << endl;
			cout << "symbol: " << symbol << endl;
			cout << "a_mass: " << a_mass << endl;
			cout << endl;
		}
};


int main()
{
	string line;
	string delimiter = ",";
	string token;
	fstream file;
	size_t pos = 0;
	int count = 0;
	int count2 = 0;
	int numb = 0;
	int numb2 = 0;
	int count3 = 0;
	int i = 0;
	int ar[119];
	stringstream saver;
	string temp;
	string temp1;
	
	file.open("text1.txt");
	if(!file)
	{
		cout << "error"<<endl;
	}
	
	while(getline(file,line))
	{
		while (count <= 3) {
			pos = line.find(delimiter);
    		token = line.substr(0, pos);
    		if(count == 3)
    		{
    			stringstream saver(token);
    			saver >> numb;
    			if(numb >= 30 && numb <= 120)
    			{
    				ar[i] = 1;
    				count3++;
				}
				else
				{
					ar[i] = 0;
				}
			}
    		line.erase(0, pos + delimiter.length());
    		count++;
		}
		count = 0;
		i++;
	}
	
	file.clear();
	file.seekg(0, ios::beg);
	
	
	Elements obj[36];
		
	count3 = 0;
	i = 0;
	count = 0;
	while(getline(file,line))
	{
		if(ar[i] == 1)
		{
			while(count <= 3)
			{
				pos = line.find(delimiter);
    			token = line.substr(0, pos);
    			if(count == 0)
    			{
    				stringstream geek(token);
					geek >> numb; 
					line.erase(0, pos + delimiter.length()); 
    			}
    			if(count == 1)
    			{
    				temp = token;
    				line.erase(0, pos + delimiter.length());
				}
				if(count == 2)
				{
					temp1 = token;
					line.erase(0, pos + delimiter.length());
				}
				if(count == 3)
				{
					stringstream geek2(token);
					geek2 >> numb2;
					line.erase(0, pos + delimiter.length());
				}
				count++;
    	    }
    	   	obj[count3].get_data(numb,temp,temp1,numb2);
    	   	count3++;
    	    count = 0;
		}
		i++;	
	}
	
	for(i = 1; i < 36; i++ )
	{
		obj[i].show_data();
	}

	
}
