/*�����^�C���p�X���[�h����~���O�C������*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(void){
    srand((unsigned)time(NULL));
    int pass[5];
    int login[5];
    
    for(int i =0; i <5; i++){
        pass[i] =rand() %10;
    }
    printf("pass:");
    for(int i =0; i <5; i++){
        printf("%d",pass[i]);
    }
    printf("\n");

    printf("�p�X���[�h����͂��Ă��������B\n");
    for(int j =0; j <5; j++){
        scanf("%d",&login[j]);
    }

    int result =memcmp(pass, login, 20);
    if(result ==0){
        printf("���O�C������\n");
    }else{
        printf("���O�C�����s\n");
    }
    return 0;
}
