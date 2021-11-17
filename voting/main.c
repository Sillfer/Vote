#include<stdio.h>

    char *President[][2]={
    {"Milena","Heating engineer"},
    {"Lerato","Bank clerk"},
    {"Marcelle","Pop star"},
    {"Brigitta","Care assistant"},
    {"Willihad","Business consultant"},
    {"Thelonius","Anthropologist"},
    {"Notus","Lawyer"}
    };

    char *Voter[][2]={
    {"Maximilian","194UIME8B0"},
    {"Arthur","3TMCIXKEHJ"},
    {"Ninurta","IG5AUJ374B"},
    {"Frederick","S2ZQZ9MF5N"},
    {"Murchadh","2ER8Z7DOE8"},
    {"Joanne","NXI5UIMHL6"},
    {"Kadriye","CJPUQ4HAHU"},
    {"Adhara","NPHM8C1374"},
    {"Avilius","PUC1B51IV9"},
    {"Marzio","DIEMFMMZMP"},
    {"Ajit","SL3QGEE38M"},
    {"Ondina","6CU5BQZ4YX"},
    {"Serhat","EZKE915K3H"},
    {"Antonia","PLOEGBVOQ1"}
    };
int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, votesCount5=0, votesCount6=0, votesCount7=0;

void main(){
    int choice;
    printf("\n\t*********** Choose your candidate ***********\n\n");
    printf("\n 1.%s, %s.\n", President[0][0], President[0][1]);
    printf("\n 2.%s, %s.\n", President[1][0], President[1][1]);
    printf("\n 3.%s, %s.\n", President[2][0], President[2][1]);
    printf("\n 4.%s, %s.\n", President[3][0], President[3][1]);
    printf("\n 5.%s, %s.\n", President[4][0], President[4][1]);
    printf("\n 6.%s, %s.\n", President[5][0], President[5][1]);
    printf("\n 7.%s, %s.\n", President[6][0], President[6][1]);

    printf("\n\n***********Input your choice***********\n\n");
    scanf("%d", &choice);

    switch (choice){
        case 1:votesCount1++;
        break;
        case 2:votesCount2++;
        break;
        case 3:votesCount3++;
        break;
        case 4:votesCount4++;
        break;
        case 5:votesCount5++;
        break;
        case 6:votesCount6++;
        break;
        case 7:votesCount7++;
        break;
        default: printf("\n ****Wrong choice please try again****");
        getchar();
    }
    printf("\n Thank you for voting !!");
}
/*
int main (){
    int choice;

    do{
        printf("")



    }



}


*/








































































