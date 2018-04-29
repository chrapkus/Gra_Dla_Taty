#pragma once

using namespace System;

delegate void ViewChangeEvent(int numerOkna); 

ref class Game
{

public: static event ViewChangeEvent^ OnViewChange;

public:
	Game();//konstruktor

	static String^ gameId;// gameId-data
	public: static String^ gameName;
	static Game ^ __GRA;
	
public: static String^ newGame(String^ gameNameP) {
			delete gameId;
		gameId = System::DateTime::Now.Ticks.ToString();
		gameName = gameNameP;
		return gameId;
	}

	static String^ getGanmeId() {
		return gameId;
	}

	public: static Game^ getGame() {
	if (__GRA == nullptr) {
		__GRA = gcnew Game();
	}
	return __GRA;
	}
public: static void FireViewChangeEvent(int numerOkna)
{
	OnViewChange(numerOkna);
}

	virtual ~Game();
};
