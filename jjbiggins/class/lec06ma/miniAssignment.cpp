#include <iostream>
#include <string>
#include "miniAssignment.h"
#include "ComplexNumber.h"

using namespace std;

void miniAssignment_part1() {
   string movie1, movie2;
   movie1 = "I see ADJ people.";
   movie2 = "I've got a feeling we're not in PLACE anymore.";

    //TODO: declare two string objects adjective and place
    // and initialize them to the empty string
   string adjective;
   string place;

    //TODO: ask the user to input an adjective (only one
    // word) and a place (can contain spaces)
   cout << "Please input an adjective (only one word): ";
   cin >> adjective;

   cout << "Please input a place (can contain spaces): ";
   cin >> place;

    //TODO: replace "ADJ" in movie1 for adjective
   movie1.replace(movie1.find("ADJ"), 3, adjective);

    //TODO: replace "PLACE" in movie2 for place
   movie2.replace(movie2.find("PLACE"), 5, place);

    //TODO: display the updated movie phrases to the user
   cout << movie1 << endl;
   cout << movie2 << endl;
}

void miniAssignment_part2(){
	//TODO: create a ComplexNumber object named c1 representing 2 + j7
   ComplexNumber c1;
   c1.setRealPart(2);
   c1.setImagPart(7);

	//TODO: print "all forms" of this complex number
   c1.printInAllForms();

	//TODO: create a ComplexNumber object named c2 representing 5 + j8
	ComplexNumber c2;
   c2.setRealPart(5);
   c2.setImagPart(8);
   c2.printInAllForms();

	//TODO: modify c2 so that it equals c2+c1
   c2.addComplexNumber(c1);

	//TODO: print "all forms" of the new version of c2
   c2.printInAllForms();
}

