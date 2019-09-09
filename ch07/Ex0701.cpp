/*
ʹ��2.6.1�ڶ����Sales_data��Ϊ1.6�ڵĽ��״�������дһ���°汾��
*/

#include <iostream>
#include <string>
using namespace std;

struct SalesData
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    SalesData total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        SalesData trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += total.revenue;
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
    }
    else
    {
        cerr << "No data?" << endl;
        return -1;
    }

    return 0;
}