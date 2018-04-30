#pragma once
#include "Character.h"
ref class Mag : public Character {

public:
	Mag::Mag() {};

	Mag(System::String^ name, System::String^ picture, int damage, int maxhealth, int currenthealth) {
		Character(name, picture, gcnew String("Mag"), 100, 100, 20);
	}

	virtual String ^ whoAmI() override {
		return gcnew String("Hokus POkus");
	}

};
