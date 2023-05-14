#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int boyut, eleman[1000];
    printf("Dizinin boyutu girinin : "),scanf("%i",&boyut);
    printf("Elemanlari giriniz :\n");
    for (int i=0; i< boyut; i++)
        scanf("%i",&eleman[i]);
    int SearchKey;
    printf("Aranacak olan elemani girinizi : "),scanf("%i",&SearchKey);
    int sonuc;
    bool test = false;
    for (int i = 0; i < boyut; i ++)
    {
        if (SearchKey == eleman[i])
        {
            test = true;
            sonuc = i;
        }
    }
    if (test)
        printf("Aradigin sayi %d. sirada", sonuc+=1);
    else
        printf("Aradigin sayi yoktur");
    return 0;
}
