#include "./person.h"

using namespace std;

person::person()
{
    m_name = "Tom";
    m_gender = 0;
    m_age = 10;
    m_height = 150;
    m_weight = 60;

    cout << "ִ�й�������" << endl << endl;
}

person::person(int age)
{
    m_age = age;
}

person::~person()
{
	m_age = 0;
}

void person::aging()
{
	m_age++;
}

void person::eat()
{
	m_weight++;
}

void person::info()
{
	cout << "����: " << m_name   << endl;
	cout << "�Ա�: " << m_gender << endl;
	cout << "����: " << m_age    << endl;
	cout << "���: " << m_height << endl;
	cout << "����: " << m_weight << endl;
}
