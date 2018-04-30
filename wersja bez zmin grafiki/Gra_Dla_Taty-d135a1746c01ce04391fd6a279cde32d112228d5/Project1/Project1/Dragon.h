#pragma once
#include "Character.h"
ref class Dragon : public Character {

public:
	Dragon::Dragon() {};

	Dragon(System::String^ name, System::String^ picture, int damage, int maxhealth, int currenthealth) {
		Character(name, picture, gcnew String("Dragon"), 200, 200, 30);
	}

	virtual String ^ whoAmI() override {
		return gcnew String("Jestem kurwa du¿ym dragonem");
	}

};
