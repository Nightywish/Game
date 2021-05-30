#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
void print_array(int array[], int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << array[i]<<" ";
	}

}
void play_game()
{
	int guesses[250];
	int guess_count = 0;
	int random = rand() % 70;
	cout << random << endl;
	cout << "guess next number" << endl;
	while (true)
	{
		int guess;
		cin >> guess;
		guesses[guess_count++] = guess;
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
	print_array(guesses, guess_count);
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
