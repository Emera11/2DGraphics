#include <iostream>
#include <iomanip>
using namespace std;


#define Q 1
int main(void)
{

    //���10
    /*
    int input_num{0};
    std::cin >> input_num;
    std::cout << (input_num * 2) << std::endl;
    double input_value{0};

    std::cin >> input_value;
    std::cout << (input_value / 3.0) << std::endl;
    */

    //���11
    /*
    int input_num{0};

    cin >> input_num;

    if ((input_num % 2) == 1)
    {
        cout << "�" << endl;
    }
    else if ((input_num % 3) == 0 && (input_num % 2) == 0)
    {
        cout << "��������3�Ŋ���؂��" << endl;
    }
    else
    {
        cout << "���̑�" << endl;
    }
    */

    //���13
    /*
    for (int i = 11; i <= 19; ++i)
    {
        cout << i << endl;
    }

    cout  << endl;

    for (int i = 20; i >= 10; i -= 2)
    {
        cout << i << endl;
    }

    cout << endl;

    for (int i = 1; i < 65; i += i)
    {
        cout << i << endl;
    }
    */

    //���14
    /*
    int input_num{0};
    cin >> input_num;

    switch (input_num)
    {
    case 4: cout << "�G�ł�" << endl;  break;
    case 3: cout << "�D�ł�" << endl; break;
    case 2: cout << "�ǂł�" << endl; break;
    case 1: cout << "�ł�" << endl; break;
    default:
        cout << "�s�ł�";
        break;
    }*/

    //���15
    /*
    int input_num{ 0 };

    cout << "7�̔{�����͂��Ă�������" << endl;

    cin >> input_num;
    while (input_num % 7 != 0)
    {
        cout << "7�̔{���ł͂���܂���" << endl<< endl;

        cin >> input_num;
        cout  << endl;
    }

    cout << "7�̔{���ł�" << endl;
    */

    //���16
    /*
    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= 9; ++j)
        {
            cout << i << "*" << j << " " << "=" <<  i*j << "\t";
        }
        cout << endl;
        cout << endl;
    }
    */

    //���17
    /*int input_num{0};

    cin >> input_num;

    while (input_num != 999)
    {

        if ((50 > input_num && input_num % 2 == 0) ||
            (50 < input_num && input_num % 2 != 0))
        {
            cout << "����B�𖞂������ɏ���A�𖞂����܂��B" << endl;
        }

        else if ((input_num % 3 == 0 || input_num % 5 == 0) &&
            (input_num < 20 || input_num > 40))
        {
            cout << "����A�𖞂������ɏ���B�𖞂����܂��B" << endl;
        }

        else
        {
            cout << "����A������B���������܂���B" << endl;
        }
        cin >> input_num;
    }*/
    //���18
    /*
    int num{0};

    int input_tmp{ 0 };

    cin >> input_tmp;
    num += input_tmp;

    cout << "num:" << num << endl;

    while (num <= 100)
    {
        cin >> input_tmp;
        num += input_tmp;
        cout << "num:" << num << endl;
    }
    */

    //���19
    /*
    double width_U = 0.0;
    double width_D = 0.0;
    double height  = 0.0;
    double area{ 0.0 };
    cout << "���́H" << endl;
    cin >> width_U;
    cout << "����́H" << endl;
    cin >> width_D;
    cout << "�����́H" << endl;
    cin >> height;
    area = ((width_U + width_D) * height / 2.0);

    cout << "��`�̖ʐς�" << area << endl;
    */

    //���20
    /*
    int input_num{0};
    cout << "���ɂ�����͂��Ă�������..." << endl;
    cin >> input_num;
    while (input_num <= 31 && input_num >= 1)
    {
        switch ((input_num % 7))
        {
        case 0:
            cout << "1��" << input_num << "���͓y�j���ł�" << endl;
            break;
        case 1:
            cout << "1��" << input_num << "���͓��j���ł�" << endl;
            break;
        case 2:
            cout << "1��" << input_num << "���͌��j���ł�" << endl;
            break;
        case 3:
            cout << "1��" << input_num << "���͉Ηj���ł�" << endl;
            break;
        case 4:
            cout << "1��" << input_num << "���͐��j���ł�" << endl;
            break;
        case 5:
            cout << "1��" << input_num << "���͖ؗj���ł�" << endl;
            break;
        case 6:
            cout << "1��" << input_num << "���͋��j���ł�" << endl;
            break;
        default:
            break;
        }

        cout << "���ɂ�����͂��Ă�������..." << endl;
        cin >> input_num;
    }
    */

    //���21
    /*
    int a{ 1 };
    int b{ 2 };
    int tmp{ 0 };
    cout << "�����O a: " <<a << endl;
    cout << "�����O b: " <<b << endl;

    tmp = a;
    a = b;
    b = tmp;

    cout << "������ a: " << a << endl;
    cout << "������ b: " << b << endl;
    */
    //���22
    /*
    int a{ 10 };
    int b{ 5 };

    cout << "�����O a: " << a << endl;
    cout << "�����O b: " << b << endl;


    b = b - a;
    a = b + a;
    b = a - b;

    cout << "������ a: " << a << endl;
    cout << "������ b: " << b << endl;
    */
    /*
    double tall{ 0.0 };
    double weight{ 0.0 };
    cout << "�g����cm�P�ʂœ���..." << endl;
    cin >> tall;
    cout << "�̏d��kg�P�ʂœ���..." << endl;
    cin >> weight;
    double bmi{ 0.0 };


    bmi = weight / ((tall / 100) * (tall / 100));

    cout << "�g����" << tall << "cm" << "�̏d��" << weight << "kg" << "BMI��" << bmi << "�ł�" << endl;

    if (bmi > 30.0)
        cout << "�얞�ɒ���" << endl;
    else if (bmi < 18.0)
        cout << "�₹�����ɒ���" << endl;
        */

        //���24
        /*
        int input_num[10]{ 0 };
        int i{ 0 };
        int old_num{ 0 };

        while (i < 10)
        {
            cin >> input_num[i];
            if (old_num <= input_num[i])
            {
                old_num = input_num[i];
            }
            ++i;
        }


        for (int i = 0; i < (sizeof(input_num) / sizeof(input_num[0])); ++i)
        {
            cout << "[" << i+1 << "]" << "=" << input_num[i] << endl;
        }

        cout <<  endl;
        cout << "�z��̍ő�l��"  << old_num << endl;
        */

        //���25
        /*
        double input_num[10]{ 0 };
        int i{ 0 };
        double ave{ 0 };
        int ArrayNum = (sizeof(input_num) / sizeof(input_num[0]));

        while (i < ArrayNum)
        {
            cin >> input_num[i];
            ave += input_num[i];
            ++i;
        }


        for (int i = 0; i < ArrayNum; ++i)
        {
            cout << "[" << i + 1 << "]" << "=" << input_num[i] << endl;
        }

        cout << endl;
        cout << "�z��̕��ϒl��" << ave / ArrayNum << endl;
        */

        //���26
        /*
        int input_num{0};
        int X{ 0 };
        int i{ 0 };

        cin >> input_num;

        cout << "100�ȉ���" << input_num << "�̔{�� :";
        for (i = 100; i > input_num; --i)
        {
            if (i % input_num == 0)
            {
                cout << i << ",";
            }
        }
        cout << endl;

        cout << "100�ȉ���" << input_num << "�̖� :";
        for (i = input_num-1; i > 0; --i)
        {
            if (input_num % i == 0)
            {
                cout << i << ",";
            }
        }
        */

    //���28
    int tsuru{ 0 }, kame{0};

    int input_head{0};
    int input_leg{0};

    cout << "���̑���" << endl;
    cin >> input_head;
    cout << "���̑���" << endl;
    cin >> input_leg;


    for (tsuru = 0; tsuru < input_head + 1; ++tsuru)
    {
        kame = input_head - tsuru;
        if ((tsuru * 2) + (kame * 4) == input_leg) {
            break;
        }
    }

    if (tsuru == input_head + 1)
    {
        cout << "�����͂���܂���" << endl;
    }
    else {
        cout << "�c���F" << tsuru << ", �J��:" << kame << endl;
    }


    system("PAUSE");
    return 0;
}
