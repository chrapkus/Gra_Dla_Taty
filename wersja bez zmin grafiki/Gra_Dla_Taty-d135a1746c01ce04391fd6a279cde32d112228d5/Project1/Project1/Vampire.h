#pragma once
#include "Character.h"
ref class Vampire : public Character {

public:
	

	Vampire(System::String^ name, System::String^ picture, int damage, int maxhealth, int currenthealth,int defense,int armor, System::String^ description):
		Character(name, picture, gcnew String("Vampire"),damage, maxhealth, currenthealth,defense,armor,description) {}

	virtual String ^ whoAmI() override {
		return gcnew String("Jestem kurwa Vampire");
	}

};
