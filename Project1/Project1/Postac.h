#pragma once
#include <string>
#include <cliext/map>

using namespace cliext;
using namespace System;

enum TypPostaci{
	POSTAC_RYCERZ = 0,
	POSTAC_PIES = 1,
	POSTAC_KSIADZ = 2,
	POSTAC_BABAJAGA = 3
};

ref class Postac
{
public:
	System::String^ name;
	System::String^ picture;
	System::String^ type;
	int damage;
	int maxhealth;
	int currenthealth;

	// test set<String^>^ emplSet = gcnew set<String^>();		
	static map<String^, Postac^>^  Postacie = gcnew map<String^, Postac^>();

public:
	Postac() {}
	Postac(String^ name, String^ picture, String^ type, int damage, int maxhealth, int currenthealth)

	{
		this->name = name;
		this->picture = picture;
		this->type = type;
		this->damage = damage;
		this->maxhealth = maxhealth;
		this->currenthealth = currenthealth;
	}

public: virtual String^ kimJestem() {
	return gcnew String("Jestem zwyk³¹ postaci¹.");
}

/*
public: static Postac ^ getPostac() {
	if (__POSTAC == nullptr) {
		__POSTAC = gcnew Postac("__POSTAC", "__POSTAC", "__postac.jpg", 1, 1, 1);
	}
	return __POSTAC;
}
*/

public: static void dodajPostaæ(String^ key, Postac^ postac) {
	Postacie[key] = postac;
}

public: static Postac^ podajPostaæ(String^ key) {
	return Postacie[key];
}

};