/* P716 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Base1
{
    void print(int) const;
    Base1()
    {
        ival=1;
        dval=1.0;
        cval='1';
        id=&ival;
    }
protected:
    int ival;
    double dval;
    char cval;
private:
    int *id;
};
struct Base2
{
    void print(double) const;
    Base2()
    {
        fval=2.0;
        dval=2.0;
    }
protected:
    double fval;
private:
    double dval;
};
struct Derived:public Base1
{
    void print (string) const;
    Derived()
    {
        cout<<dval<<endl;
    }
protected:
    string sval;
    double dval;
};
struct MI :public Derived, public Base2
{
    void print (vector<double>);
    void print (int a){cout<<a<<endl;}
    void foo(double cval)
    {
        int dval;
    }
protected:
    int *ival;
    vector<double> dvec;
};
