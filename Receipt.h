#pragma once
#include<string>
#include<iostream>
#include "Customer.cpp"
#include "Staff.h"
#include "Medicine.cpp"
#include "MedicineManagement.cpp"
using namespace std;
class ReceiptManagement;

class Receipt: public Customer, public Staff, public MedicineManagement
{
private:
    string ReceiptID;
    string DateOfTran;
    int CountMedicine;
    Medicine *List;
    int *Number;
    long long int Total;
public:
    friend class ReceiptManagement;
    Receipt();
    Receipt(const Customer&, const Staff&, const MedicineManagement&);
    ~Receipt();
    void addNewMedicine(const Medicine&, const int &);
    void refreshReceipt();
    void showReceipt();
    void readReceiptFromFile(ifstream &);
    void editReceipt();
    void editMedicineInReceipt(const string&);
    int checkExistedMedicine(const string&);
    void buyMedicine(const string &); // khi nhap ID thuoc muon mua vao thi goi ham nay
};