#pragma once
#include <iostream>
#include <string>
#include "InterfaceCommunication.h"

using namespace std;

class clsPersonM
{
private:
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:

	clsPersonM(string FirstName, string LastName, string Email, string Phone)
	{
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string GetFirstName()
	{
		return _FirstName;
	}
	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string GetLasttName()
	{
		return _LastName;
	}
	__declspec(property(get = GetLasttName, put = SetLastName)) string LastName;

	void SetEmail(string Email)
	{
		_Email = Email;
	}

	string GetEmail()
	{
		return _Email;
	}
	__declspec(property(get = GetEmail, put = SetEmail)) string Email;

	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	string GetPhone()
	{
		return _Phone;
	}
	__declspec(property(get = GetPhone, put = SetPhone)) string Phone;

	string FullName()
	{
		return _FirstName + " " + _LastName;
	}

	void Print()
	{
		cout << "\nInfo:";
		cout << "\n______________________________";
		cout << "\nFirt name: ";
		cout << "\nLast name:";
		cout << "\nFull name: ";
		cout << "\nEmail: ";
		cout << "\nPhone: ";
		cout << "\n______________________________";

	}

	void SendEmail(string Title, string Body)
	{

	}

	void SendFax(string Title, string Body)
	{

	}

	void SendSMS(string Title, string Body)
	{


	}


};


