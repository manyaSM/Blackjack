#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <string>
using namespace std;

int number;

class Card
{
	//Access specifier
public:

	//Data Members

	enum values //Gives card types values
	{
		Ace = 1,
		Two = 2,
		Three = 3,
		Four = 4,
		Five = 5,
		Six = 6,
		Seven = 7,
		Eight = 8,
		Nine = 9,
		Ten = 10,
		Jack = 11,
		Queen = 12,
		King = 13
	};
	enum values number;
	enum suits //Defines all 4 suits
	{
		Hearts,
		Spades,
		Clubs,
		Diamonds
	};
	enum suits suit;
};


int housePlay(int number) //function defining the house's move in blackjack
{
	for (size_t i = 0)
	{
		srand(time(0));
		int random_integer;
		random_integer = (rand() % 21) + 2; //selects a random number between 2 and 21
		cout << random_integer << endl;
	}
}


int randomPick(int number) //function defining drawing a card
{
	for (size_t i = 0)
	{
		srand(time(0));
		int random_integer;
		random_integer = (rand() % 13) + 1; //selects random number between 1 and 13
		cout << random_integer << endl;
	}
}


void drawCard(int number, enum values) //void function used for drawing the cards within blackjack
{
	cin >> number;
	cout << number << endl;
}


int main()
{

}