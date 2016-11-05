#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void StartStory();
void StorySection1();
void StoryDeath1();
void StorySection2();
void BlueDoor();
void YellowDoor();
void GreenDoor();
void SecretDoor();
void riddlesection();

int main(){
	int option;
	do
	{
		cout << "1. Start"<<endl;
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
	cout << "You see a flashlight that is turned on."<<endl;
	system("pause");
	system("CLS");
do{
	cout << "Take the flashlight? "<<endl;
	cout << "1. Take"<<endl;
	cout << "2. Don't take"<<endl;
	cin >> choice;
	
	if(choice == 1){
		system("CLS");
		cout << "You have taken the flashlight."<<endl;
		system("pause");
		system("CLS");
		StorySection1();
	}
	else if (choice == 2){
		system("CLS");
		cout << "You did not take the flashlight."<<endl;
		system("pause");
		system("CLS");
		StoryDeath1();	
	}
	else{
		system("CLS");
		cout << "It is wise to take the flashlight"<<endl;
		system("pause");
		system("CLS");
	}
}

while (choice !=2);

}

void StorySection1()
{
	int option1;
	cout << "You picked up the flashlight"<<endl;
	system("pause");
	system("CLS");
	cout << "You looked around with the flashlight"<<endl;
	system("pause");
	system("CLS");
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

void StoryDeath1()
{
	cout << "You walked outside the room with no light."<<endl;
	system("pause");
	system("CLS");
	cout << "It is pitch black because the lights are off"<<endl;
	cout << "and you have no source of light to help."<<endl;
	system("pause");
	system("CLS");
	cout << "Suddenly, you hear a metalic noise coming towards you."<<endl;
	system("pause");
	system("CLS");
	cout << "Then you feel a sharp pain on your stomach"<<endl;
	system("pause");
	system("CLS");
	cout << "You were stabbed by an unknown attacker"<<endl;
	system("pause");
	system("CLS");
	cout << "You died"<<endl;
	system("pause");
	system("CLS");
}

void StorySection2(){
	int door;
	cout << "Beyond the door, there's a stairs going up "<<endl;
	system("pause");
	system("CLS");
	cout << "You climbed the stairs"<<endl;
	system("pause");
	system("CLS");
	cout << "You arrived at a hall with three doors" <<endl << "colored blue, yellow, and green";
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
	cout << "3. Green door" << endl;
	cin >> door;
	switch(door)
	{
		case 1: BlueDoor();
			break;
		case 2: YellowDoor();
			break;
		case 3: GreenDoor();
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
		char answer;
		cout << "You will always find me in the past." <<endl<< "I can be created in the present,"<<endl<< "But the future can never taint me. What am I?"<<endl;
		cout << "Answer: ";
		cin >> answer;
		if ("History"){
			cout << "Correct"<<endl;
			system("pause");
		}
		else {
			cout << "Incorrect"<<endl;
			system("pause");
			system("cls");
			cout << "You died";
		}
	}
void YellowDoor(){
	
}
void GreenDoor(){
	
}
void SecretDoor(){
	
}
