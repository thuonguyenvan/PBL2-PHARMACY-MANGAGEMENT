#pragma once
#include<iostream>
using namespace std;
#include "Person.h"

class Customer :  public Person
{
public:
    int Point = 0;
public:
    Customer();
    Customer(const Customer&);
    ~Customer();
    void AccumPoint();
    friend ostream& operator<<(ostream &, const Customer&);
    void readCustomerFromFile(ifstream &);
};

/*
- người mua:
	+ thông tin cá nhân
	+ tra cứu thuốc
	+ thêm tài khoản
	+ tích điểm
	+ góp ý
*/