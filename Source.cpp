#include <iostream>
#include <string>
#include <cstdlib>

using namespace std; 

//functions
int package();
void Story();

//there will be a cout ---- for easy visuals on output
int main()
{
	//variables
	string userName;
	//if you have a reference, you have something to reference
	int space = 15;
	//a reference will never be different from what its referencing to
	int& r_atmosphere = space;

	//functions
	package();
	//story is further down
	//Story();


	//Beginning
	cout << "\n\t*** NIGHTMARE HAS FOUND YOU ***";
	cout << "\n\t Whats your name? ";
	cin >> userName;
	cout << "\n" << userName << ": (Retrieve the packages) \n";
	cout << "----------------------------------------------------------------------";
	system("Pause");

	cout << "\n\n\t\t(voices fade in)";
	cout << "\n" << userName << ": I need to find that bag. \n";
	//distance is 15ft
	cout << "\n***NIGHTMARES DISTANCE FROM YOU: " << space << " METERS AWAY***" << endl;
	cout << "\nNIGHTMARE: i know you can feel our presence ";
	cout << "\nNIGHTMARE: tell us where the package is child ";
	cout << "\n\n" << userName << ": I wouldnt tell you even if I knew. \n";
	cout << "\nNIGHTMARE: either bring us the package or suffer your fate ";
	cout << "\n\t\t(voices fade out) \n\n";
	cout << "----------------------------------------------------------------------";
	system("Pause");
	
	//first lines
	//my space from the package says:
	cout << "\n *** The package is: " << space << " ft away *** \n" << endl;

	//changing reference
	r_atmosphere = 25;
	cout << "\n***NIGHTMARES DISTANCE FROM YOU: " << r_atmosphere << " METERS AWAY***" << endl;

	//call user inputed name
	cout << "\n" << userName << ": I need to find that bag. ";
	cout << "\n I know I put it in one of my two crates";
	cout << "\n but where....\n\n";
	cout << "----------------------------------------------------------------------";
	system("Pause");

	//package distance
	cout << "\n***NIGHTMARES DISTANCE FROM YOU: " << r_atmosphere << " METERS AWAY***" << endl;
	
	//story function
	Story();

	//second lines
	cout << "\n *** The package is: " << r_atmosphere << " ft away *** " << endl;

	//reference addresses
	int* p_location = &space;
	*p_location = 100;

	//find crates
	cout << "\n" << userName << ": Wait theres TWO packages???";
	cout << "\n" << userName << ": Well, guess here goes the first one...";

	//reference address
	cout << "\n Number on package: " << &space << " " << endl;
	cout << "\n" << userName << ": Well, guess here goes number two...";

	//reference address II
	cout << "\n Number on package: " << &p_location << " " << endl;
	cout << "\n" << userName << ": Wait a second there is nothing in these boxes...";
	
	//get caught
	cout << "\n\nNIGHTMARE: oh no child, THERE WAS DEFINITLY SOME ";
	cout << "\nTHINGS IN THOSE BOXES ";
	cout << "\nAND NOW YOU WILL SUFFER YOUR FATE ";
	cout << "----------------------------------------------------------------------";
	system("Pause");

	//end
	cout << "\n *** The package is: " << *p_location << " ft away *** " << endl;
	cout << "\n\n\t\t ***** NIGHTMARE HAS YOU *****";
	cout << "\n\t\t(voices fade out)\n\n";
	return 0;
}

int package()
{
	//title
	cout << "\n :Question : Location : Answer: ";
	cout << "\n\t** Recover the package at all cost **";
	cout << "\n\t** Dont let anyone get the package **\n";
	system("Pause");
	return 0;
}

void Story()
{
	cout << "\n We have lived on Planet Earth, though it may not look like it... ";
	cout << "\n In the past, there was so much life, but then ";
	cout << "\n Humans began to spread, eating, fighting, and ";
	cout << "\n destroyed what was left. The ground ";
	cout << "\n is no longer green but instead its tan from dehydration ";
	cout << "\n Soon enough this planet shall fall...";
	cout << "\n But for now we remain locked away. \n\n";
	cout << "----------------------------------------------------------------------";
	system("Pause");
}

