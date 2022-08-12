#include "Card.h"
#include "Range.h"
#include<iostream>
#include<iomanip> //Include iomanip library to allow use of set precision
#include<cmath> //Include cmath library to allow use of absolute value function
#include<string> //Include string library to allow use of string and string functions

using namespace std;
int main()
{
	cout << "Cards 2-10 are worth their numeric value.\n" << "J, Q, K have a value of 11.\n" <<
		"An A has a value of 12 as a spade and 1 for other suits.\n" <<
		"Over 3 rounds, you will try to reach or exceed a target value, without going over 22!\n" <<
		"If you go over, you get -1 points; if you are within range, you get +1 points; otherwise" <<
		" you get 0 points." << "\n" << endl;

	srand(time(nullptr));

	vector <string> suit{ "Spades", "Hearts", "Diamonds", "Clubs" };
	vector <string> face{ "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	vector <Card> deck;
	for (int i = 0; i < suit.size(); i++)
	{
		for (int k = 0; k < face.size(); k++)
		{
			Card newCard(suit[i], face[k]);
			deck.push_back(newCard);
		}
	}


	
	vector<Card> hand;
	char yesOrNo;
	vector<int> rangeHand{ 17, 18, 19, 20, 21, 22 };
	size_t handSize = rand() % rangeHand.size();
	int lowerBound = rangeHand[handSize];
	do
	{
		int valueRandom = 0;
		Card randomCard = dealCard(deck);
		string s = randomCard.card_as_string();
		cout << "Target Lower bound: " << lowerBound << "\n";
		hand.push_back(randomCard);
		showHand(hand, valueRandom);
		cout << "Deal more? y/n: ";
		cin >> yesOrNo;
	}
	while (yesOrNo == 'y'); //While loop for the 'y' condition
	{
		int maxHand = 22;
		int lowerHand = 17;
		//if (exceeds(maxHand, valueRandom))
		//{
			//int negPoint = -1;
			//cout << "You got " << negPoint << " points";
		//}
		//if (inRange(lowerHand, lowerBound, maxHand))
		//{
			//int zeroPoint = 0;
			//cout << "You got " << zeroPoint << " points";
		//}
		//else if (lowerBound = valueRandom)
		//{
			//int pointPoint = 1;
			//cout << "You got " << pointPoint << " points";
		//}
		
	}
	return 0;
}