#pragma once
#include <string>

ref class Postac//tata to lamuw 2fgfdgsdgdg
{
public://Szymon to lamus
	System::String^ name;
	System::String^ picture;
	System::String^ type;
	int damage;
	int maxhealth;
	int currenthealth;

//globalna postac
private: static Postac ^ __POSTAC;

public:
	Postac(System::String^ name, System::String^ picture, System::String^ type, int damage, int maxhealth, int currenthealth)

	{
		this->name = name;
		this->picture = picture;
		this->type = type;
		this->damage = damage;
		this->maxhealth = maxhealth;
		this->currenthealth = currenthealth;
	}

public: static Postac ^ getPostac() {
	if (__POSTAC == nullptr) {
		__POSTAC = gcnew Postac("__POSTAC", "__POSTAC", "__postac.jpg", 1, 1, 1);
	}
		return __POSTAC;
	

}

};


