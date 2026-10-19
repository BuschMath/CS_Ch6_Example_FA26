#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("InputEOFExample.dat");

	if (!inFile)
	{
		cout << "Can't find file!" << endl;

		return 1;
	}

	char data;
	inFile >> data; // Priming read

	while (inFile)
	{
		cout << data << endl; // Loop actions
		inFile >> data;	// Read at end of loop
	}

	inFile.close();

	return 0;
}