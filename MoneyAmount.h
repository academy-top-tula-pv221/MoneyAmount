#include <iostream>
#pragma once
class MoneyAmount
{
	int rub;
	int kop;

	// сокращение суммы - делаем копейки до 100
	// вызываем после ввода и вычислений
	void CutKop();

public:

	MoneyAmount();
	MoneyAmount(int rub, int kop);
	MoneyAmount(int kop);
	MoneyAmount(double mount);

	friend std::ostream& operator<< (std::ostream& out, const MoneyAmount& mount);
	friend std::istream& operator>> (std::istream& in,  MoneyAmount& mount);

	void SetAmount(int rub, int kop);
	void SetAmount(int kop);
	void SetAmount(double mount);

	int GetRub();
	int GetKop();

	friend bool operator<(MoneyAmount m1, MoneyAmount m2);
	friend bool operator<(int kop, MoneyAmount m);
	friend bool operator<(MoneyAmount m, int kop);
	friend bool operator<(double amount, MoneyAmount m);
	friend bool operator<(MoneyAmount m, double amount);

	friend MoneyAmount operator+(MoneyAmount m1, MoneyAmount m2);
	friend MoneyAmount operator+(int kop, MoneyAmount m);
	friend MoneyAmount operator+(MoneyAmount m, int kop);
	friend MoneyAmount operator+(double amount, MoneyAmount m);
	friend MoneyAmount operator+(MoneyAmount m, double amount);


	friend MoneyAmount operator*(MoneyAmount m, int count);
	friend MoneyAmount operator*(MoneyAmount m, double procent);

	friend MoneyAmount operator/(MoneyAmount m, int count);

	friend MoneyAmount operator%(MoneyAmount m, int procent);

	MoneyAmount operator++();
	MoneyAmount operator++(int);
};

