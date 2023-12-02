//C++ function with demo functions
//program is about a mission to Venus
//add libraries to do input and output
#include <iostream>
#include <string>

//prototype our functions - declaring a variable before using it
void DisplayTitle();
void DisplayIntro();
std::string getUserName();
void WelcomeUserByName(std::string userName);
void EndSim(std::string userName);
void incorrectInput();
void Scenario1();
void Scenario2_1();
void Scenario2_2();
void EnergyEndgame();
void Victory();
//create the main function which will return an integer
//always the starting point of the program
int main()
{
	//create a variable to store the users name
	std::string userName;
	//call our function to get the users name
	userName = getUserName();

	WelcomeUserByName(userName);


	//create a variable for to keep playing this sim
	bool keepPlaying = true;



	//create a loop that will keep playing until the user quits
	
	while (keepPlaying == true)
	{
		//display title
		DisplayTitle();

		//Display a description of the simulation
		DisplayIntro();

		//show the user scenario 1 and its choices
		Scenario1();

		//ask the user what their choice is, 1,or 2?
		std::string scenario1Choice;
		std::getline(std::cin, scenario1Choice);
		//determine the path of the story based on the choices. 
		if (scenario1Choice == "1")
		{
			Scenario2_1();
		}
		else if (scenario1Choice == "2")
		{
			Scenario2_2();
		}
		else
		{
			incorrectInput();
		}

		std::string scenario2Choice;
		std::getline(std::cin, scenario2Choice);
//determine the outcome of the game based on the scenarios and the paths taken
		if (scenario2Choice == "1")
		{
			EnergyEndgame();
		}
		else if (scenario2Choice == "2")
		{
			Victory();
		}
		else
		{
			incorrectInput();
		}

		//ask the user if they want to keep playing
		std::cout << "\nDo you want to keep playing?\n" << std::endl; 

		std::string userChoice;

		std::getline(std::cin, userChoice);

		if (userChoice == "1")
		{
			//keep the boolean statement true to restart the loop
			keepPlaying = true;
			std::cout << "Let's play again!" << std::endl;
		}
		else
		{
			//if the user wants to end, make the boolean stop
			keepPlaying = false;
			std::cout << " " << std::endl;
				
		}
	}
	

	//show the end of the simulation
	EndSim(userName);

	return 0;
	
}

//create the DisplayIntro function

void DisplayTitle()
{
	std::cout << "\n\n*** Mission to Venus! ***\n" << std::endl;
}

//display the description
void DisplayIntro()
{
	std::cout << "The year is 2045, and you stand at the precipice of the unknown," << std::endl;
	std::cout << "geared up and ready to descend into the swirling abyss of Venusian clouds." <<std::endl;
	std::cout << "Your mission : to explore the enigmatic planet, uncover its hidden wonders, and confront the challenges that lie in wait." << std::endl;
}
//these are the written out scenarios for the story to be played when the user reaches that point
void Scenario1()
{
	std::cout << "Upon landing on Venus, you're faced with limited resources. The first critical decision involves allocating resources:" << std::endl;
	std::cout << "Do you prioritize building a robust energy infrastructure to withstand Venus's extreme conditions(1)," << std::endl; 
	std::cout << "Or focus on establishing food production to sustain the colony.(2)" << std::endl;
}
void Scenario2_1()
{
	std::cout << "Upon landing on Venus, the immediate focus of the colonization initiative is to establish" <<std::endl;
	std::cout << "a robust energy infrastructure to withstand the extreme conditions and power vital systems for the budding colony's survival." << std::endl;
	std::cout << "You must choose whether to build solar farms to collect sunlight,(1)" << std::endl;
	std::cout << "or geothermal power stations tapping into Venus's volcanic activity for more consistent energy(2)" << std::endl;

}
void Scenario2_2()
{
	std::cout << "The immediate priority upon landing on Venus is to ensure the colony's sustenance" << std::endl;
	std::cout << "by establishing a reliable and sustainable food production system in the challenging environment." << std::endl;
	std::cout << "Do you choose to cultivate Venusian plants? a longer and riskier project but could be more sustainable in the long term?(1), " << std::endl;
	std::cout << "Or do you grow genetically modified plants, giving results but could develop ethical concerns(2)" << std::endl;
}
void EnergyEndgame()
{
	std::cout << "Your choices led to the colony being unable to produce enough resouces to sustain itself, try again!" << std::endl;
}
void Victory()
{
	std::cout << "Through hard work and good decisions, the colony is now established and secured. Good Job!" << std::endl;
}
//for when an incorrect input is involved in a decision
void incorrectInput()
{
	std::cout << "Please input a 1, 2, or 3 to make your choice." << std::endl;
}
std::string getUserName()
{
	std::string userName;

	//ask the user for your name
	std::cout << "\nWhat is your name?";

	std::getline(std::cin, userName);

	return userName;
}
//welcome user by name function
void WelcomeUserByName(std::string userName)
{
	std::cout << "\nWelcome " << userName << " to the Mission to Venus!" << std::endl;
}

void EndSim(std::string userName)
{
	std::cout << "end of simulation, thanks for playing " << userName << "!" << std::endl;

}
