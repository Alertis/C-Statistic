#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int type=0,arrSize,tableX,tableY;
float arithAvr;

int main()
{
   printf("\n Dizinin boyunu girin: ");
    scanf("%d",&arrSize);
    int arrData[arrSize];
    for(int i=0; i<arrSize; i++){
        printf("\n Dizinin %d. elemanini giriniz: ",i+1);
        scanf("%d",&arrData[i]);
    }
    while(type==0){
        int tmp;
        chooseMenu(arrData);
        printf("\n [0] Bitir [1] Devam");
        scanf("%d",&tmp);
        if(tmp==0)
            type=1;

    }
    return 0;
}
