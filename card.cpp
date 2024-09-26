#include <sstream>
#include "card.h"

// Default constructor for Card
Card::Card() {
}

// Constructor for Card that sets value and suit
Card::Card(int value, CardSuit suit) {
    this->value = value;
    this->suit = suit;
}

// Destructor for Card
Card::~Card() {
}

// Getter for suit
CardSuit Card::getSuit() {
    return suit;
}

// Checks if the card has the given suit
bool Card::hasSuit(CardSuit suit) {
    return this->suit == suit;
}

// Getter for value
int Card::getValue() {
    return value;
}

// Sets the value of the Phoenix card
void Card::setValue(int value) {
    if (suit == PHOENIX)
        this->value = value;
}

// Returns a string representation of the card
string Card::toString() {
    string suitStringArray[] = {"JADE", "SWORD", "PAGODA", "STAR", "MAHJONG", "DRAGON", "PHOENIX", "DOG"};
    string suitString = suitStringArray[suit];
    string valueString;
    switch (value) {
        case 11: valueString = "J"; break;
        case 12: valueString = "Q"; break;
        case 13: valueString = "K"; break;
        case 14: valueString = "A"; break;
        default: stringstream ss; ss << value; valueString = ss.str();
    }
    return valueString + ":" + suitString;
}

// Compares two cards for equality
bool Card::equals(Card* otherCard) {
    return value == otherCard->value && suit == otherCard->suit;
}

// SimpleCard constructor
SimpleCard::SimpleCard(int value, CardSuit suit) : Card(value, suit) {
    // Initialization done via Card's constructor
}

// Returns the points of the SimpleCard
int SimpleCard::getPoints() {
    if (value == 5) return 5;
    if (value == 10 || value == 13) return 10; // Tens and Kings have 10 points
    return 0;
}

// SimpleCard can participate in combinations
bool SimpleCard::canBeInCombination() {
    return true;
}

// SimpleCard can be part of a bomb (four of a kind)
bool SimpleCard::canBeInBomb() {
    return true;
}

// SpecialCard constructor
SpecialCard::SpecialCard(CardSuit suit) : Card(-1, suit) {
    switch (suit) {
        case MAHJONG:
            value = 1;
            break;
        case DRAGON:
            value = 15;
            break;
        case PHOENIX:
            value = -1;
            break;
        case DOG:
            value = -1;
            break;
        default:
            break;
    }
}

// Returns the points of the SpecialCard
int SpecialCard::getPoints() {
    if (suit == DRAGON) return 25;
    if (suit == PHOENIX) return -25;
    return 0;
}

// Checks if SpecialCard can participate in combinations
bool SpecialCard::canBeInCombination() {
    return suit != DOG; // Dog cannot be in a combination
}

// SpecialCard cannot be part of a bomb
bool SpecialCard::canBeInBomb() {
    return false;
}
