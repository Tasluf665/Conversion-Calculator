#include<stdio.h>
#include<math.h>
#include<string.h>
#include<windows.h>
#include<mmsystem.h>
FILE *fp;
void bin_to_dec()
{
    fp = fopen("test.txt","a");
    long long int no,rem,i = 1,decimal = 0;
    printf("\tEnter Binary Number = ");
    PlaySound(TEXT("3.wav"),NULL,SND_SYNC);
    scanf("%lld",&no);
    fprintf(fp,"Enter Binary Number = %lld\n",no);
    while(no!=0)
    {
        rem = no%10;
        decimal = decimal + (rem*i);
        no = no /10;
        i = i*2;
    }
    printf("\tDecimal Number is = %lld\n\t",decimal);
    PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
    fprintf(fp,"Decimal Number is = %lld\n",decimal);
    fclose(fp);
    return 0;
}
void bin_to_oct()
{
    fp = fopen("test.txt","a");
    long long int no,rem,i = 1,decimal=0;
    printf("\tEnter Binary Number = ");
    PlaySound(TEXT("6.wav"),NULL,SND_SYNC);
    scanf("%lld",&no);
    fprintf(fp,"Enter Binary Number = %lld\n",no);
    while(no!=0)
    {
        rem = no%10;
        decimal = decimal + (rem*i);
        no = no /10;
        i = i*2;
    }
    long long int octal = 0,j = 1,rem2 =0;
    while(decimal!=0)
    {
        rem2 = decimal%8;
        decimal = decimal/8;
        octal = octal + (rem2*j);
        j = j*10;

    }
    printf("\tOctal Number is = %lld\n\t",octal);
    PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
    fprintf(fp,"Octal Number is = %lld\n",octal);
    fclose(fp);
    return 0;
}
void bin_to_hx()
{
    fp = fopen("test.txt","a");
    long long int no,rem,i = 1,decimal=0;
    printf("\tEnter Binary Number = ");
    PlaySound(TEXT("7.wav"),NULL,SND_SYNC);
    scanf("%lld",&no);
    fprintf(fp,"Enter Binary Number = %lld\n",no);
    printf("\tHexadecimal Number is = ");
    fputs("Hexadecimal Number is = ",fp);
    while(no!=0)
    {
        rem = no%10;
        decimal = decimal + (rem*i);
        no = no /10;
        i = i*2;
    }

    long long int no2 = decimal,j=0,rem2=0;

    char hx[16];
    while(no2!=0)
    {
        rem2 = no2%16;
        if(rem2<10)
        {
            hx[j]='0'+ rem2;
        }
        else
        {
            hx[j]='A'+(rem2 - 10);
        }
        no2 = no2/16;
        j++;
    }
    while(j--)
    {
        printf("%c",hx[j]);
        fprintf(fp,"%c",hx[j]);
    }
    fputs("\n",fp);
    fclose(fp);
    PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
    return 0;
}
void oct_to_dec()
{
    fp = fopen("test.txt","a");
    long long int no,rem,i = 1,decimal=0;
    printf("\tEnter Octal Number = ");
    PlaySound(TEXT("8.wav"),NULL,SND_SYNC);
    scanf("%lld",&no);
    fprintf(fp,"Enter Octal Number = %lld\n",no);
    while(no!=0)
    {
        rem = no%10;
        decimal = decimal + (rem*i);
        no = no /10;
        i = i*8;
    }
    printf("\tDecimal Number is = %lld\n\t",decimal);
    fprintf(fp,"Decimal Number is = %lld\n",decimal);
    fclose(fp);
    PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
    return 0;
}
void oct_to_bin()
{
    fp = fopen("test.txt","a");
    long long int no,rem,i = 1,decimal=0;
    printf("\tEnter Octal Number = ");
    PlaySound(TEXT("9.wav"),NULL,SND_SYNC);
    scanf("%lld",&no);
    fprintf(fp,"Enter Octal Number = %lld\n",no);
    while(no!=0)
    {
        rem = no%10;
        decimal = decimal + (rem*i);
        no = no /10;
        i = i*8;
    }
    long long int binary = 0,j = 1,rem2 =0;
    while(decimal!=0)
    {
        rem2 = decimal%2;
        decimal = decimal/2;
        binary = binary + (rem2*j);
        j = j*10;

    }
    printf("\tBinary Number is = %lld\n\t",binary);
    fprintf(fp,"Binary Number is = %lld\n",binary);
    fclose(fp);
    PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
    return 0;
}
void oct_to_hx()
{
    fp = fopen("test.txt","a");
    long long int no,rem,i = 1,decimal=0;
    printf("\tEnter Octal Number = ");
    PlaySound(TEXT("10.wav"),NULL,SND_SYNC);
    scanf("%lld",&no);
    fprintf(fp,"Enter Octal Number = %lld\n",no);
    while(no!=0)
    {
        rem = no%10;
        decimal = decimal + (rem*i);
        no = no /10;
        i = i*8;
    }
    long long int j=0,rem2=0;
    printf("\tHexadecimal Number is = ");
    fputs("Hexadecimal Number is = ",fp);
    char hx[16];
    while(decimal!=0)
    {
        rem2 = decimal%16;
        if(rem2<10)
        {
            hx[j]='0'+ rem2;
        }
        else
        {
            hx[j]='A'+(rem2 -10);
        }
        decimal = decimal/16;
        j++;
    }
    while(j--)
    {
        printf("%c",hx[j]);
        fprintf(fp,"%c",hx[j]);
    }
    fputs("\n",fp);
    fclose(fp);
    PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
    return 0;
}
void dec_to_bin()
{
    fp = fopen("test.txt","a");
    long long int no,binary = 0,i = 1,rem =0;
    printf("\tEnter Decimal Number = ");
    PlaySound(TEXT("11.wav"),NULL,SND_SYNC);
    scanf("%lld",&no);
    fprintf(fp,"Enter Decimal Number = %lld\n",no);
    while(no!=0)
    {
        rem = no%2;
        no = no/2;
        binary = binary + (rem*i);
        i = i*10;

    }
    printf("\tBinary Number is = %lld\n\t",binary);
    fprintf(fp,"Binary Number is = %lld\n",binary);
    fclose(fp);
    PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
    return 0;
}
void dec_to_oct()
{
    fp = fopen("test.txt","a");
    long long int no,octal = 0,i = 1,rem =0;
    printf("\tEnter Decimal Number = ");
    PlaySound(TEXT("12.wav"),NULL,SND_SYNC);
    scanf("%lld",&no);
    fprintf(fp,"Enter Decimal Number = %lld\n",no);
    while(no!=0)
    {
        rem = no%8;
        no = no/8;
        octal = octal + (rem*i);
        i = i*10;

    }
    printf("\tOctal Number is = %lld\n\t",octal);
    fprintf(fp,"Octal Number is = %lld\n",octal);
    fclose(fp);
    PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
    return 0;
}
void dec_to_hx()
{
    fp = fopen("test.txt","a");
    long long int no,i=0,rem=0;
    printf("\tEnter Decimal Number = ");
    PlaySound(TEXT("13.wav"),NULL,SND_SYNC);
    scanf("%lld",&no);
    fprintf(fp,"Enter Decimal Number = %lld\n",no);
    printf("\tHexadecimal Number is = ");
    fputs("Hexadecimal Number is = ",fp);
    char hx[16];
    while(no!=0)
    {
        rem = no%16;
        if(rem<10)
        {
            hx[i]='0'+ rem;
        }
        else
        {
            hx[i]='A'+(rem -10);
        }
        no = no/16;
        i++;
    }
    while(i--)
    {
        printf("%c",hx[i]);
        fprintf(fp,"%c",hx[i]);
    }
    fputs("\n",fp);
    fclose(fp);
    PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
    return 0;
}
void hx_to_dec()
{
    fp = fopen("test.txt","a");
    char ch[255];
    long long int i = 0,len,dec =0;
    printf("\tEnter Hexadecimal Number = ");
    fputs("Enter Hexadecimal Number = ",fp);
    PlaySound(TEXT("14.wav"),NULL,SND_SYNC);
    scanf("%s",ch);
    fprintf(fp,"%s\n",ch);
    len = strlen(ch);
    while(i<len)
    {
        switch(ch[i])
        {
        case '0':
            dec = dec + (int)pow(16,len-i-1)*0;
            break;
        case '1':
            dec = dec + (int)pow(16,len-i-1)*1;
            break;
        case '2':
            dec = dec + (int)pow(16,len-i-1)*2;
            break;
        case '3':
            dec = dec + (int)pow(16,len-i-1)*3;
            break;
        case '4':
            dec = dec + (int)pow(16,len-i-1)*4;
            break;
        case '5':
            dec = dec + (int)pow(16,len-i-1)*5;
            break;
        case '6':
            dec = dec + (int)pow(16,len-i-1)*6;
            break;
        case '7':
            dec = dec + (int)pow(16,len-i-1)*7;
            break;
        case '8':
            dec = dec + (int)pow(16,len-i-1)*8;
            break;
        case '9':
            dec = dec + (int)pow(16,len-i-1)*9;
            break;
        case 'A':
            dec = dec + (int)pow(16,len-i-1)*10;
            break;
        case 'B':
            dec = dec + (int)pow(16,len-i-1)*11;
            break;
        case 'C':
            dec = dec + (int)pow(16,len-i-1)*12;
            break;
        case 'D':
            dec = dec + (int)pow(16,len-i-1)*13;
            break;
        case 'E':
            dec = dec + (int)pow(16,len-i-1)*14;
            break;
        case 'F':
            dec = dec + (int)pow(16,len-i-1)*15;
            break;
        case 'a':
            dec = dec + (int)pow(16,len-i-1)*10;
            break;
        case 'b':
            dec = dec + (int)pow(16,len-i-1)*11;
            break;
        case 'c':
            dec = dec + (int)pow(16,len-i-1)*12;
            break;
        case 'd':
            dec = dec + (int)pow(16,len-i-1)*13;
            break;
        case 'e':
            dec = dec + (int)pow(16,len-i-1)*14;
            break;
        case 'f':
            dec = dec + (int)pow(16,len-i-1)*15;
            break;
        default:
            break;

        }
        i++;

    }
    long long int binary = 0,j = 1,rem =0;
    while(dec!=0)
    {
        rem = dec%2;
        dec = dec/2;
        binary = binary + (rem*j);
        j = j*10;

    }
    printf("\tBinary Number is = %lld\n\t",binary);
    fprintf(fp,"Binary Number is = %lld\n",binary);
    fclose(fp);
    PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
    return 0;
}
void hx_to_oct()
{
    fp = fopen("test.txt","a");
    char ch[255];
    long long int i = 0,len,dec =0;
    printf("\tEnter Hexadecimal Number = ");
    fputs("Enter Hexadecimal Number = ",fp);
    PlaySound(TEXT("15.wav"),NULL,SND_SYNC);
    scanf("%s",ch);
    fprintf(fp,"%s\n",ch);
    len = strlen(ch);
    while(i<len)
    {
        switch(ch[i])
        {
        case '0':
            dec = dec + (int)pow(16,len-i-1)*0;
            break;
        case '1':
            dec = dec + (int)pow(16,len-i-1)*1;
            break;
        case '2':
            dec = dec + (int)pow(16,len-i-1)*2;
            break;
        case '3':
            dec = dec + (int)pow(16,len-i-1)*3;
            break;
        case '4':
            dec = dec + (int)pow(16,len-i-1)*4;
            break;
        case '5':
            dec = dec + (int)pow(16,len-i-1)*5;
            break;
        case '6':
            dec = dec + (int)pow(16,len-i-1)*6;
            break;
        case '7':
            dec = dec + (int)pow(16,len-i-1)*7;
            break;
        case '8':
            dec = dec + (int)pow(16,len-i-1)*8;
            break;
        case '9':
            dec = dec + (int)pow(16,len-i-1)*9;
            break;
        case 'A':
            dec = dec + (int)pow(16,len-i-1)*10;
            break;
        case 'B':
            dec = dec + (int)pow(16,len-i-1)*11;
            break;
        case 'C':
            dec = dec + (int)pow(16,len-i-1)*12;
            break;
        case 'D':
            dec = dec + (int)pow(16,len-i-1)*13;
            break;
        case 'E':
            dec = dec + (int)pow(16,len-i-1)*14;
            break;
        case 'F':
            dec = dec + (int)pow(16,len-i-1)*15;
            break;
        case 'a':
            dec = dec + (int)pow(16,len-i-1)*10;
            break;
        case 'b':
            dec = dec + (int)pow(16,len-i-1)*11;
            break;
        case 'c':
            dec = dec + (int)pow(16,len-i-1)*12;
            break;
        case 'd':
            dec = dec + (int)pow(16,len-i-1)*13;
            break;
        case 'e':
            dec = dec + (int)pow(16,len-i-1)*14;
            break;
        case 'f':
            dec = dec + (int)pow(16,len-i-1)*15;
            break;
        default:
            break;

        }
        i++;

    }
    printf("\tThe Decimal Number is = %lld\n\t",dec);
    fprintf(fp,"The Decimal Number is = %lld\n",dec);
    fclose(fp);
    PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
    return 0;
}
void hx_to_bin()
{
    fp = fopen("test.txt","a");
    char ch[255];
    long long int i = 0,len,dec =0;
    printf("\tEnter Hexadecimal Number = ");
    fputs("Enter Hexadecimal Number = ",fp);
    PlaySound(TEXT("16.wav"),NULL,SND_SYNC);
    scanf("%s",ch);
    fprintf(fp,"%s\n",ch);
    len = strlen(ch);
    while(i<len)
    {
        switch(ch[i])
        {
        case '0':
            dec = dec + (int)pow(16,len-i-1)*0;
            break;
        case '1':
            dec = dec + (int)pow(16,len-i-1)*1;
            break;
        case '2':
            dec = dec + (int)pow(16,len-i-1)*2;
            break;
        case '3':
            dec = dec + (int)pow(16,len-i-1)*3;
            break;
        case '4':
            dec = dec + (int)pow(16,len-i-1)*4;
            break;
        case '5':
            dec = dec + (int)pow(16,len-i-1)*5;
            break;
        case '6':
            dec = dec + (int)pow(16,len-i-1)*6;
            break;
        case '7':
            dec = dec + (int)pow(16,len-i-1)*7;
            break;
        case '8':
            dec = dec + (int)pow(16,len-i-1)*8;
            break;
        case '9':
            dec = dec + (int)pow(16,len-i-1)*9;
            break;
        case 'A':
            dec = dec + (int)pow(16,len-i-1)*10;
            break;
        case 'B':
            dec = dec + (int)pow(16,len-i-1)*11;
            break;
        case 'C':
            dec = dec + (int)pow(16,len-i-1)*12;
            break;
        case 'D':
            dec = dec + (int)pow(16,len-i-1)*13;
            break;
        case 'E':
            dec = dec + (int)pow(16,len-i-1)*14;
            break;
        case 'F':
            dec = dec + (int)pow(16,len-i-1)*15;
            break;
        case 'a':
            dec = dec + (int)pow(16,len-i-1)*10;
            break;
        case 'b':
            dec = dec + (int)pow(16,len-i-1)*11;
            break;
        case 'c':
            dec = dec + (int)pow(16,len-i-1)*12;
            break;
        case 'd':
            dec = dec + (int)pow(16,len-i-1)*13;
            break;
        case 'e':
            dec = dec + (int)pow(16,len-i-1)*14;
            break;
        case 'f':
            dec = dec + (int)pow(16,len-i-1)*15;
            break;
        default:
            break;

        }
        i++;

    }
    long long int octal = 0,j = 1,rem =0;
    while(dec!=0)
    {
        rem = dec%8;
        dec = dec/8;
        octal = octal + (rem*j);
        j = j*10;

    }
    printf("\tOctal Number is = %lld\n\t",octal);
    fprintf(fp,"Octal Number is = %lld\n",octal);
    fclose(fp);
    PlaySound(TEXT("4.wav"),NULL,SND_SYNC);

    return 0;
}
int main()
{
    system("color F0");
    int n, x=1;
    char option;
    char ch,his;
    fp = fopen("test.txt","w");
    fclose(fp);
    do
    {
        printf("\n\n\t\t\t\t Conversion Calculator");
        printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\n\t1) Binary to Decimal\n\t2) Binary to Octal\n\t3) Binary to Hexadecimal\n\t4) Octal to Decimal\n\t5) Octal to Binary\n\t6) Octal to Hexadecimal\n\t7) Decimal to Binary\n\t8) Decimal to Octal\n\t9) Decimal to Hexadecimal\n\t10) Hexadecimal to Binary\n\t11) Hexadecimal to Decimal\n\t12) Hexadecimal to Octal\n");

        printf("\n\tWhat kind of conversion do you like to do ?\n");
        printf("\tPress 1-12 For conversion. \n\t");

        if(x==1)
        {
            PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
        }
        x=2;
        PlaySound(TEXT("2.wav"),NULL,SND_SYNC);

        scanf("%d",&n);
        switch(n)
        {
        case 1:
            bin_to_dec();
            break;
        case 2:
            bin_to_oct();
            break;
        case 3:
            bin_to_hx();
            break;
        case 4:
            oct_to_dec();
            break;
        case 5:
            oct_to_bin();
            break;
        case 6:
            oct_to_hx();
            break;
        case 7:
            dec_to_bin();
            break;
        case 8:
            dec_to_oct();
            break;
        case 9:
            dec_to_hx();
            break;
        case 10:
            hx_to_dec();
            break;
        case 11:
            hx_to_oct();
            break;
        case 12:
            hx_to_bin();
            break;
        default:
            printf("\tInvalid Input");
            break;
        }
        printf("\n\n\tDo you want to do it again(y/n)?\n\t");
        PlaySound(TEXT("5.wav"),NULL,SND_SYNC);
        option = getch();
        system("cls");
    }while(option == 'y');

    printf("\nDo you want to see the history - (y/n): ");
    PlaySound(TEXT("18.wav"),NULL,SND_SYNC);
    his = getch();
    if(his=='y')
    {
        printf("\n\nHistory:\n\n");
        fp = fopen("test.txt","r");
        while((ch=getc(fp))!=EOF)
        {
            printf("%c",ch);
        }
        fclose(fp);
    }
    if(option == 'n')
    {
        PlaySound(TEXT("17.wav"),NULL,SND_SYNC);
    }
    return 0;
}

