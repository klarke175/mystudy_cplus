#include <string>
#include <iostream>

using namespace std;

enum gender
{
	male ,
	female
};

class person
{
	public:
		person();
		person(int);
		~person();

		void eat();
		void aging();
		void info();

		string m_name;
		int m_gender;
		int m_age;
		int m_weight;
		int m_height;
};
