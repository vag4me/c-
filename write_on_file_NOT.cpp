#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string line;
	
	ofstream file("text1.txt");
	
	cout << "give the words you want to write on the file"<<endl;
	cin >> line;
	file << line;
	
	file.close();
	
	return 0;
}
