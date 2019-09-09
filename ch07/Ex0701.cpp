/*
使用2.6.1节定义的Sales_data类为1.6节的交易处理程序编写一个新版本。
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