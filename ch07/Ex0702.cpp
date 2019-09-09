/*
����2.6.2�ڵ���ϰ�б�д��һ��Sales_data�࣬������������combine������isbn��Ա��
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
