#include<string>
#include<iostream>
#include<stdexcept>
#include<sstream>
#include <stdlib.h>
#include "Range.h"
#include "Card.h"


int cardValue(Card card)
{	
	std::string input1 = card.card_as_string();
	std::string brackets = "[";
	std::string spades = "]";
	std::size_t pos = 0;
	pos = input1.find(brackets);
	std::size_t pos1 = 0;
	pos1 = input1.find(spades);
	int points = 0;
	if (input1.substr(0, pos) == "2")
	{
		int points = 2;
		return points;
	}
	else if (input1.substr(0, pos) == "3")
	{
		int points = 3;
		return points;
	}
	else if (input1.substr(0, pos) == "4")
	{
		int points = 4;
		return points;
	}
	else if (input1.substr(0, pos) == "5")
	{
		int points = 5;
		return points;
	}
	else if (input1.substr(0, pos) == "6")
	{
		int points = 6;
		return points;
	}
	else if (input1.substr(0, pos) == "7")
	{
		int points = 7;
		return points;
	}
	else if (input1.substr(0, pos) == "8")
	{
		int points = 8;
		return points;
	}
	else if (input1.substr(0, pos) == "9")
	{
		int points = 9;
		return points;
	}
	else if (input1.substr(0, pos) == "10")
	{
		int points = 10;
		return points;
	}
	else if (input1.substr(0, pos) == "J")
	{
		int points = 11;
		return points;
	}
	else if (input1.substr(0, pos) == "Q")
	{
		int points = 11;
		return points;
	}
	else if (input1.substr(0, pos) == "K")
	{
		int points = 11;
		return points;
	}
	else if (input1.substr(0, pos) == "A" && input1.substr(0, pos1) == "A[Spades")
	{
		int points = 12;
		return points;
	}
	else
	{
		int points = 1;
		return points;
	}
		
}


Card dealCard(std::vector<Card>& deck)
{
	
	std::size_t index = rand() % deck.size();
	Card newCard = deck[index];
	deck[index] = deck[deck.size() - 1];
	deck.pop_back();
	return newCard;
}

void showHand(const std::vector<Card> &v, int &totalCards)
{
	for (Card val : v)
	{
		totalCards += cardValue(val);
	}
	std::cout << "Hand value is: " << totalCards << "\n";
	std::cout << "Hand is: ";
	for (Card val : v)
	{
		std::cout << val.card_as_string() << " ";
	}
	std::cout << "\n";
}

bool exceeds(int maxHand, int &handValue)
{
	return (handValue > maxHand);
}

bool inRange(int lowerBound, int maxHand, int handValue)
{
	return (lowerBound < handValue < maxHand);
}
