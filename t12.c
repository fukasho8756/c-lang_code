/*ワンタイムパスワード生成~ログイン成功*/
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

    printf("パスワードを入力してください。\n");
    for(int j =0; j <5; j++){
        scanf("%d",&login[j]);
    }

    int result =memcmp(pass, login, 20);
    if(result ==0){
        printf("ログイン成功\n");
    }else{
        printf("ログイン失敗\n");
    }
    return 0;
}
