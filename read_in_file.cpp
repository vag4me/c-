#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string line;
	
	ifstream file("text1.txt");
	
	while(getline(file,line))
	{
		cout << line << endl;
	}
	
	return 0;
}
