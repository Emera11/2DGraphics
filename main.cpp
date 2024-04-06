#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
#define E 0.000001 

double my_sqrt(double a)
{
    a = a < 0 ? -a : a;
    double x = a / 2;
    while (1) {
        double e = x * x - a;
        double t = e < 0 ? -e : e;
        if (t < E) return x;
        x -= e / (x * 2);
    }
}

int main(void)
{    

    /*double input_value[5]{0.0};

    double common{0.0};
    int i = 0;

    for (i = 0; i < 5; ++i)
    {
        cin >> input_value[i];
    }
    */

   /* common = (input_value[0 + 1] / input_value[0]);
    cout << endl;

    for (i = 0; i < 4; ++i)
    {
        cout << common << endl;

        if ((input_value[i+1] / input_value[i]) != common)
        {
            break;
        }
    }

    if (i == 4)
    {
        cout << "“™”ä”—ñ‚Å‚·" << endl;
    }
    else
    {
        cout << "“™”ä”—ñ‚Å‚Í‚ ‚è‚Ü‚¹‚ñ" << endl;
    }*/

    /*for (i = 0; i < 3; i++)
    {
        if (input_value[i] / input_value[i + 1] != input_value[i + 1] / input_value[i + 2])
        {
            //cout << input_value[i] / input_value[i + 1] << endl;
            Hantei = 0.0;
        }
        else
        {
            cout << input_value[i] / input_value[i + 1] << endl;
        }
    }

    if (Hantei == 1.0) {
        cout << "“™”ä”—ñ‚Å‚·" << endl;
    }
    else
    {
        cout << "“™”ä”—ñ‚¶‚á‚È‚¢‚Å‚·" << endl;
    }*/

    /*const double pai = 3.14159265;
    double min = 0.0;

    int ii{0};
    int jj{0};

    double dif;
    double dif_min = 999.9;


    for (double i = 100.0; i < 1000; i+=1.0)
    {
        for (double j = 100.0; j < 1000; j += 1.0)
        {
           
            if ((i / j) >= min && (i / j) <= pai)
            {
                
                ii = i;
                jj = j;
                min = (i / j);
            }

            


        }
    }*/


    //cout << "ˆê”ÔƒpƒC‚É‹ß‚¢‚Ì‚Í" << ii << "/" << jj << "‚Ì" << min << endl;


    
    /*int a = 0;
    int b = 0;
    int tmp = 0;

    cin >> a;
    cin >> b;
    */
    /*while (a > 0)
    {
        tmp = b % a;
        b = a;
        a = tmp;
    }
    */

    /*
    while (a % b != 0)
    {
        tmp = (a % b);
        a = b;
        b = tmp;
    }

    cout << "Å‘åŒö–ñ”" << b << endl;
    */

    
    int array[3][3]{ {1,2,3},{4,5,6},{7,8,9} };

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << array[(j+1) % 3][2-i];
        }
        cout << endl;
    }



    system("PAUSE");

    return 0;
}