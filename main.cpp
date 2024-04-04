#include <iostream>
#include <iomanip>
using namespace std;


#define Q 1
int main(void)
{

    //–â‘è10
    /*
    int input_num{0};
    std::cin >> input_num;
    std::cout << (input_num * 2) << std::endl;
    double input_value{0};

    std::cin >> input_value;
    std::cout << (input_value / 3.0) << std::endl;
    */

    //–â‘è11
    /*
    int input_num{0};

    cin >> input_num;

    if ((input_num % 2) == 1)
    {
        cout << "Šï”" << endl;
    }
    else if ((input_num % 3) == 0 && (input_num % 2) == 0)
    {
        cout << "‹ô”‚©‚Â3‚ÅŠ„‚èØ‚ê‚é" << endl;
    }
    else
    {
        cout << "‚»‚Ì‘¼" << endl;
    }
    */

    //–â‘è13
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

    //–â‘è14
    /*
    int input_num{0};
    cin >> input_num;

    switch (input_num)
    {
    case 4: cout << "G‚Å‚·" << endl;  break;
    case 3: cout << "—D‚Å‚·" << endl; break;
    case 2: cout << "—Ç‚Å‚·" << endl; break;
    case 1: cout << "‰Â‚Å‚·" << endl; break;
    default:
        cout << "•s‰Â‚Å‚·";
        break;
    }*/

    //–â‘è15
    /*
    int input_num{ 0 };

    cout << "7‚Ì”{”“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;

    cin >> input_num;
    while (input_num % 7 != 0)
    {
        cout << "7‚Ì”{”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ" << endl<< endl;

        cin >> input_num;
        cout  << endl;
    }

    cout << "7‚Ì”{”‚Å‚·" << endl;
    */

    //–â‘è16
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

    //–â‘è17
    /*int input_num{0};

    cin >> input_num;

    while (input_num != 999)
    {

        if ((50 > input_num && input_num % 2 == 0) ||
            (50 < input_num && input_num % 2 != 0))
        {
            cout << "ğŒB‚ğ–‚½‚³‚¸‚ÉğŒA‚ğ–‚½‚µ‚Ü‚·B" << endl;
        }

        else if ((input_num % 3 == 0 || input_num % 5 == 0) &&
            (input_num < 20 || input_num > 40))
        {
            cout << "ğŒA‚ğ–‚½‚³‚¸‚ÉğŒB‚ğ–‚½‚µ‚Ü‚·B" << endl;
        }

        else
        {
            cout << "ğŒA‚àğŒB‚à–‚½‚µ‚Ü‚¹‚ñB" << endl;
        }
        cin >> input_num;
    }*/
    //–â‘è18
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

    //–â‘è19
    /*
    double width_U = 0.0;
    double width_D = 0.0;
    double height  = 0.0;
    double area{ 0.0 };
    cout << "ã’ê‚ÍH" << endl;
    cin >> width_U;
    cout << "‰º’ê‚ÍH" << endl;
    cin >> width_D;
    cout << "‚‚³‚ÍH" << endl;
    cin >> height;
    area = ((width_U + width_D) * height / 2.0);

    cout << "‘äŒ`‚Ì–ÊÏ‚Í" << area << endl;
    */

    //–â‘è20
    /*
    int input_num{0};
    cout << "“ú‚É‚¿‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢..." << endl;
    cin >> input_num;
    while (input_num <= 31 && input_num >= 1)
    {
        switch ((input_num % 7))
        {
        case 0:
            cout << "1Œ" << input_num << "“ú‚Í“y—j“ú‚Å‚·" << endl;
            break;
        case 1:
            cout << "1Œ" << input_num << "“ú‚Í“ú—j“ú‚Å‚·" << endl;
            break;
        case 2:
            cout << "1Œ" << input_num << "“ú‚ÍŒ—j“ú‚Å‚·" << endl;
            break;
        case 3:
            cout << "1Œ" << input_num << "“ú‚Í‰Î—j“ú‚Å‚·" << endl;
            break;
        case 4:
            cout << "1Œ" << input_num << "“ú‚Í…—j“ú‚Å‚·" << endl;
            break;
        case 5:
            cout << "1Œ" << input_num << "“ú‚Í–Ø—j“ú‚Å‚·" << endl;
            break;
        case 6:
            cout << "1Œ" << input_num << "“ú‚Í‹à—j“ú‚Å‚·" << endl;
            break;
        default:
            break;
        }

        cout << "“ú‚É‚¿‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢..." << endl;
        cin >> input_num;
    }
    */

    //–â‘è21
    /*
    int a{ 1 };
    int b{ 2 };
    int tmp{ 0 };
    cout << "ŒğŠ·‘O a: " <<a << endl;
    cout << "ŒğŠ·‘O b: " <<b << endl;

    tmp = a;
    a = b;
    b = tmp;

    cout << "ŒğŠ·Œã a: " << a << endl;
    cout << "ŒğŠ·Œã b: " << b << endl;
    */
    //–â‘è22
    /*
    int a{ 10 };
    int b{ 5 };

    cout << "ŒğŠ·‘O a: " << a << endl;
    cout << "ŒğŠ·‘O b: " << b << endl;


    b = b - a;
    a = b + a;
    b = a - b;

    cout << "ŒğŠ·Œã a: " << a << endl;
    cout << "ŒğŠ·Œã b: " << b << endl;
    */
    /*
    double tall{ 0.0 };
    double weight{ 0.0 };
    cout << "g’·‚ğcm’PˆÊ‚Å“ü—Í..." << endl;
    cin >> tall;
    cout << "‘Ìd‚ğkg’PˆÊ‚Å“ü—Í..." << endl;
    cin >> weight;
    double bmi{ 0.0 };


    bmi = weight / ((tall / 100) * (tall / 100));

    cout << "g’·‚Í" << tall << "cm" << "‘Ìd‚Í" << weight << "kg" << "BMI‚Í" << bmi << "‚Å‚·" << endl;

    if (bmi > 30.0)
        cout << "”ì–‚É’ˆÓ" << endl;
    else if (bmi < 18.0)
        cout << "‚â‚¹‚·‚¬‚É’ˆÓ" << endl;
        */

        //–â‘è24
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
        cout << "”z—ñ‚ÌÅ‘å’l‚Í"  << old_num << endl;
        */

        //–â‘è25
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
        cout << "”z—ñ‚Ì•½‹Ï’l‚Í" << ave / ArrayNum << endl;
        */

        //–â‘è26
        /*
        int input_num{0};
        int X{ 0 };
        int i{ 0 };

        cin >> input_num;

        cout << "100ˆÈ‰º‚Ì" << input_num << "‚Ì”{” :";
        for (i = 100; i > input_num; --i)
        {
            if (i % input_num == 0)
            {
                cout << i << ",";
            }
        }
        cout << endl;

        cout << "100ˆÈ‰º‚Ì" << input_num << "‚Ì–ñ” :";
        for (i = input_num-1; i > 0; --i)
        {
            if (input_num % i == 0)
            {
                cout << i << ",";
            }
        }
        */

    //–â‘è28
    int tsuru{ 0 }, kame{0};

    int input_head{0};
    int input_leg{0};

    cout << "“ª‚Ì‘”" << endl;
    cin >> input_head;
    cout << "‘«‚Ì‘”" << endl;
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
        cout << "“š‚¦‚Í‚ ‚è‚Ü‚¹‚ñ" << endl;
    }
    else {
        cout << "ƒcƒ‹F" << tsuru << ", ƒJƒ:" << kame << endl;
    }


    system("PAUSE");
    return 0;
}
