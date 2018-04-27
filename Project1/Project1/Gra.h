#pragma once

using namespace System;

ref class Gra
{
public:
	Gra();

	static String^ gameId;
	static String^ gameName;
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


	virtual ~Gra();
};
