#pragma once
#include <string>

ref class Postac//tata to lamuw 2fgfdgsdgdg
{
public://tata to lamus
	System::String^ name;
	System::String^ picture;
	System::String^ type;
	int damage;
	int maxhealth;
	int currenthealth;

	Postac(System::String^ name, System::String^ picture, System::String^ type, int damage, int maxhealth, int currenthealth)
		
	{
		this->name = name;
		this->picture = picture;
		this->type = type;
		this->damage = damage;
		this->maxhealth = maxhealth;
		this->currenthealth = currenthealth;
	}
};

//Postac ^ P3 = gcnew Postac("Szymon", "przyklad", "zdj", 25, 200, 200);
