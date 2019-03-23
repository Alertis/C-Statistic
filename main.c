#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int type=0,arrSize,tableX,tableY;
float arithAvr;

int chooseMenu (int data[]);
int modeCalculate (int data[]);
int medianCalculate (int data[]);
int arithAvrCalculate (int data[]);
int geoAvrCalculate (int data[]);
int harmonicAvrCalculate (int data[]);
int sDCalculate (int data[]);
int sortArray (int data[]);

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

int chooseMenu( int data[]){
    int menuId;
    printf("\n Lutfen Menuden Islem secin \n");
    printf("\n \t [1] Mod Hesapla");
    printf("\n \t [2] Medyan Hesapla");
    printf("\n \t [3] Aritmatik Ortalama Hesapla");
    printf("\n \t [4] Geometrik Ortalama Hesapla");
    printf("\n \t [5] Harmonik Ortalama Hesapla");
    printf("\n \t [6] Standart Sapma Hesapla");
    printf("\n \n Sectiginiz islemin numarasini giriniz: ");
    scanf("%d",&menuId);
    switch(menuId){
        case 1: modeCalculate(data);
           break;
        case 2: medianCalculate(data);
           break;
        case 3: arithAvrCalculate(data);
           break;
        case 4: geoAvrCalculate(data);
           break;
        case 5: harmonicAvrCalculate(data);
           break;
        case 6: sDCalculate(data);
           break;
        default:
            printf("Lutfan gecerli bir menu giriniz...");
            chooseMenu(data);
           break;

    }
}
