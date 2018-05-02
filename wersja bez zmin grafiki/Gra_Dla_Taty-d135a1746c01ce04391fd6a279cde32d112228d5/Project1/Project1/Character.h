#pragma once
#include <string>
#include <cliext/map>
#include <time.h>

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
	System::String^ description;
	int damage;
	int maxhealth;
	int currenthealth;
	int defense;
	int armor;

		
	//typedef map<String^, Character^> characterMapType;
	static characterMapType^ CharacterS = gcnew characterMapType();
	//static map<String^, Character^>^  CharacterS = gcnew map<String^, Character^>();

public:
	//Character() {}
	Character(String^ name, String^ picture, String^ type, int damage, int maxhealth, int currenthealth,int defense,int armor, System::String^ description)

	{
		this->name = name;
		this->picture = picture;
		this->type = type;
		this->damage = damage;
		this->maxhealth = maxhealth;
		this->currenthealth = currenthealth;
		this-> defense = defense;
		this->armor = armor;
		this->description = description;
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

  public:static System::String^ BasicAttack(Character ^ DealDmgCharacter, Character ^ OponentCharacter)
{	

	  srand(time(NULL));
	  int a = (rand() % 3) + 1; //losowania ruchu  przeciwnika

	  if (a == 1)// kontra
	  { 
		  DealDmgCharacter->currenthealth -= DealDmgCharacter->damage;
		  return OponentCharacter->name + " counter " + DealDmgCharacter->damage.ToString();
	  }
	  if (a == 2) // basic atack
	  {
		  OponentCharacter->currenthealth -= (DealDmgCharacter->damage - OponentCharacter->armor);
		  DealDmgCharacter->currenthealth -= (OponentCharacter->damage - DealDmgCharacter->armor);
		  return DealDmgCharacter->name + " " + DealDmgCharacter->type + " Basic attack for  " + (DealDmgCharacter->damage - OponentCharacter->armor) + " and  "
			  + OponentCharacter->name + " " + OponentCharacter->type + " Basic attack for  " + (OponentCharacter->damage - DealDmgCharacter->armor);
	  }
	  if (a == 3) // Uniqueattack
	  {
		  OponentCharacter->currenthealth -= (DealDmgCharacter->damage - OponentCharacter->armor);
		  DealDmgCharacter->currenthealth -= OponentCharacter->damage;
		  return DealDmgCharacter->name + " " + DealDmgCharacter->type + " Basic attack for  " + (DealDmgCharacter->damage - OponentCharacter->armor) + " and  "
			  + OponentCharacter->name + " " + OponentCharacter->type + " UNIGUE attack for  " + OponentCharacter->damage;
	  }
}
public:static System::String^ Defense(Character ^ DealDmgCharacter,Character ^ OponentCharacter)
{
	srand(time(NULL));
	int a = (rand() % 3) + 1; //losowania ruchu  przeciwnika

	if (a == 1)// kontra
	{
		return "Nobody attacked !";
	}
	if (a == 2) // basic atack
	{
		OponentCharacter->currenthealth -= OponentCharacter->damage;
		return DealDmgCharacter->name + " counter " + OponentCharacter->damage.ToString();
	}
	if (a == 3) // Uniqueattack
	{
		DealDmgCharacter->currenthealth -= OponentCharacter->damage;
		return DealDmgCharacter->name + " " + DealDmgCharacter->type + "  tried to defanse " 
			+ OponentCharacter->name + " " + OponentCharacter->type + " UNIGUE attack for  " + OponentCharacter->damage;
	}
	
}
public:static System::String^ Unique(Character ^ DealDmgCharacter, Character ^ OponentCharacter)
{
	srand(time(NULL));
	int a = (rand() % 3) + 1; //losowania ruchu  przeciwnika

	if (a == 1)// kontra
	{
		OponentCharacter->currenthealth -= DealDmgCharacter->damage;
		return OponentCharacter->name + " " + OponentCharacter->type + "  tried to defanse "
			+ DealDmgCharacter->name + " " + DealDmgCharacter->type + " UNIGUE attack for  " + DealDmgCharacter->damage;
	}
	if (a == 2) // basic atack
	{
		OponentCharacter->currenthealth -= DealDmgCharacter->damage;
		DealDmgCharacter->currenthealth -= (OponentCharacter->damage - DealDmgCharacter->armor);
		return DealDmgCharacter->name + " " + DealDmgCharacter->type + " Unique attack for  " + DealDmgCharacter->damage + " and  "
			+ OponentCharacter->name + " " + OponentCharacter->type + " Basic attack for  " + (OponentCharacter->damage - DealDmgCharacter->armor);
	}
	if (a == 3) // Uniqueattack
	{
		OponentCharacter->currenthealth -=DealDmgCharacter->damage;
		DealDmgCharacter->currenthealth -= OponentCharacter->damage;
		return DealDmgCharacter->name + " " + DealDmgCharacter->type + " UNIQUE attack for  " + DealDmgCharacter->damage + " and  "
			+ OponentCharacter->name + " " + OponentCharacter->type + " UNIQUE attack for  " + OponentCharacter->damage;
	}
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