#include "stdafx.h"
#include <iostream>
#include <cliext/map>
#include <cliext/list>

using namespace System;
using namespace std;
using cliext::map;

public ref class SomeTestClass {
	public:
		String ^ nazwa;
		int wiek;

		SomeTestClass(String^ nazwa, int wiek) {
			this->nazwa = nazwa;
			this->wiek = wiek;
		}
};

/*
typedef cliext::map<String^, SomeTestClass^>  testCMapType;

void main()
{
	testCMapType testCMap;

	testCMap.insert(testCMapType::make_value("dupa 2", gcnew SomeTestClass("Ptak", 2)));
	testCMap["dupa 1"] = gcnew SomeTestClass("Wilk", 12);
	testCMap["dupa 3"] = gcnew SomeTestClass("Pies", 10);
	testCMap["kutas 1"] = gcnew SomeTestClass("Kot", 1);
	
	testCMapType::iterator it = testCMap.begin();
	while (it->next) {
		System::Console::Write("[{0}]", it->ToString);
	}
	
	
	//zakończenie
	cout << "Dupa konia\n";
	int i;
	cin >> i;
}
*/

typedef cliext::map<String^, SomeTestClass^>  testCMapType;
typedef cliext::map<wchar_t, int> Mymap;
int main()
{
	Mymap c1;
	c1.insert(Mymap::make_value(L'a', 1));
	c1.insert(Mymap::make_value(L'b', 2));
	c1.insert(Mymap::make_value(L'c', 3));

	testCMapType testCMap;

	testCMap.insert(testCMapType::make_value("dupa 2", gcnew SomeTestClass("Ptak", 2)));
	testCMap.insert(testCMapType::make_value("dupa 3", gcnew SomeTestClass("Wilk", 4)));
	testCMap.insert(testCMapType::make_value("dupa 4", gcnew SomeTestClass("Kot", 7)));

	testCMap.find("dupa 2");
	
	//cout << "Ile elementów: " << testCMap.count;
	// display contents " [a 1] [b 2] [c 3]"   
	for each (Mymap::value_type elem in c1) {
		System::Console::Write(" [{0} {1}]", elem->first, elem->second);
	}
	System::Console::WriteLine();

	for each (testCMapType::value_type elem in testCMap) {
		System::Console::Write(" [{0} {1}]", elem->first, elem->second);
		System::Console::Write(" [{0}]", elem->second->nazwa);
		System::Console::WriteLine();
	}

	
	testCMapType::iterator testIter= testCMap.begin();
	while (testIter != testCMap.end()) {
		Console::Write( testIter.get_ref()->second->nazwa);
		testIter++;
	}


	//jak wyszukac element po nazwie?
	SomeTestClass^ tc = testCMap["dupa 3"];
	Console::Write(tc->nazwa);



	/*
	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}
	*/

	// inspect first two items   
	Mymap::iterator it = c1.begin();
	System::Console::WriteLine("*begin() = [{0} {1}]",
		it->first, it->second);
	++it;
	System::Console::WriteLine("*++begin() = [{0} {1}]",
		it->first, it->second);
	

	int i;
	cin >> i;
	
	return (0);
}
