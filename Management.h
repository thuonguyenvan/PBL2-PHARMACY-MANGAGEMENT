#pragma once
using namespace std;
#include "Customer.cpp"
template <class T>
class Management
{
protected:
    T *List;
    int Count;
public:
    friend class ifstream;
    Management();
    ~Management();
    void Add();
    void View();
   // void Edit(const string &);
    void Remove(const string &);
    int CheckExisted(const string &);
    void readCountFromFile(ifstream &);
    void Edit(const string &);
    int returnCount();
    string returnEmail(int index);
    string returnPassword(int index);
};
