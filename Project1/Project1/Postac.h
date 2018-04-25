#pragma once
#include <string>

ref class Postac
{
public:
	System::String^ name;
	System::String^ picture;
	System::String^ Type;
	int demage;
	int maxhealth;
	int currenthealth;

	Postac(System::String^n, System::String^pic, System::String^typ, int dmg, int mxh, int crh)
		
	{
		name = n;
		picture = pic;
		Type = typ;
		demage = dmg;
		maxhealth = mxh;
		currenthealth = crh;
	}
};

//Postac ^ P3 = gcnew Postac("Szymon", "przyklad", "zdj", 25, 200, 200);
