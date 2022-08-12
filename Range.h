#ifndef _RANGE_H
#define _RANGE_H

#include<string>
#include<vector>
#include<cstddef>
#include "Card.h"


	/**
	 cardValue, which can be passed a Card as input and returns the card’s value as
	an int;
	*/

	int cardValue(Card);

	/**
	dealCard, which accepts an std::vector<Card> representing the deck of undealt
	cards, chooses a card at random and removes it from the deck, and returns that
	selected Card;

	*/

	Card dealCard(std::vector<Card>&deck);

	/**
	showHand, which accepts an std::vector<Card> representing the player’s hand
	and an int for the total value of cards in their hand, and which displays their hand
	value and cards in hand to the console;

	*/

	void showHand(const std::vector<Card>&v, int &totalCards);

	/**
	exceeds, which accepts two arguments, an int representing the max possible hand
	value allowed and an int representing the user’s hand value, returning true only if
	the user’s hand value has exceeded the maximum possible hand value allowed;

	*/

	bool exceeds(int maxHand, int handValue);

	/**
	inRange, which accepts three arguments, an int representing the target lower
	bound for a hand value; an int representing the maximum possible hand value
	allowed; and an int representing the user’s hand value, returning true only if the
	user’s hand value is within the target range.

	*/

	bool inRange(int lowerBound, int maxHand, int handValue);


#endif
