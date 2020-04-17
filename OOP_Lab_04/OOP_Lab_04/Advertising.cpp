#pragma once
#include "Advertising.h"
#include "string.h"
#include <iostream>

using namespace std;

const char* Advertising::GetCustomer() const
{
	return this->customer;
}

const char* Advertising::GetAdvertising_title() const
{
	return this->advertising_title;
}


Advertising::Advertising(const char* customer, const char* advertising_title)
{
	this->customer = (char*)customer;
	this->advertising_title = (char*)advertising_title;
}

Advertising::Advertising()
{
	cout << "AdvertisingTV::AdvertisingTV()" << endl;
}

Advertising::~Advertising()
{
	cout << "Advertising::~Advertising()" << endl;
	
}
