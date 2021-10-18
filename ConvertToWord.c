#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char number[25];
char str[400]="";

void onelength(char);
void tys(char);
void teens(char);
int flag=1;
void onelength(char no)
{
         switch(no)
         {
                 case '0':strcat(str,"Zero ");break;
                 case '1':strcat(str,"One ");break;
                 case '2':strcat(str,"Two ");break;
                 case '3':strcat(str,"Three ");break;
                 case '4':strcat(str,"Four ");break;
                 case '5':strcat(str,"Five ");break;
                 case '6':strcat(str,"Six ");break;
                 case '7':strcat(str,"Seven ");break;
                 case '8':strcat(str,"Eight ");break;
                 case '9':strcat(str,"Nine ");break;      
         }
}

void tys(char no)
{
        switch(no)
        {
                 case '2':strcat(str,"Twenty ");break;
                 case '3':strcat(str,"Thirty ");break;
                 case '4':strcat(str,"Forty ");break;
                 case '5':strcat(str,"Fifty ");break;
                 case '6':strcat(str,"Sixty ");break;
                 case '7':strcat(str,"Seventy ");break;
                 case '8':strcat(str,"Eighty ");break;
                 case '9':strcat(str,"Ninety ");break;
        }
}

void teens(char ch)
{
        switch(ch)
        {
                 case '0':strcat(str,"Ten ");break;
                 case '1':strcat(str,"Eleven ");break;
                 case '2':strcat(str,"Twelve ");break;
                 case '3':strcat(str,"Thirteen ");break;
                 case '4':strcat(str,"Fourteen ");break;
                 case '5':strcat(str,"Fifteen ");break;
                 case '6':strcat(str,"Sixteen  ");break;
                 case '7':strcat(str,"Seventeen ");break;
                 case '8':strcat(str,"Eighteen ");break;
                 case '9':strcat(str,"Nineteen ");break;
        } 
}

void check(char h,char t,char u)
{
        if(h!='0')
        {
                onelength(h);
                strcat(str,"Hundred ");
        }
        if(t=='1')
        {
                teens(u);
        }
        else 
        {
                tys(t);
                if(u!='0') onelength(u);
        }
        
        if(h=='0' && t=='0' && u=='0') flag=0;
        else flag=1;
}
void twolength()
{
        check('0',number[0],number[1]);
}

void threelength()
{
        check(number[0],number[1],number[2]);
}

void fourlength()
{
        if(number[0]!='0')
        {
               onelength(number[0]);
               strcat(str,"Thousand ");
        }  
        check(number[1],number[2],number[3]);     
}

void fivelength()
{
        check('0',number[0],number[1]);
        if(flag)  strcat(str,"Thousand ");
        check(number[2],number[3],number[4]);
}

void sixlength()
{
        check(number[0],number[1],number[2]);
        if(flag) strcat(str,"Thousand ");
        check(number[3],number[4],number[5]);
}

void sevenlength()
{
        if(number[0]!='0')
        {
                  onelength(number[0]);
                  strcat(str,"Million ");
        }
        check(number[1],number[2],number[3]);
        if(flag) strcat(str,"Thousand ");
        check(number[4],number[5],number[6]);
}
void eightlength()
{
        check('0',number[0],number[1]);
        if(flag) strcat(str,"Million ");
        check(number[2],number[3],number[4]);
        if(flag) strcat(str,"Thousand ");
        check(number[5],number[6],number[7]);
}

void ninelength()
{
        check(number[0],number[1],number[2]);
        if(flag) strcat(str,"Million ");
        check(number[3],number[4],number[5]);
        if(flag) strcat(str,"Thousand ");
        check(number[6],number[7],number[8]);
}

void tenlength()
{
        if(number[0]!='0')
        {
                 onelength(number[0]);
                 strcat(str,"Billion ");
        }
        check(number[1],number[2],number[3]);
        if(flag) strcat(str,"Million ");
        check(number[4],number[5],number[6]);
        if(flag) strcat(str,"Thousand ");
        check(number[7],number[8],number[9]);
}

void elevenlength()
{
        check('0',number[0],number[1]);
        if(flag) strcat(str,"Billion "); 
        check(number[2],number[3],number[4]);
        if(flag) strcat(str,"Million ");
        check(number[5],number[6],number[7]);
        if(flag) strcat(str,"Thousand ");
        check(number[8],number[9],number[10]);
}
void twelvelength()
{
        check(number[0],number[1],number[2]);
        if(flag) strcat(str,"Billion "); 
        check(number[3],number[4],number[5]);
        if(flag) strcat(str,"Million ");
        check(number[6],number[7],number[8]);
        if(flag) strcat(str,"Thousand ");
        check(number[9],number[10],number[11]);
}
void thirteenlength()
{
        if(number[0]!='0')
        {
                 onelength(number[0]);
                 strcat(str,"Trillion ");
        }
        check(number[1],number[2],number[3]);
        if(flag) strcat(str,"Billion "); 
        check(number[4],number[5],number[6]);
        if(flag) strcat(str,"Million ");
        check(number[7],number[8],number[9]);
        if(flag) strcat(str,"Thousand ");
        check(number[10],number[11],number[12]);
}
void fourteenlength()
{
        check('0',number[0],number[1]);
        if(flag) strcat(str,"Trillion "); 
        check(number[2],number[3],number[4]);
        if(flag) strcat(str,"Billion ");
        check(number[5],number[6],number[7]);
        if(flag) strcat(str,"Million ");
        check(number[8],number[9],number[10]);
        if(flag) strcat(str,"Thousand ");
        check(number[11],number[12],number[13]);
}

void fifteenlength()
{
        check(number[0],number[1],number[2]);
        if(flag) strcat(str,"Trillion "); 
        check(number[3],number[4],number[5]);
        if(flag) strcat(str,"Billion ");
        check(number[6],number[7],number[8]);
        if(flag) strcat(str,"Million ");
        check(number[9],number[10],number[11]);
        if(flag) strcat(str,"Thousand ");
        check(number[12],number[13],number[14]);
}
void sixteenlength()
{
        if(number[0]!='0')
        {
                 onelength(number[0]);
                 strcat(str,"Quadrillion ");
        }
        check(number[1],number[2],number[3]);
        if(flag) strcat(str,"Trillion "); 
        check(number[4],number[5],number[6]);
        if(flag) strcat(str,"Billion ");
        check(number[7],number[8],number[9]);
        if(flag) strcat(str,"Million ");
        check(number[10],number[11],number[12]);
        if(flag) strcat(str,"Thousand ");
        check(number[13],number[14],number[15]);
}
void seventeenlength()
{
        check('0',number[0],number[1]);
        if(flag) strcat(str,"Quadrillion "); 
        check(number[2],number[3],number[4]);
        if(flag) strcat(str,"Trillion ");
        check(number[5],number[6],number[7]);
        if(flag) strcat(str,"Billion ");
        check(number[8],number[9],number[10]);
        if(flag) strcat(str,"Million ");
        check(number[11],number[12],number[13]);
        if(flag) strcat(str,"Thousand ");
        check(number[14],number[15],number[16]);
}
void eighteenlength()
{
        check(number[0],number[1],number[2]);
        if(flag) strcat(str,"Quadrillion "); 
        check(number[3],number[4],number[5]);
        if(flag) strcat(str,"Trillion ");
        check(number[6],number[7],number[8]);
        if(flag) strcat(str,"Billion ");
        check(number[9],number[10],number[11]);
        if(flag) strcat(str,"Million ");
        check(number[12],number[13],number[14]);
        if(flag) strcat(str,"Thousand ");
        check(number[15],number[16],number[17]);
}

void nineteenlength()
{
        if(number[0]!='0')
        {
                 onelength(number[0]);
                 strcat(str,"Quintillion ");
        }
        check(number[1],number[2],number[3]);
        if(flag) strcat(str,"Quadrillion "); 
        check(number[4],number[5],number[6]);
        if(flag) strcat(str,"Trillion ");
        check(number[7],number[8],number[9]);
        if(flag) strcat(str,"Billion ");
        check(number[10],number[11],number[12]);
        if(flag) strcat(str,"Million ");
        check(number[13],number[14],number[15]);
        if(flag) strcat(str,"Thousand ");
        check(number[16],number[17],number[18]);
}

void twentylength()
{
        check('0',number[0],number[1]);
        if(flag) strcat(str,"Quintillion "); 
        check(number[2],number[3],number[4]);
        if(flag) strcat(str,"Quadrillion ");
        check(number[5],number[6],number[7]);
        if(flag) strcat(str,"Trillion ");
        check(number[8],number[9],number[10]);
        if(flag) strcat(str,"Billion ");
        check(number[11],number[12],number[13]);
        if(flag) strcat(str,"Million ");
        check(number[14],number[15],number[16]);
        if(flag) strcat(str,"Thousand ");
        check(number[17],number[18],number[19]);
}

void twentyonelength()
{
        check(number[0],number[1],number[2]);
        if(flag) strcat(str,"Quintillion "); 
        check(number[3],number[4],number[5]);
        if(flag) strcat(str,"Quadrillion ");
        check(number[6],number[7],number[8]);
        if(flag) strcat(str,"Trillion ");
        check(number[9],number[10],number[11]);
        if(flag) strcat(str,"Billion ");
        check(number[12],number[13],number[14]);
        if(flag) strcat(str,"Million ");
        check(number[15],number[16],number[17]);
        if(flag) strcat(str,"Thousand ");
        check(number[18],number[19],number[20]);
}
int main()
{
     while(1)
     {
        printf("Enter a number :");
        scanf("%s",number);
        int len=strlen(number);
        
        for(int i=0;i<len;i++)
        {
                 if(!(number[i]>=48 && number[i]<=57))
                 {
                          printf("Invalid input %s \n",number);
                          len=0;
                          strcpy(str,"");
                 }
        }
        switch(len)
        {
					
                   case 1:onelength(number[0]);break;
                          
                   case 2:twolength();break;
                           
                   case 3:threelength();break;
                          
                   case 4:fourlength();break;
                          
                   case 5:fivelength();break;
                          
                   case 6:sixlength();break;
                             
                   case 7:sevenlength();break;
                          
                   case 8:eightlength();break;
                           
                   case 9:ninelength();break;
                           
                   case 10:tenlength();break;
                           
                   case 11:elevenlength();break;
                           
                   case 12:twelvelength();break;
                           
                   case 13:thirteenlength();break;
                           
                   case 14:fourteenlength();break;
                          
                   case 15:fifteenlength();break;
                          
                   case 16:sixteenlength();break;
                          
                   case 17:seventeenlength();break;
                          
                   case 18:eighteenlength();break;
                            
                   case 19:nineteenlength();break;
                          
                   case 20:twentylength();break; 
                          
                   case 21:twentyonelength();break; 
        }
        printf("%s\n",str);
        printf("\n");
        strcpy(str,"");
        if(!strcmp(number,"-1")) exit(0);
     }   
}
/*
Enter a number :5214789
Five Million Two Hundred Fourteen Thousand Seven Hundred Eighty Nine

Enter a number :47932145697
Forty Seven Billion Nine Hundred Thirty Two Million One Hundred Forty Five Thousand Six Hundred Ninety Seven
*/
