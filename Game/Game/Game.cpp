#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void play_game()
{
	int random = rand() % 70;
	cout << random << endl;
	cout << "guess next number" << endl;
	while (true)
	{
		int guess;
		cin >> guess;

		if (guess == random)
		{
			cout << "u got it !" << endl;
			break;
		}
		else if (guess > random)
		{
			cout << " too high" << endl;
		}
		else
		{
		cout << " too low" << endl;
		}

	}
}
int main()
{
	srand(time(NULL));
	int choice;
	do
	{
		cout << "0: Quit " << endl << "1:Play game" << endl;
		cin >> choice;

			switch (choice)
			{
			case 0:
				cout << "good bye";
					break;
			case 1:
				play_game();
					break;
			}
	} while (choice != 0);


}
