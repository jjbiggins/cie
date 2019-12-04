//
// Created by Hans Johnson on 1/24/17.
//

/* struct Card is a data type to model a playing card */
class Card {
public:
  int value;       /* value of the card */
  char suit;       /* card suit */
  char face;       /* 2-9,T,J,Q,K,A */
};


 int main( int argc, char *argv[] )
{
    Card AceOfHearts;
    Card queenOfClubs;
    Card TenOfHearts = {10, 'H', 'T'}; /* A + initializer list */
    Card ThreeOfSpades = {3, 'S', '3'};   /* B + initializer list */
}