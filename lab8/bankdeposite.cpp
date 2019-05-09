#include "bankdeposite.h"

double BankDeposite::calculateIncome(double days, int daysInYear)
{
    return (money * percent * days) / daysInYear;
}

//зазвичай, використовуэться для ініціалізації констант. тут просто як приклад
BankDeposite::BankDeposite(): money(0), months(0), percent(0), income(0) {}

void BankDeposite::startDeposite(double _money, int _months, double _percent)
{
    //це все можна робити і через this
    money = _money;
    months = _months;
    percent = _percent;
}

double BankDeposite::takeMoneyNow(int daysFromStart)
{
    income = calculateIncome(daysFromStart);
    return income;
}

double BankDeposite::endDeposite()
{
    income = calculateIncome(months);
    return income;
}