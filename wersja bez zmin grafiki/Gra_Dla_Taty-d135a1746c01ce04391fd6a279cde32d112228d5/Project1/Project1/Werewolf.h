#pragma once
#include "Character.h"
ref class Werewolf : public Character {

public:
	Werewolf::Werewolf() {};

	Werewolf(System::String^ name, System::String^ picture, int damage, int maxhealth, int currenthealth) {
		Character(name, picture, gcnew String("Werewolf"), 150, 150, 40);
	}

	virtual String ^ whoAmI() override {
		return gcnew String("Jestem kurwa du¿ym assasinem");
	}

};
