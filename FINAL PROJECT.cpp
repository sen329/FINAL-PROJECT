#include <iostream>
#include <string>

using namespace std;

void StartStory();
void StorySection1();
void StoryDeath1();

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
			StartStory();
		}
		else if (option == 2){
			cout << "Created by Hanssen"<<endl;
			cout << "Story by Hanssen"<<endl;
		}
		else if (option == 3){
			cout << "Exiting"<<endl;
		}
		else {
			cout << "Please choose a valid option" <<endl;
		
		}
	}
	while(option !=0);
	
	return 0;
}

void StartStory()
{
	int choice;
	
	cout << "You wake up in a dimly-lit room."<<endl;
	system ("pause");
	cout << "You looked around, wondering how you got here."<<endl;
	system ("pause");
	cout << "You remembered that you came home from work"<<endl;
	cout << "and fallen asleep on your bed."<<endl;
	system("pause");
	cout << "You see a flashlight that is turned on."<<endl;
	cout << "Take the flashlight? "<<endl;
	cout << "1. Take"<<endl;
	cout << "2. Don't take"<<endl;
	cin >> choice;
	
	if(choice == 1){
		cout << "You have taken the flashlight."<<endl;
		system("pause");
		StorySection1();
	}
	else if (choice == 2){
		cout << "You did not take the flashlight."<<endl;
		system("pause");
		StoryDeath1();	
	}
}

void StorySection1()
{
	int option1;
	cout << "You picked up the flashlight"<<endl;
	system("pause");
	cout << "You looked around with the flashlight"<<endl;
	system("pause");
	cout << "you started to walk towards the door"<<endl;
	system("pause");
	cout << "What will you do?"<<endl;
	do 
	{
		cout << "1. Open the door"<<endl;
		cout << "2. Peek through the keyhole"<<endl;
		cout << "3. Don't open the door"<<endl;
		cin >> option1;
		
		if(option1 == 1){
			cout << "You opened the door"<<endl;
		}
		else if (option1 == 2){
			cout << "The area seemed safe"<<endl;
		}
		else if (option1 == 3){
			cout << "You decided to not opened the door"<<endl;
			system("pause");
			cout << "You looked around the room again"<<endl;
			system("pause");
			cout << "There's nothing here anymore"<<endl;
			system("pause");
			cout << "You approached the door again"<<endl;
		}
		else {
			cout << "It is better to peek first before you open"<<endl;
		}
	}
	while (option1 != 3);
}

void StoryDeath1()
{
	cout << "You walked outside the room with no light."<<endl;
	cout << "It is pitch black because the lights are off"<<endl;
	cout << "and you have no source of light to help."<<endl;
	system("pause");
	cout << "Suddenly, you hear a metalic noise coming towards you."<<endl;
	system("pause");
	cout << "Then you feel a sharp pain on your stomach"<<endl;
	system("pause");
	cout << "You were stabbed by and unknown attacker"<<endl;
	system("pause");
	cout << "You died"<<endl;
	system("pause");
}
