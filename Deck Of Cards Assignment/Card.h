#include <iostream>
using namespace std;
#ifndef CARD_H
#define CARD_H

class Card {
private:
int face;
int suit;
char card;
public:
Card();
Card(int face, int suit);
Card(const Card& other);
int getFace();
int getSuit();
string getCardImage();
//friend ostream& operator << (istream& output, Card& c);
//void operator=(const Card& c);
};
#endif