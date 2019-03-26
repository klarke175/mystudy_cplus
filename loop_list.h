#include <iostream>
#include <stdlib.h>

using namespace std;

class loop_list
{
public:
    loop_list(int list_len=6);
    ~loop_list();

    int init();
    int add(string);
    void show_list();
    void get_list_len();

private:
    string *m_list_data;
    const int m_list_len;

    int m_head;
    int m_tail;

    void flag_move(int& flag);
    void get_tail();
};

class abc
{
    public:
        abc();
        ~abc();
    protected:

    private:

};
