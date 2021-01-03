#include <string.h>
#include <stdio.h>

int main(){
    int suara;
    printf("Apakah anda ingin menyalakan kipas? (ya (1)/tidak(2)) \n");
    scanf("%d", &suara);
    if(suara == 1){
        int suhu;
        printf("Suhu ruangan saat ini: ");
        scanf("%d", &suhu);
        if(suhu == 21 || suhu == 22 || suhu == 23 || suhu == 24){
            printf("Kipas menyala lambat\n");
        }
        else if(suhu == 25 || suhu == 26 || suhu == 27 || suhu == 28){
            printf("Kipas menyala normal\n");
        }
        else if(suhu == 29 || suhu == 30 || suhu == 31 || suhu == 32 || suhu == 33 || suhu == 34){
            printf("Kipas menyala cepat\n");
        }
        else if(suhu <= 20){
            printf("Suhu dingin, harap matikan kipas angin anda! \n");
        }
        else{
            printf("Kipas menyala cepat sekali\n");
        }
    }else {
        printf("Anda tidak sedang menyalakan kipas \n");
    }
    return 0;
}
