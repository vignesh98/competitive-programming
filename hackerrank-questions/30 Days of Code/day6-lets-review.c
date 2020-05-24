#include<stdio.h>
#include<string.h>


int main(){
int a;
char str[10000];
scanf("%d",&a);

for(int i=0;i<a;i++){

scanf("%s",&str);
for(int x=0;x<strlen(str);x++){

    if(x % 2==0){
        printf("%c",str[x]);
    }
}
            printf(" ");
for(int y=0;y<strlen(str);y++){
    if(y% 2!=0){
        printf("%c",str[y]);
    }
}
printf("\n");


}

return 0;
}

