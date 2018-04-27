#pragma once
#include "Postac.h"
ref class Rycerz : public Postac {

public:
	Rycerz::Rycerz();
	
	Rycerz(System::String^ name, System::String^ picture, int damage, int maxhealth, int currenthealth) {
			Postac(name, picture, gcnew String("Rycerz"), 100, 100, 20);
	}

	String ^ kimJestem() {
		return gcnew String("Jestem kurwa du¿ym rycerzem!");
	}

	static Postac ^ getPostac() {
		if (__POSTAC == nullptr) {
			__POSTAC = gcnew Rycerz("__POSTAC", "__postac.jpg", 1, 1, 1);
		}
		return __POSTAC;
}

	virtual ~Rycerz();
};
