/*
曾在2.6.2节的练习中编写了一个Sales_data类，请向这个类添加combine函数和isbn成员。
*/

#include <iostream>
#include <string>

using namespace std;

struct SalesData
{
    string isbn() const { return bookNo; }
    SalesData& combine(const SalesData);
    
    string bookNo;
    unsigned uints_sold = 0;
    double revenue = 0.0;
};

SalesData& SalesData::combine(const SalesData rhs)
{
    uints_sold += rhs.uints_sold;
    revenue += rhs.revenue;
    return *this;
}
