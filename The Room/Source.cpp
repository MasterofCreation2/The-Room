#include<iostream>
#include<string>


using namespace std;

string getusername();
string getuserinput();
int playerage();




int main()
{
	string userName = getusername();
	int age = playerage();
	char again;
	
do{	
	cout << "\n\n***Welcome to the room***\n\n" << userName << " woke up in a room that is empty and surrounded with concrete.\n";

	cout << "\nYour first thought was where you were, Scared and confused you finally calmed down.";
	cout << "\nYou take a look around to see a few things in the room with you.";
	cout << "\nWhat was in view was a table, a knife and a bed from which you woke up from.\n";

	cout << "\nType Knife to get the knife.";
	cout << "\nType Table to go to the table.";
	cout << "\nType Bed to go to the bed.\n";

	string userInput = getuserinput();
	getline(cin, userInput);

	if (userInput == "knife" || userInput == "Knife")
	{
		cout << "\nYou have decided to pick up the and slice your wrist with it for no reason.";
		cout << "\nYou yourself don't know why you did something like that as your blood slowly leaves your body there was a door there this whole time.";
		cout << "\nYou just didn't see it, better luck next time.";
		cout << "\nJust kidding You woke up right after that, got you good there didn't I.\n";
	}
	
	else if (userInput == "table" || userInput == "Table")
	{
		cout << "\nYou decided to go to the table.";
		cout << "\nYou turned it upside down to find that there is a hole within the table right under it.";
		cout << "\nYou went through it, to find yourself in another world. It was absolutely beautiful.";
		cout << "\nYou never woke up after that. No one knows what happened, you just slept and never woke up again.\n";
	}

	else if (userInput == "bed" || userInput == "Bed")
	{
		cout << "\nYou decide to go to bed.";
		cout << "\nYou had a feeling that it was all a bad dream.";
		cout << "\nWhen you woke up, it was in fact all a dream.";
		cout << "\nA sigh of relief left your body. You said, Thank god it was just a dream.\n";
	}

	else
	{
		cout << "Oh no you typed in the wrong thing";
	}
	
	
		cout << "\n\nDo you want to play again (Y/N)\n\n";
		cin >> again;
	} while (again == 'Y' || again == 'y');
	system("pause");
	
	return 0;

}

string getusername()
{
	string userName;
	cout << "What is your name: ";
	getline(cin, userName);

	return userName;
}

int playerage()
{
	int age = 0;
	cout << "\nHow old are you: ";
	cin >> age;
	
	return age;
}

string getuserinput()
{
	string userInput;
	cout << "What do you want to do: \n";
	getline(cin, userInput);

	return userInput;
}