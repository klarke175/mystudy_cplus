
#include <iostream>
#include <string>
#include "./person.h"
#include "./loop_list.h"
//#include "module.h"

using namespace std;

int loop_list_test(void)
{
    loop_list list1(10);

    list1.init();
    list1.show_list();

    list1.add("aaa");
    list1.show_list();

    list1.add("bbb");
    list1.show_list();

    list1.add("ccc");
    list1.show_list();

    list1.add("ddd");
    list1.show_list();

    list1.add("eee");
    list1.show_list();

    return 0;
}

int loop_list_test2(void)
{
    string temp;

    loop_list list1(10);  //实例化
    list1.init();     //初始化

    list1.show_list();

    cout << "sizeof() = " << sizeof(list1) << endl;

    cout << "please input info:   (quit: ~ )" << endl;

    while("~" != temp)
    {
        cout << "> ";
        cin >> temp;

        list1.add(temp);
        list1.show_list();
    }

    return 0;
}



void person_test()
{
    person p1;

    p1.m_name = "jerry";
    p1.m_age  = 20;

    p1.aging();
    p1.eat();

    p1.info();

    person p2(30);
    p2.info();

    cout << sizeof(p2) << endl;


    string a = "hello123456789123456789123456789";
    cout << endl << sizeof(a) << endl;
    cout << a << endl;
}

extern void vector_test();

int main()
{
    // person p1;
    // loop_list list1(100);

    // list1.get_list_len();

    // cout << "sizeof(person) = " << sizeof(p1) << endl;
    // cout << "sizeof(loop_list) = " << sizeof(list1) << endl;
    // cout << "sizeof(int) = " << sizeof(int) << endl;

    //loop_list_test2();

	vector_test();

    return 0;
}
