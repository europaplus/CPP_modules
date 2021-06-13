// #include "io.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

bool		playAgain()
{
	char	choise;

	do
	{
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> choise;
		if (choise == 'y')
			return (1);
	} while (choise != 'y' && choise != 'n');
	return (choise == 'y');
}

bool		playGame(bool randomNumber)
{
	for (int i = 1; i <= 7; i++)
	{
		int		number;
		std::cout << "Guess #" << i << ": ";
		std::cin >> number;
		if (randomNumber < number)
			std::cout << "Your guess is too high." << std::endl;
		else if (randomNumber > number)
			std::cout << "Your guess is too low." << std::endl;
		else
		{
			std::cout << "Correct! You win!" << std::endl;
			return (playAgain());
		}
		if (i == 7)
		{
			std::cout << "Sorry, you lose. The correct number was " << randomNumber << std::endl;
			return (playAgain());
		}
	}
	return (0);
}

int			main()
{
	bool	status;

	srand(static_cast<unsigned int>(time(0)));
	rand();
	status = 1;
	while (status)
	{
		int		randomNumber = (rand() % 100 + 1);
		std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is."\
		<< std::endl;
		status = playGame(randomNumber);
	}
	std::cout << "Thank ou for playing." << std::endl;
	return (0);
}
