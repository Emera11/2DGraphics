#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(void)
{

    int kouho_prime = 1; //素数の候補となる変数
    int kouho_divisor; //約数の候補となる変数s
    int addition = 3; //素数の候補
    int found = 0; //約数の発見を記憶するフラグ変数


    /*for (kouho_prime = 2; kouho_prime < 100; ++kouho_prime)
    {
        found = 0;
        for (kouho_divisor = 2; kouho_divisor < kouho_prime; ++kouho_divisor)
        {
            if (kouho_prime % kouho_divisor == 0)
            {
                found = 1;
            }
        }

        if (found == 0)
        {
            cout << kouho_prime << endl;
        }
    }*/

    while (found == 0)
    {
        addition = addition * 10;
        kouho_prime = kouho_prime + addition; //素数の候補

            found = 0;
            for (kouho_divisor = 2; kouho_divisor < kouho_prime; ++kouho_divisor)
            {
                if (kouho_prime % kouho_divisor == 0)
                {
                    found = 1;
                }
            }
    }

    cout << kouho_prime << endl;
    

    system("PAUSE");

    return 0;
}