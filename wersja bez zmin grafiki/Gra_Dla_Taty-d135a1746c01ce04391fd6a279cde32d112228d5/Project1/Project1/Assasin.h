#pragma once
#include "Character.h"
ref class Assasin : public Character {

public:
	
	Assasin(System::String^ name, System::String^ picture, int damage, int maxhealth, int currenthealth,int defense,int armor, System::String^ description)
		: Character(name, picture, gcnew String("Assasin"), damage, maxhealth, currenthealth,defense,armor,description)
	{
		//Character(name, picture, gcnew String("Assasin"), 100, 100, 20);
	}

	virtual String ^ whoAmI() override {
		return gcnew String("Jestem kurwa du¿ym assasinem");
	}

};
