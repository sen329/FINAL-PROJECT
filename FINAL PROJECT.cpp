#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

void StartStory();
void StorySection1();
void StorySection2();
void BlueDoor();
void YellowDoor();
void GreenDoor();
void SecretDoor();
void riddlesection();

int main(){
	int option;//menu
	do
	{
		cout << "1. Start"<<endl;//gamestart
		cout << "2. Credits"<<endl;
		cout << "3. Exit"<<endl;
		
		cout << "Choose an option: ";
		cin >> option;
		
		if (option == 1){
			system("CLS");
			cout << "Welcome to the game"<<endl;
			system("pause");
			system("CLS");
			cout << "All you need to do is choose"<<endl;
			system("pause");
			system("CLS");
			cout << "But remember..."<<endl;
			system("pause");
			system("CLS");
			cout << "Your choices can lead you to your doom"<<endl;
			system("pause");
			system("CLS");
			cout << "So choose carefully" << endl;
			system("pause");
			system("CLS");
			cout << "Enjoy the ride"<<endl;
			system("pause");
			system("CLS");
			cout << "-----------------------------------"<<endl;
			system("pause");
			StartStory();
		}
		else if (option == 2){
			system("CLS");
			cout << "Created by Hanssen"<<endl;
			cout << "Story by Hanssen"<<endl;
			system("pause");
			system("CLS");
		}
		else if (option == 3){
			cout << "Exiting"<<endl;
		}
		else {
			cout << "Please choose a valid option" <<endl;
		
		}
	}
	while(option !=0);
	
}

void StartStory()
{
	int choice;
	
	cout << "You wake up in a dimly-lit room."<<endl;
	system ("pause");
	system ("CLS");
	cout << "You looked around, wondering how you got here."<<endl;
	system ("pause");
	system ("CLS");
	cout << "You remembered that you came home from work"<<endl;
	cout << "and fallen asleep on your bed."<<endl;
	system ("pause");
	system ("CLS");
	StorySection1();
}
void StorySection1()
{
	int option1;
	cout << "You see a door infront of you"<<endl;
	system ("pause");
	system ("cls");
	cout << "you started to walk towards the door"<<endl;
	system("pause");
	system("CLS");
	cout << "What will you do?"<<endl;
	do 
	{
		cout << "1. Open the door"<<endl;
		cout << "2. Peek through the keyhole"<<endl;
		cout << "3. Don't open the door"<<endl;
		cin >> option1;
		
		if(option1 == 1){
			system("CLS");
			cout << "You opened the door"<<endl;
			system("pause");
			system("CLS");
			StorySection2();
		}
		else if (option1 == 2){
			system("CLS");
			cout << "The area seemed safe"<<endl;
			system("pause");
			system("CLS");
		}
		else if (option1 == 3){
			system("CLS");
			cout << "You decided to not opened the door"<<endl;
			system("pause");
			system("CLS");
			cout << "You looked around the room again"<<endl;
			system("pause");
			system("CLS");
			cout << "There's nothing here anymore"<<endl;
			system("pause");
			system("CLS");
			cout << "You approached the door again"<<endl;
		}
		else {
			cout << "It is better to peek first before you open"<<endl;
		}
	}
	while (option1 != 1);
}

void StorySection2(){
	int door;
	cout << "Beyond the door, there's a stairs going up "<<endl;
	system("pause");
	system("CLS");
	cout << "You climbed the stairs"<<endl;
	system("pause");
	system("CLS");
	cout << "You arrived at a hall with 2 doors" <<endl << "colored blue and Yellow";
	system("pause");
	system("CLS");
	cout << "You heard a voice from the room" << endl;
	system("pause");
	system("CLS");
	cout << "Voice:"<< endl <<"Welcome to my death game! "<<endl;
	cout << "You have been chosen as a player"<<endl;
	system("pause");
	system("CLS");
	cout << "Voice: "<<endl<<"All you need to do is to survive every trial that comes to you"<<endl;
	system("pause");
	system("CLS");
	cout << "Voice: "<<endl<<"For this first trial, choose one of these doors"<<endl;
	cout << "beyond them is different kinds of trials you will face"<<endl;
	system("pause");
	system("CLS");
	cout << "Voice: "<<endl<<"Choose your door: "<<endl;
	cout << "1. Blue door" << endl;
	cout << "2. Yellow door" << endl;
	cin >> door;
	switch(door)
	{
		case 1: BlueDoor();
			break;
		case 2: YellowDoor();
			break;
		case 0: SecretDoor();
			break;
		default: cout << "Voice: " <<endl << "Choose a door";
	}
}

void BlueDoor(){
	void riddlesection();
	system("CLS");
	cout << "Voice: " <<endl << "So you've chosen the blue door?"<<endl << "Interesting choice";
	system("pause");
	system("CLS");
	cout << "Voice: " << endl << "Proceed thorugh the door"<<endl;;
	system("pause");
	system("CLS");
	cout << "You entered the blue door"<<endl;
	system("pause");
	system("CLS");
	cout << "The door just shut behind you, and locking sound is heard"<<endl;
	system("pause");
	system("CLS");
	cout << "Suddenly, a tv turned on and a person with a gas mask is shown"<<endl;
	system("pause");
	system("CLS");
	cout << "Person: " << endl << "This part you will be shown with a series of riddles"<<endl;
	system("pause");
	system("CLS");
	cout << "Person: " << endl << "Answer them wrong, and you die"<<endl;
	system("pause");
	system("CLS");
	cout << "Person: " <<endl << "The riddle will be shown on screen" <<endl;
	system("pause");
	system("CLS"); 
	riddlesection();
}

void riddlesection(){
	void death1();
	void riddle2();
		char answer;
		cout << "You will always find me in the past." <<endl<< "I can be created in the present,"<<endl<< "But the future can never taint me. What am I?"<<endl;
		cout << "a. Time"<<endl;
		cout << "b. History"<<endl;
		cout << "c. Memories"<<endl;
		cout << "d. Artifact"<<endl;
		cout << "Answer: "<<endl;
		cin >> answer;
		
		switch (answer)
		{
			case 'a': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
			case 'b': cout << "Correct" <<endl;
				system("pause");
				system("cls");
				riddle2();
			case 'c': cout << "Incorrect"<<endl;
			system("pause");
				system("cls");
				death1();
			case 'd': cout << "Incorrect" <<endl;
			system("pause");
				system("cls");
				death1();
			default: cout << "Choose and answer"<<endl;
		}
}


void death1(){
	cout << "A gas filled the room"<<endl;
	system("pause");
	system("CLS");
	cout << "You inhaled the gas and"<<endl<<"choked to death";
	system("pause");
	system("CLS");
	cout << "You died"<<endl;
	system("pause");
	system("cls");
	main();
}

void riddle2(){
	void riddle3();
	char answer;
	cout << "What is harder to catch the faster you run?"<<endl;
	cout << "a. Your breath"<<endl;
	cout << "b. Speeding train"<<endl;
	cout << "c. Treadmill"<<endl;
	cout << "d. Fleeing animal"<<endl;
	cout << "Answer: "<<endl;
	cin >> answer;
	switch (answer)
		{
			case 'a': cout << "Correct" <<endl;
				system("pause");
				system("cls");
				riddle3();
				break;
			case 'b': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'c': cout << "Incorrect"<<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'd': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;	
			default: cout << "Choose an answer"<<endl;
		}
}

void riddle3(){
	void riddle4();
	char answer;
	cout << "Wednesday, Tom and Joe went to a restaurant and ate dinner."<<endl<<" When they were done they paid for the food and left. "<<endl;
	cout << "But Tom and Joe didn't pay for the food."<<endl<<"Who did?"<<endl;
	cout << "a. Some stranger"<<endl;
	cout << "b. The Cashier"<<endl;
	cout << "c. Wednesday"<<endl;
	cout << "d. You"<<endl;
	cout << "Answer: "<<endl;
	cin >> answer;
	switch (answer)
		{
			case 'a': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'b': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'c': cout << "Correct"<<endl;
				system("pause");
				system("cls");
				riddle4();
				break;
			case 'd': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;	
			default: cout << "Choose an answer"<<endl;
		}
}

void riddle4(){
	void riddle5();
	char answer;
	cout << "What can you catch but not throw?"<<endl;
	cout << "a. Heavy rock"<<endl;
	cout << "b. Your past"<<endl;
	cout << "c. Air"<<endl;
	cout << "d. Cold"<<endl;
	cout << "Answer: "<<endl;
	cin >> answer;
	switch (answer)
		{
			case 'a': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'b': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'c': cout << "Incorrect"<<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'd': cout << "Correct" <<endl;
				system("pause");
				system("cls");
				riddle5();
				break;	
			default: cout << "Choose an answer"<<endl;
		}
}

void riddle5(){
	void riddle6();
	char answer;
	cout << "I go in hard. I come out soft."<<endl<<" You blow me hard. What am I?"<<endl;
	cout << "a. Gum"<<endl;
	cout << "b. Ball"<<endl;
	cout << "c. Mold"<<endl;
	cout << "d. Food"<<endl;
	cout << "Answer: "<<endl;
	cin >> answer;
	switch (answer)
		{
			case 'a': cout << "Correct" <<endl;
				system("pause");
				system("cls");
				riddle6();
			case 'b': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
			case 'c': cout << "Incorrect"<<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'd': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1;
				break;	
			default: cout << "Choose an answer"<<endl;
		}
}

void riddle6(){
	void riddle7();
	char answer;
	cout << "The more you take, the more you leave behind. What am I?"<<endl;
	cout << "a. Bottle of water"<<endl;
	cout << "b. Sack of potatoes"<<endl;
	cout << "c. Footsteps"<<endl;
	cout << "d. Eating"<<endl;
	cout << "Answer: "<<endl;
	cin >> answer;
	switch (answer)
		{
			case 'a': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'b': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'c': cout << "Correct"<<endl;
				system("pause");
				system("cls");
				riddle7();
				break;
			case 'd': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1;
				break;	
			default: cout << "Choose an answer"<<endl;
		}
}

void riddle7(){
	void riddle8();
	char answer;
	cout << "Mr. Smith has 4 daughters. Each of his daughters has a brother."<<endl<<" How many children does Mr. Smith have?"<<endl;
	cout << "a. 4"<<endl;
	cout << "b. 7"<<endl;
	cout << "c. 8"<<endl;
	cout << "d. 5"<<endl;
	cout << "Answer: "<<endl;
	cin >> answer;
	switch (answer)
		{
			case 'a': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'b': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'c': cout << "Incorrect"<<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'd': cout << "Correct" <<endl;
				system("pause");
				system("cls");
				riddle8();
				break;	
			default: cout << "Choose an answer"<<endl;
		}
}
void riddle8(){
	void riddle9();
	char answer;
	cout << "I'm tall when I'm young, I'm short when I'm old. What am I?"<<endl;
	cout << "a. Old man/lady"<<endl;
	cout << "b. Pencil"<<endl;
	cout << "c. Building"<<endl;
	cout << "d. Tree"<<endl;
	cout << "Answer: "<<endl;
	cin >> answer;
	switch (answer)
		{
			case 'a': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'b': cout << "Correct" <<endl;
				system("pause");
				system("cls");
				riddle9();
				break;
			case 'c': cout << "Incorrect"<<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'd': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;	
			default: cout << "Choose and answer"<<endl;
		}
}

void riddle9(){
	void riddle10();
	char answer;
	cout << "A murderer is condemned to death. He has to choose between three rooms."<<endl<< "The first is full of raging fires,"<<endl; 
	cout << "the second is full of assassins with loaded guns,"<<endl<< "and the third is full of lions that haven't eaten in 3 years."<<endl<<"Which room is safest for him?"<<endl;
	cout << "a. No room is safe"<<endl;
	cout << "b. First room"<<endl;
	cout << "c. Second room"<<endl;
	cout << "d. Third room"<<endl;
	cout << "Answer: "<<endl;
	cin >> answer;
	switch (answer)
		{
			case 'a': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'b': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'c': cout << "Incorrect"<<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'd': cout << "Correct" <<endl;
				system("pause");
				system("cls");
				riddle10();
				break;	
			default: cout << "Choose an answer"<<endl;
		}
}

void riddle10(){
	void FINAL1();
	char answer;
	cout << "What is the answer of fourth riddle?"<<endl;
	cout << "a. Cold"<<endl;
	cout << "b. Gum"<<endl;
	cout << "c. Wednesday"<<endl;
	cout << "d. Footsteps"<<endl;
	cout << "Answer: "<<endl;
	cin >> answer;
	switch (answer)
		{
			case 'a': cout << "Correct" <<endl;
				system("pause");
				system("cls");
				FINAL1();
				break;
			case 'b': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'c': cout << "Incorrect"<<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'd': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1;
				break;	
			default: cout << "Choose an answer"<<endl;
		}
}

void YellowDoor(){
	void lucktest();
	system("CLS");
	cout << "Voice: " <<endl << "So you've chosen the yellow door?"<<endl << "Interesting choice";
	system("pause");
	system("CLS");
	cout << "Voice: " << endl << "Proceed thorugh the door"<<endl;;
	system("pause");
	system("CLS");
	cout << "You entered the yellow door"<<endl;
	system("pause");
	system("CLS");
	cout << "The room has 4 dours numbered from left to right"<<endl;
	system("pause");
	system("cls");
	cout << "The door just shut behind you, and locking sound is heard"<<endl;
	system("pause");
	system("CLS");
	cout << "Suddenly, a tv turned on and a person with a gas mask is shown"<<endl;
	system("pause");
	system("CLS");
	cout << "Person: " << endl << "This part you will be shown with a series of doorways"<<endl;
	system("pause");
	system("CLS");
	cout << "Person: " << endl << "Choose carefully"<<endl;
	system("pause");
	system("CLS");
	cout << "Person: " <<endl << "Good luck" <<endl;
	system("pause");
	system("CLS"); 
	lucktest();
}

void lucktest(){
	int door;
	void deathdoor();
	void secondsection();
	cout << "Choose the door"<<endl;
	cout << "1, 2, 3 ,4"<<endl;
	cin >> door;
	switch(door)
	{
		case 1: deathdoor();
			break;
		case 2: deathdoor();
			break;
		case 3: deathdoor();
			break;
		case 4: secondsection();
	}
}

void secondsection(){
	int door;
	void deathdoor();
	void thirdsection();
	cout << "Choose the door"<<endl;
	cout << "1, 2, 3 ,4"<<endl;
	cin >> door;
	switch(door)
	{
		case 1: deathdoor();
			break;
		case 2: thirdsection();
			break;
		case 3: deathdoor();
			break;
		case 4: deathdoor();
			break;
		default: cout << "Choose a door"<<endl;
	}
}

void thirdsection(){
	int door;
	void deathdoor();
	void fourthsection();
	cout << "Choose the door"<<endl;
	cout << "1, 2, 3 ,4"<<endl;
	cin >> door;
	switch(door)
	{
		case 1: deathdoor();
			break;
		case 2: deathdoor();
			break;
		case 3: fourthsection();
			break;
		case 4: deathdoor();
			break;
		default: cout << "Choose a door"<<endl;
		
	}
}

void fourthsection(){
	int door;
	void deathdoor();
	void fifthsection();
	cout << "Choose the door"<<endl;
	cout << "1, 2, 3 ,4"<<endl;
	cin >> door;
	switch(door)
	{
		case 1: deathdoor();
			break;
		case 2: deathdoor();
			break;
		case 3: deathdoor();
			break;
		case 4: fifthsection();
			break;
		default: cout << "Choose a door"<<endl;
	}
}

void fifthsection(){
	int door;
	void deathdoor();
	void sixthsection();
	cout << "Choose the door"<<endl;
	cout << "1, 2, 3 ,4"<<endl;
	cin >> door;
	switch(door)
	{
		case 1: sixthsection();
			break;
		case 2: deathdoor();
			break;
		case 3: deathdoor();
			break;
		case 4: deathdoor();
			break;
		default: cout << "Choose a door"<<endl;
	}
}

void sixthsection(){
	int door;
	void deathdoor();
	void seventhsection();
	cout << "Choose the door"<<endl;
	cout << "1, 2, 3 ,4"<<endl;
	cin >> door;
	switch(door)
	{
		case 1: seventhsection();
			break;
		case 2: deathdoor();
			break;
		case 3: deathdoor();
			break;
		case 4: deathdoor();
			break;
		default: cout << "Choose a door"<<endl;
	}
}

void seventhsection(){
	int door;
	void deathdoor();
	void eighthsection();
	cout << "Choose the door"<<endl;
	cout << "1, 2, 3 ,4"<<endl;
	cin >> door;
	switch(door)
	{
		case 1: deathdoor();
			break;
		case 2: eighthsection();
			break;
		case 3: deathdoor();
			break;
		case 4: deathdoor();
			break;
		default: cout << "Choose a door"<<endl;
	}
}

void eighthsection(){
	int door;
	void deathdoor();
	void ninthsection();
	cout << "Choose the door"<<endl;
	cout << "1, 2, 3 ,4"<<endl;
	cin >> door;
	switch(door)
	{
		case 1: deathdoor();
			break;
		case 2: deathdoor();
			break;
		case 3: deathdoor();
			break;
		case 4: ninthsection();
			break;
		default: cout << "Choose a door"<<endl;
	}
}

void ninthsection(){
	int door;
	void deathdoor();
	void tenthsection();
	cout << "Choose the door"<<endl;
	cout << "1, 2, 3 ,4"<<endl;
	cin >> door;
	switch(door)
	{
		case 1: deathdoor();
			break;
		case 2: tenthsection();
			break;
		case 3: deathdoor();
			break;
		case 4: deathdoor();
			break;
		default: cout << "Choose a door"<<endl;
	}
}

void tenthsection(){
	int door;
	void deathdoor();
	void FINAL2();
	cout << "Choose the door"<<endl;
	cout << "1, 2, 3 ,4"<<endl;
	cin >> door;
	switch(door)
	{
		case 1: deathdoor();
			break;
		case 2: deathdoor();
			break;
		case 3: FINAL2();
			break;
		case 4: deathdoor();
			break;
		default: cout << "Choose a door"<<endl;
	}
}

void deathdoor(){
	cout << "You've opened the door"<<endl;
				system("pause");
				system("cls");
				cout << "You see a writing inside: "<<endl;
				system("pause");
				system("cls");
				cout << "WRONG DOOR"<<endl;
				system("pause");
				system("cls");
				cout << "The door exploded"<<endl;
				system("pause");
				system("cls");
				cout << "You died"<<endl;
				system("pause");
				system("cls");
				main();
}


void SecretDoor(){
	
}

void FINAL1(){
	void Ending1();
	char answer;
	cout << "Person: "<<endl<<"Impressive, most impressive, you cleared them without fail"<<endl;
	system("pause");
	system("cls");
	cout << "Person: "<<endl<<"but do you think I will let you get away that easy?"<<endl;
	system("pause");
	system("cls");
	cout << "Person: "<<endl<<"I have a last riddle for you"<<endl;
	system("pause");
	system("cls");
	cout << "Person: "<<endl<<"If you answer this correctly, I'll let you go"<<endl;
	system("pause");
	system("cls");
	
	cout << "This thing all things devours: "<<endl;
	cout << "Birds, beasts, trees, flowers;"<<endl;
	cout << "Gnaws iron, bites steel;"<<endl;
	cout << "Grinds hard stones to meal;"<<endl;
	cout << "Slays king, ruins town,"<<endl;
	cout << "And beats high mountain down."<<endl;
	cout << "Answer: "<<endl;
	
	cout << "a. Time"<<endl;
	cout << "b. Dragon"<<endl;
	cout << "c. Devil"<<endl;
	cout << "d. Alien"<<endl;
	
	switch (answer)
		{
			case 'a': cout << "Correct" <<endl;
				system("pause");
				system("cls");
				Ending1();
				break;
			case 'b': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'c': cout << "Incorrect"<<endl;
				system("pause");
				system("cls");
				death1();
				break;
			case 'd': cout << "Incorrect" <<endl;
				system("pause");
				system("cls");
				death1;
				break;	
			default: cout << "Choose an answer"<<endl;
		}
}

void FINAL2(){
	void russianroulette();
	cout << "Person: "<<endl<<"Impressive, most impressive, you cleared them without fail"<<endl;
	system("pause");
	system("cls");
	cout << "Person: "<<endl<<"but do you think I will let you get away that easy?"<<endl;
	system("pause");
	system("cls");
	cout << "Person: "<<endl<<"Let's have a russian roulette"<<endl;
	system("pause");
	system("cls");
	cout << "Person: "<<endl<<"It's five out of six loaded"<<endl;
	system("pause");
	system("cls");
	cout << "Person: "<<endl<<"If you survive this, I'll let you go"<<endl;
	system("pause");
	system("cls");
	cout << "Person: "<<endl<<"take the gun on the middle table there"<<endl;
	system("pause");
	system("cls");
	cout << "With despair, you take the gun and aimed at your head"<<endl;
	system("pause");
	system("cls");
	russianroulette();
	
}

void russianroulette(){
	void Ending2();
	bool dead = false;
    int slot;
    const int BULLET_POS = 1; 
    
    srand(time(0)); 
   
    while(dead == false) 
    {
        slot = (rand() % 2) + 1; 
        
        cin.ignore(); 
        
        if(BULLET_POS != slot) //If bullet was not shot.
        {
            cout << "*CLICK*"<<endl;
            system("pause");
            system("cls");
			Ending2();
            
        } 
        else //If bullet was shot.
        {
            
            cout << "BANG!!!"<<endl;   
            dead = true; //Ends game.
            cout << "You died"<<endl;
            system("pause");
            system("cls");
            main();
        }
    }
    
    
}

void Ending1(){
	char again;
	cout << "Person"<<endl<<"You really are smart"<<endl;
	system("pause");
	system("cls");
	cout << "The wall moved revealling a door with exit sign"<<endl;
	system("pause");
	system("cls");
	cout << "Person: "<<endl<<"You may exit through the door"<<endl;
	system("pause");
	system("cls");
	cout << "You opened the door revealing to be forestry"<<endl;
	system("pause");
	system("cls");
	cout << "You escaped"<<endl;
	system("pause");
	system("cls");
	cout << "You've earned an achievement: "<<endl<<"Braniac"<<endl;
	system("pause");
	system("cls");
	cout << "Play again? "<<endl;
	cout << "Y/N"<<endl;
	cin >> again;
	switch (again)
	{
		case 'y': StartStory();
		break;
		case 'n': main();
	}
}

void Ending2(){
	char again;
	cout << "Person"<<endl<<"You have some really good luck"<<endl;
	system("pause");
	system("cls");
	cout << "The wall moved revealling a door with exit sign"<<endl;
	system("pause");
	system("cls");
	cout << "Person: "<<endl<<"You may exit through the door"<<endl;
	system("pause");
	system("cls");
	cout << "You opened the door revealing to be forestry"<<endl;
	system("pause");
	system("cls");
	cout << "You escaped"<<endl;
	system("pause");
	system("cls");
	cout << "You've earned an achievement: "<<endl<<"Luckster"<<endl;
	system("pause");
	system("cls");
	cout << "Play again? "<<endl;
	cout << "Y/N"<<endl;
	cin >> again;
	switch (again)
	{
		case 'y': StartStory();
		break;
		case 'n': main();
	}
}
