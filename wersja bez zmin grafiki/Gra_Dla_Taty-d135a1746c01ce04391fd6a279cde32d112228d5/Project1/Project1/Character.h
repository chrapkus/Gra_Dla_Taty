#pragma once
#include <string>
#include <cliext/map>

using namespace cliext;
using namespace System;

ref class Character;

typedef map<String^, Character^> characterMapType;

ref class Character
{
public:
	System::String^ name;
	System::String^ picture;
	System::String^ type;
	int damage;
	int maxhealth;
	int currenthealth;
		
	//typedef map<String^, Character^> characterMapType;
	static characterMapType^ CharacterS = gcnew characterMapType();
	//static map<String^, Character^>^  CharacterS = gcnew map<String^, Character^>();

public:
	//Character() {}
	Character(String^ name, String^ picture, String^ type, int damage, int maxhealth, int currenthealth)

	{
		this->name = name;
		this->picture = picture;
		this->type = type;
		this->damage = damage;
		this->maxhealth = maxhealth;
		this->currenthealth = currenthealth;
	}

public: virtual String^ whoAmI() {
	return gcnew String("Jestem zwyk³¹ postaci¹.");
}

public: static void addCharacter(String^ key, Character^ character) {
	CharacterS[key] = character;
}

public: static Character^ getCharacter(String^ key) {
	return CharacterS[key];
}

public: static characterMapType::iterator getStartIterator() {
	return CharacterS->begin();
}

public: static characterMapType::iterator getEndIterator() {
	return CharacterS->end();
}

//reset postaci, usuwa za pomoc¹ operatora delete i czysci kontener
public: static void reset() {
	characterMapType::iterator begin = CharacterS->begin();
	characterMapType::iterator end = CharacterS->end();
	while (begin != end) {
		Character^ character = begin.get_ref()->second;
		delete character;
		begin++;
	}
	CharacterS->clear();
}
};