#pragma once
#include "Character.h"
ref class Orc : public Character {

public:
	Orc::Orc() {};

	Orc(System::String^ name, System::String^ picture, int damage, int maxhealth, int currenthealth) {
		Character(name, picture, gcnew String("Orc"), 100, 100, 20);
	}

	virtual String ^ whoAmI() override {
		return gcnew String("Jestem kurwa du¿ym orcem");
	}

};
