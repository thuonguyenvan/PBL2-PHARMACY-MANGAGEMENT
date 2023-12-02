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
    bool CheckExisted(const string &);
    void readCountFromFile(ifstream &);
};
