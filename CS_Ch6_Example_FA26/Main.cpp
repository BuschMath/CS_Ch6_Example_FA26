#include <iostream>

using namespace std;

void playGame();
void playMulti();
void optionsMenu();
void creditsScreen();

int main()
{
	bool runAgain = true;
	int input = 0;

	while (runAgain)
	{
		cout << "Welcome to the menu. Please select from the following options:" << endl;
		cout << "Choose 1 for play game.\nChoose 2 for Multiplayer.\nChoose 3 for Options.\nChoose 4 for Credits.\n";
		cout << "Choose 5 to exit.\nEnter your choice and push enter: ";

		cin >> input;

		if (input == 1)
			playGame();
		else if (input == 2)
			playMulti();
		else if (input == 3)
			optionsMenu();
		else if (input == 4)
			creditsScreen();
		else if (input == 5)
			runAgain = false;
		else
			cout << "Invalid entry, try again.\n";
	}

	return 0;
}

void playGame()
{
	cout << "Playing game." << endl;
}

void playMulti()
{
	cout << "Playing multiplayer." << endl;
}

void optionsMenu()
{
	cout << "Options menu.\n";
}

void creditsScreen()
{
	cout << "Credits.\n";
}