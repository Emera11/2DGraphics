#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char buffer[10]{'\0'};
    char Old_buffer[10]{'\0'};

    const int k = (sizeof(buffer) / sizeof(buffer[0]));
    printf("��������͂��Ă�������...\n\n");

 
     fgets(buffer, sizeof(buffer), stdin)


    int Num = 0;

    memcpy(Old_buffer, buffer, sizeof(buffer));


    

    while (buffer[Num] != '\0')
    {

        buffer[Num]++;
        ++Num;
    }

    printf("�O�̕���:%s\n", Old_buffer);
    printf("���炵������:%s\n", buffer);


    /*for (int i = 0; i < k; ++i)
    {
        printf("%c\n", buffer[i]);
    }*/

    



    system("PAUSE");

    return 0;
}