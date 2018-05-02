#pragma once
#include "Character.h"
ref class Orc : public Character {

public:
	
	Orc(System::String^ name, System::String^ picture, int damage, int maxhealth, int currenthealth,int defense,int armor, System::String^ description) :
		Character(name, picture, gcnew String("Orc"), damage, maxhealth, currenthealth,defense,armor,description) {}

	virtual String ^ whoAmI() override {
		return gcnew String("Jestem kurwa du¿ym orcem");
	}

};
