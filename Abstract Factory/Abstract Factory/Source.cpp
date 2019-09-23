#include<iostream>
#include<vector>


//#include"AbstractFactory.h"
//#include"Handle.h"
//#include"Bridge.h"
#include"Proxy.h"



int main() {

	//Abstract Factory
	/*---------------------------*/
	/*Factory* factory = new CharacterFactory;
	std::vector<Character*> characters;
	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());

	for (int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}*/


	//Handle class
	/*---------------------------*/
	//HandleToCharacter handle; handle->Print();


	//Bridge
	/*---------------------------*/
	/*DrawAPI* api = new DrawImpl();
	Character* character = new Player(api);
	character->Draw();
	std::cin.get();
	*/


	//Proxy
	/*---------------------------*/
	//GraphicProxy gp;
	//gp.Draw();

	system("PAUSE");
}
