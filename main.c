#include<stdio.h>
#include<mmsystem.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==2){
        PlaySound(TEXT("sound.wav"),NULL,SND_SYNC);
        }
    else{
        printf("Yes");
    }
    return 0;
}
