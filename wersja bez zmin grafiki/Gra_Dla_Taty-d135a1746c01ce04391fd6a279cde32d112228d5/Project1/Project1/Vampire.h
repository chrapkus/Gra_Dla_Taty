#pragma once
#include "Character.h"
ref class Vampire : public Character {

public:
	

	Vampire(System::String^ name, System::String^ picture, int damage, int maxhealth, int currenthealth):
		Character(name, picture, gcnew String("Vampire"),80, 80, 10) {}

	virtual String ^ whoAmI() override {
		return gcnew String("Jestem kurwa Vampire");
	}

};
