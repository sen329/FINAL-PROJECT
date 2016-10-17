#include <iostream>
#include <string>

using namespace std;

void StartStory();

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
			cout << "Please choose a valid option";
		
		}
	}
	while(option !=3);
	
	return 0;
}

void StartStory()
{
	string choice;
	
	cout << "This is where story begins"<<endl;
	system ("pause");
	cout << "die or live? ";
	cin >> choice;
	
	if(choice == "die"){
		cout << "you died"<<endl;
		
	}
	else if (choice == "live"){
		cout << "for now this is the end"<<endl;	
	}
}
