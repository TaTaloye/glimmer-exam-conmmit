#include <stdio.h>
#include <stdbool.h>

int main(){
    char name[20];
    int age;
    char return_value;
    while (true){
    printf("年龄：");
    scanf("%d",&age);
    printf("姓名：");
    scanf("%s",name);
    printf("是否进行修改(y/n)：");
    scanf(" %c",&return_value);
    if (return_value == 'y' || return_value == 'Y'){
        printf("年龄：");
        scanf("%d",&age);
        printf("姓名：");
        scanf("%s",name);
    }
    else if (return_value == 'n' || return_value == 'N'){
        printf("你的年龄：%d\n",age);
        printf("你的姓名：%s\n",name);
        return 0;
    }
    else{
        printf("小调皮，只能输入y/n哦\n");
    }
}
}
