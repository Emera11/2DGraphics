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
        cout << "���䐔��ł�" << endl;
    }
    else
    {
        cout << "���䐔��ł͂���܂���" << endl;
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
        cout << "���䐔��ł�" << endl;
    }
    else
    {
        cout << "���䐔�񂶂�Ȃ��ł�" << endl;
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


    //cout << "��ԃp�C�ɋ߂��̂�" << ii << "/" << jj << "��" << min << endl;


  
    
    for (int i = 1; i < 100; ++i)
    {
        for (int j = 1; j < 100; ++j)
        {
            if (my_sqrt(((i * i) + (j * j))) < 100)
            {
                cout << i << "*" << j << endl;
            }
        }
        cout << endl;
     }

/*
int a, b, c;
        for (a = 1; a < 100; a++)
        {
            for (b = a; b < 100; b++)
            {
                for (c = b; c < 100; c++)
                {
                    if ((a * a) + (b * b) == c * c)
                    {
                        cout << a << "*" << b << "=" << c << endl;
                    }
                    
                }
            }
            cout << endl;
        }
*/

    system("PAUSE");

    return 0;
}