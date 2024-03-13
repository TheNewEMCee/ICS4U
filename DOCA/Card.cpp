#include <iostream>
#include "Card.h"
#include <sstream>
using namespace std;

int main() {
    return 0;
}
Card::Card() {
  this->face = 1;
  this->suit = 1;
}
Card::Card(int face, int suit) {
  this->face = face;
  this->suit = suit;
}


void Card::operator=(const Card& c) { 
    this->face = c.face; 
    this->suit = c.suit;
}

string Card::getCardImage() {
  string cards[4][13];
  string acesCards[13] = {"🂡", "🂢", "🂣", "🂤", "🂥", "🂦", "🂧", "🂨", "🂩", "🂪", "🂫", "🂭", "🂮"};
  string diamondsCards[13] = {"🃁", "🃂", "🃃", "🃄", "🃅", "🃆", "🃇", "🃈", "🃉", "🃊", "🃋", "🃍", "🃎"};
  string clubsCards[13] = {"🃑", "🃒", "🃓", "🃔", "🃕", "🃖", "🃗", "🃘", "🃙", "🃚", "🃛", "🃝", "🃞"};
  string heartsCards[13] = {"🂱", "🂲", "🂳", "🂴", "🂵", "🂶", "🂷", "🂸", "🂹", "🂺", "🂻", "🂽", "🂾"};
  for (int i = 0; i < 13; i++) {
    cards[0][i] = acesCards[i];
  }
  for (int i = 0; i < 13; i++) {
    cards[1][i] = diamondsCards[i];
  }
  for (int i = 0; i < 13; i++) {
    cards[2][i] = clubsCards[i];
  }
  for (int i = 0; i < 13; i++) {
    cards[3][i] = heartsCards[i];
  }
  stringstream st;
  if (this->suit % 2 == 0) {
    st << "\033[38;5;9m";
  } else {
    st << "\033[38;5;0m";
  }
  st << cards[this->suit - 1][this->face - 1];
  st << "\033[0m";
  return st.str();
}

int Card::getFace() {
  return this->face;
}
int Card::getSuit() {
  return this->suit;
}
/*
istream& operator >> (istream& input, Card& c) {
}
*/
ostream& operator << (ostream& output, Card& c) {
  output << c.getFace() << "of" << c.getSuit() << endl;
  return output;
}
static string faces[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
static string suits[4] = {"Spades", "Diamonds", "Clubs", "Hearts"};
