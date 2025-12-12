#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    int iNum1, iNum2;
    int iVal1, iVal2;
    printf("Input the first integer number\r\n");
    scanf_s("%d", &iNum1);
    printf("Input the second integer number\r\n");
    scanf_s("%d", &iNum2);
    iVal1 = abs(iNum1);
    iVal2 = abs(iNum2);
    if (iVal1 > 0 && iVal2 > 0)
    {
        int nLcm;
        int iVal3 = iVal1;
        int iVal4 = iVal2;
        while (iVal1 != iVal2)
        {
            if (iVal1 > iVal2)
            {
               iVal1 -= iVal2;
               iVal3 += iVal4;
            }
            else
            {
               iVal2 -= iVal1;
               iVal4 += iVal3;
            }

        }
        nLcm = (iVal3 + iVal4) / 2;
        printf("The Lcm of the numbers %d and %d is %d\r\n", iNum1, iNum2, nLcm);
    }
    else
    {
        printf("The numbers should not be equal 0\r\n");
    }
    _fgetchar();
    fgetc(stdin);
}
