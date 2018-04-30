#pragma once
#include "Character.h"
ref class Assasin : public Character {

public:
	
	Assasin(System::String^ name, System::String^ picture, int damage, int maxhealth, int currenthealth)
		: Character(name, picture, gcnew String("Assasin"), 100, 100, 20)
	{
		//Character(name, picture, gcnew String("Assasin"), 100, 100, 20);
	}

	virtual String ^ whoAmI() override {
		return gcnew String("Jestem kurwa du¿ym assasinem");
	}

};
