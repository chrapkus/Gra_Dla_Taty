#pragma once
#include "Postac.h"
ref class Rycerz : public Postac {

public:
	Rycerz::Rycerz() {};
	
	Rycerz(System::String^ name, System::String^ picture, int damage, int maxhealth, int currenthealth) {
			Postac(name, picture, gcnew String("Rycerz"), 100, 100, 20);
	}

	virtual String ^ kimJestem() override {
		return gcnew String("Jestem kurwa du¿ym rycerzem!");
	}

};
