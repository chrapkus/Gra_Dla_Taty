#pragma once
#include "Character.h"
ref class Knight : public Character {

public:

	Knight(System::String^ name, System::String^ picture, int damage, int maxhealth, int currenthealth) :
		Character(name, picture, gcnew String("Knight"), 100, 100, 20) {}

	virtual String ^ whoAmI() override {
		return gcnew String("Jestem kurwa du¿ym rycerzem!");
	}

};
