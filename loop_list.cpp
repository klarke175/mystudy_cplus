
#include "./loop_list.h"

#define LIST_IS_EMPTY -1

/*
//���캯��
loop_list::loop_list(int list_len):m_list_len(list_len)
{
    m_list_data = NULL;
    //m_list_len  = list_len;
    m_head = LIST_IS_EMPTY;
    m_tail = LIST_IS_EMPTY;

    cout << "list len = " << m_list_len << endl;
}

int loop_list::init()
{
    if(NULL != m_list_data)
    {
        cout << "�����Ѿ���ʼ���� " << endl;
        return 0;
    }

    m_list_data = new string[m_list_len];
    if(NULL == m_list_data)
    {
        cout << "�ڴ�����ʧ�ܣ�" << endl;
        return -1;
    }

    return 0;
}
*/




loop_list::loop_list(int list_len):m_list_len(list_len)
{
    m_list_data = new string[m_list_len]; //����ʹ��ʱ����ָ���Ƿ�Ϊ��

    m_head = LIST_IS_EMPTY;
    m_tail = LIST_IS_EMPTY;

    cout << "list len = " << m_list_len << endl;
}

loop_list::~loop_list()
{
    if(NULL != m_list_data)
        delete []m_list_data;

    cout << "list delete " << endl;
}



void loop_list::flag_move(int& flag)
{
    if((m_list_len - 1) == flag)
    {
        flag = 0;
    }
    else
    {
        flag++;
    }
}


void loop_list::get_tail()
{

    if((LIST_IS_EMPTY == m_head) && (LIST_IS_EMPTY == m_tail))// ��ʼ��״̬
    {
        m_head = 0;
        m_tail = 0;
    }
    else if(0 == m_head)  //��һ��ѭ��
    {
        if(m_tail == (m_list_len - 1)) //ѭ�����е�һ������
        {
            m_head = 1;
            m_tail = 0;
        }
        else // ��һ����֮ǰ���
        {
            m_tail++;
        }
    }
    else
    {
        flag_move(m_head);
        flag_move(m_tail);
    }
}


int loop_list::add(string list_data)
{

    get_tail();

    m_list_data[m_tail] = list_data;

    return 0;
}


void loop_list::show_list()
{
    int i;

    cout << endl << "#------------------------#"<< endl;
    cout << "HEAD = "<< m_head << endl;
    cout << "TAIL = "<< m_tail << endl << endl;

    if((LIST_IS_EMPTY == m_head) && (LIST_IS_EMPTY == m_tail))
    {
        cout << "list is empty!" << endl;
    }
    else if((0 == m_head) && (0 == m_tail))
    {
        cout << m_list_data[0] << endl;
    }
    else
    {
        if(0 == m_head)
        {
            for(i = 0;i <= m_tail;i++)
            {
                cout << "NODE" << i << ":" << m_list_data[i] << endl;
            }
        }
        else
        {
            for(i = m_head;i < m_list_len ;i++)
            {
                cout << "NODE" << i - m_head << ":" << m_list_data[i] << endl;
            }

            for(i = 0;i <= m_tail ;i++)
            {
                cout << "NODE" << ((m_list_len - m_head + 1 + i)) << ":" << m_list_data[i] << endl;
            }
        }
    }
}

void loop_list::get_list_len()
{
    cout << "const list_len = " << m_list_len << endl;
}







