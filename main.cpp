#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(void)
{

    int kouho_prime = 1; //‘f”‚ÌŒó•â‚Æ‚È‚é•Ï”
    int kouho_divisor; //–ñ”‚ÌŒó•â‚Æ‚È‚é•Ï”s
    int addition = 3; //‘f”‚ÌŒó•â
    int found = 0; //–ñ”‚Ì”­Œ©‚ğ‹L‰¯‚·‚éƒtƒ‰ƒO•Ï”


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
        kouho_prime = kouho_prime + addition; //‘f”‚ÌŒó•â

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