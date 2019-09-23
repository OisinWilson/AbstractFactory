#pragma once

#include<iostream>

class Character {
public:
	Character() {
	
	}

	void Print() { std::cout << "Printing Character" << std::endl; }
};

class HandleToCharacter
{
public:
	HandleToCharacter() : character(new Character()) {};
	Character* operator->() { return character; }

private:
	Character* character;
};
