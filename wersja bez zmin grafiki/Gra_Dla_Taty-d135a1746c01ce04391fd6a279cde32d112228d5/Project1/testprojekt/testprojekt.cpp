// mcppv2_events.cpp  
// compile with: /clr  
#include "stdafx.h"
#include <iostream>


using namespace System;

// declare delegates  
delegate void ClickEventHandler(int, double);
delegate void DblClickEventHandler(String^);

// class that defines events  
ref class EventSource {
public:
	event ClickEventHandler^ OnClick;   // declare the event OnClick  
	event DblClickEventHandler^ OnDblClick;   // declare OnDblClick  

	void FireEvents() {
		// raises events  
		OnClick(7, 3.14159);
		OnDblClick("Hello");
	}
};

// class that defines methods that will called when event occurs  
ref class EventReceiver {
public:
	void OnMyClick(int i, double d) {
		Console::WriteLine("OnClick: {0}, {1}", i, d);
	}

	void OnMyDblClick(String^ str) {
		Console::WriteLine("OnDblClick: {0}", str);
	}
};

ref class OtherEventReceiver {
public:

	void AnyDblClick(String^ str) {
		Console::WriteLine("ANYDblClick: {0}", str);
	}
};



int main() {
	EventSource ^ MyEventSource = gcnew EventSource();
	EventReceiver^ MyEventReceiver = gcnew EventReceiver();
	OtherEventReceiver^ MyOtherEventReceiver = gcnew OtherEventReceiver();

	// hook handler to event  
	MyEventSource->OnClick += gcnew ClickEventHandler(MyEventReceiver, &EventReceiver::OnMyClick);
	MyEventSource->OnDblClick += gcnew DblClickEventHandler(MyEventReceiver, &EventReceiver::OnMyDblClick);
	MyEventSource->OnDblClick += gcnew DblClickEventHandler(MyOtherEventReceiver, &OtherEventReceiver::AnyDblClick);

	// invoke events  
	MyEventSource->FireEvents();

	// unhook handler to event  
	MyEventSource->OnClick -= gcnew ClickEventHandler(MyEventReceiver, &EventReceiver::OnMyClick);
	MyEventSource->OnDblClick -= gcnew DblClickEventHandler(MyEventReceiver, &EventReceiver::OnMyDblClick);
	int liczba;
	std::cin >> liczba;

}
