#include <iostream>
#include <iomanip>
using namespace std;


#define Q 1
int main(void)
{

    //問題10
    /*
    int input_num{0};
    std::cin >> input_num;
    std::cout << (input_num * 2) << std::endl;
    double input_value{0};

    std::cin >> input_value;
    std::cout << (input_value / 3.0) << std::endl;
    */

    //問題11
    /*
    int input_num{0};

    cin >> input_num;

    if ((input_num % 2) == 1)
    {
        cout << "奇数" << endl;
    }
    else if ((input_num % 3) == 0 && (input_num % 2) == 0)
    {
        cout << "偶数かつ3で割り切れる" << endl;
    }
    else
    {
        cout << "その他" << endl;
    }
    */

    //問題13
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

    //問題14
    /*
    int input_num{0};
    cin >> input_num;

    switch (input_num)
    {
    case 4: cout << "秀です" << endl;  break;
    case 3: cout << "優です" << endl; break;
    case 2: cout << "良です" << endl; break;
    case 1: cout << "可です" << endl; break;
    default:
        cout << "不可です";
        break;
    }*/

    //問題15
    /*
    int input_num{ 0 };

    cout << "7の倍数入力してください" << endl;

    cin >> input_num;
    while (input_num % 7 != 0)
    {
        cout << "7の倍数ではありません" << endl<< endl;

        cin >> input_num;
        cout  << endl;
    }

    cout << "7の倍数です" << endl;
    */

    //問題16
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

    //問題17
    /*int input_num{0};

    cin >> input_num;

    while (input_num != 999)
    {

        if ((50 > input_num && input_num % 2 == 0) ||
            (50 < input_num && input_num % 2 != 0))
        {
            cout << "条件Bを満たさずに条件Aを満たします。" << endl;
        }

        else if ((input_num % 3 == 0 || input_num % 5 == 0) &&
            (input_num < 20 || input_num > 40))
        {
            cout << "条件Aを満たさずに条件Bを満たします。" << endl;
        }

        else
        {
            cout << "条件Aも条件Bも満たしません。" << endl;
        }
        cin >> input_num;
    }*/
    //問題18
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

    //問題19
    /*
    double width_U = 0.0;
    double width_D = 0.0;
    double height  = 0.0;
    double area{ 0.0 };
    cout << "上底は？" << endl;
    cin >> width_U;
    cout << "下底は？" << endl;
    cin >> width_D;
    cout << "高さは？" << endl;
    cin >> height;
    area = ((width_U + width_D) * height / 2.0);

    cout << "台形の面積は" << area << endl;
    */

    //問題20
    /*
    int input_num{0};
    cout << "日にちを入力してください..." << endl;
    cin >> input_num;
    while (input_num <= 31 && input_num >= 1)
    {
        switch ((input_num % 7))
        {
        case 0:
            cout << "1月" << input_num << "日は土曜日です" << endl;
            break;
        case 1:
            cout << "1月" << input_num << "日は日曜日です" << endl;
            break;
        case 2:
            cout << "1月" << input_num << "日は月曜日です" << endl;
            break;
        case 3:
            cout << "1月" << input_num << "日は火曜日です" << endl;
            break;
        case 4:
            cout << "1月" << input_num << "日は水曜日です" << endl;
            break;
        case 5:
            cout << "1月" << input_num << "日は木曜日です" << endl;
            break;
        case 6:
            cout << "1月" << input_num << "日は金曜日です" << endl;
            break;
        default:
            break;
        }

        cout << "日にちを入力してください..." << endl;
        cin >> input_num;
    }
    */

    //問題21
    /*
    int a{ 1 };
    int b{ 2 };
    int tmp{ 0 };
    cout << "交換前 a: " <<a << endl;
    cout << "交換前 b: " <<b << endl;

    tmp = a;
    a = b;
    b = tmp;

    cout << "交換後 a: " << a << endl;
    cout << "交換後 b: " << b << endl;
    */
    //問題22
    /*
    int a{ 10 };
    int b{ 5 };

    cout << "交換前 a: " << a << endl;
    cout << "交換前 b: " << b << endl;


    b = b - a;
    a = b + a;
    b = a - b;

    cout << "交換後 a: " << a << endl;
    cout << "交換後 b: " << b << endl;
    */
    /*
    double tall{ 0.0 };
    double weight{ 0.0 };
    cout << "身長をcm単位で入力..." << endl;
    cin >> tall;
    cout << "体重をkg単位で入力..." << endl;
    cin >> weight;
    double bmi{ 0.0 };


    bmi = weight / ((tall / 100) * (tall / 100));

    cout << "身長は" << tall << "cm" << "体重は" << weight << "kg" << "BMIは" << bmi << "です" << endl;

    if (bmi > 30.0)
        cout << "肥満に注意" << endl;
    else if (bmi < 18.0)
        cout << "やせすぎに注意" << endl;
        */

        //問題24
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
        cout << "配列の最大値は"  << old_num << endl;
        */

        //問題25
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
        cout << "配列の平均値は" << ave / ArrayNum << endl;
        */

        //問題26
        /*
        int input_num{0};
        int X{ 0 };
        int i{ 0 };

        cin >> input_num;

        cout << "100以下の" << input_num << "の倍数 :";
        for (i = 100; i > input_num; --i)
        {
            if (i % input_num == 0)
            {
                cout << i << ",";
            }
        }
        cout << endl;

        cout << "100以下の" << input_num << "の約数 :";
        for (i = input_num-1; i > 0; --i)
        {
            if (input_num % i == 0)
            {
                cout << i << ",";
            }
        }
        */

    //問題28
    int tsuru{ 0 }, kame{0};

    int input_head{0};
    int input_leg{0};

    cout << "頭の総数" << endl;
    cin >> input_head;
    cout << "足の総数" << endl;
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
        cout << "答えはありません" << endl;
    }
    else {
        cout << "ツル：" << tsuru << ", カメ:" << kame << endl;
    }


    system("PAUSE");
    return 0;
}
