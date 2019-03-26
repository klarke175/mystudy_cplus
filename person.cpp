#include "./person.h"

using namespace std;

person::person()
{
    m_name = "Tom";
    m_gender = 0;
    m_age = 10;
    m_height = 150;
    m_weight = 60;

    cout << "执行构建函数" << endl << endl;
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
	cout << "姓名: " << m_name   << endl;
	cout << "性别: " << m_gender << endl;
	cout << "年龄: " << m_age    << endl;
	cout << "身高: " << m_height << endl;
	cout << "体重: " << m_weight << endl;
}
