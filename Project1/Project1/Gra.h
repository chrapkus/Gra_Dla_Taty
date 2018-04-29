#pragma once

using namespace System;

delegate void ViewChangeEvent(int numerOkna);

ref class Gra
{

public: static event ViewChangeEvent^ OnViewChange;

public:
	Gra();//konstruktor

	static String^ gameId;// gameId-data
	public: static String^ gameName;
	static Gra ^ __GRA;
	
public: static String^ newGame(String^ gameNameP) {
			delete gameId;
		gameId = System::DateTime::Now.Ticks.ToString();
		gameName = gameNameP;
		return gameId;
	}

	static String^ getGanmeId() {
		return gameId;
	}

	public: static Gra^ getGame() {
	if (__GRA == nullptr) {
		__GRA = gcnew Gra();
	}
	return __GRA;
	}
public: static void FireViewChangeEvent(int numerOkna)
{
	OnViewChange(numerOkna);
}

	virtual ~Gra();
};
