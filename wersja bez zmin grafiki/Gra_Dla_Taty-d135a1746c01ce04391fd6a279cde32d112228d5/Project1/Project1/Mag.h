#pragma once
#include "Character.h"
ref class Mag : public Character {

public:

	Mag(System::String^ name, System::String^ picture, int damage, int maxhealth, int currenthealth,int defense,int armor, System::String^ description) :
		Character(name, picture, gcnew String("Mag"), damage, maxhealth, currenthealth,defense,armor,description) {}

	virtual String ^ whoAmI() override {
		return gcnew String("Hokus POkus");
	}

};
