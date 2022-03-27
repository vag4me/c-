#include <iostream>
#include <fstream>

using namespace std;

int main() {
	fstream file;
	string line;
	
	file.open("text1.txt");
	if(!file)
	{
		cout<<"file not created"<<endl;
	}
	
	cout << "give the sentence tou want" << endl;
	cin >> line;
	file << line;
	
	
	file.seekg(0,ios::beg);
	while(getline(file,line))
	{
		cout << line << endl;
	}
	
	file.close();
	
	return 0;
}
