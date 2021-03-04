



#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <sys/time.h>
#define MAX 500

struct timeval t;

int main()
{	 
        FILE *fp0,*fp1,*fp2;
	int i,j,count=0;
        char ch;
        fp0=fopen("file.txt","r");
        if(fp0==NULL)
        {
          printf("Sorry! We encountered an error while opening input file :(\nFile not found\n");
          exit(1);
        }

        for(i=0;fgetc(fp0)!=EOF;i++)
         count++;
        rewind(fp0);
	char str[MAX],code[MAX];
 

char coder[20][94]={
'o','m','c','W','h','j','&','{',')',',','5','3','8','\n','7','1','=','?','2',':','<','}','9','@',';','>','6','0','4','*','-','"','#','!','+','$','%','(','.','/',' ','\'','L','U','Q','`','G','Y','p','u','P','z','\\','Z','v','H','k','g',']','x','l','F','T','s','b','n','D','S','A','r','d','M','I','w','X','R','_','e','E','f','O','y','B','q','[','i','^','K','J','N','V','a','t','C',
'j','w',')','"','.','$','(','*','-',' ','/','%','+',',','\n','#','!',';','>','{','2',':','7','1','@','6','<','3','?','4','9','8','=','0','}','5','&','\'','g','L','Y','t','_','l','[','W','H','c','v','q','A','S','u','b','X','z','J','Z','f','T','U','O','h','s','K','m','G','i','a','Q','\\','C','E','k','e','P','R','`','F','r','p','N','B','o','^','x','d','n','D','y','I',']','V','M',
'i','S','6',':','7','1','\n','4','>','<','?',';','@','3','2','5','}','=','0','9','8','z','k','E','a','y','Y','v',' ','/','(','&','#','-','$',',','.','+','\'',')','*','%','"','!','O','r','P',']','H','\\','V','D','h','g','N','q','Z','t','K','`','m','W','[','w','_','s','n','l','^','F','e','G','d','p','j','f','X','A','b','x','c','M','I','o','Q','L','J','R','u','C','T','B','{','U',
'W','d','o','a','p','u','x','Z','H','f',']','{','@',';',':','4','=','<','0','8','6','>','5','2','\n','?','7','}','9','3','1','m','g','r','z','`','K','G','D','i','A','C','t','\\','q','[','Q','R','M','F','l','c','k','S','O','B','v','Y','N','h','n','_','X','j','J','b','I','^','s','U','e','E','T','V','&',',','\'','"','*','-','%','#','.',' ','(','$',')','/','+','!','y','L','P','w',
'p','{','X','U','O','P','T','u','h','w','A','z','d','L','D','c','r','I','i','J','Q','x','g','l','v','\n','F','G','C','m','q','s','_','Y','R','\\','=','9',':','8','7','5','0','2','4',';','}','<','3','@','>','?','6','1','a','H','M','k','y','V','E','t','Z','N','!','%','#','*','&',' ','\\','/','.','$','(',')','+','"','-',',','f','b','W','^','e','B','S',']','o','`','j','n','[','K',
'^','X','\n','S','x','o','T','`','m','U','W','G','h','B','}','i','b','a','F','P','{','R','E','e','C','z','w','J','c','A','g','H','n','Z','V','d','O','N','D','q','l','Q','Y','\\','[','\'',',','+','-','(',' ','$','/','&','%','"','!',')','.','#','*','k','v','r','u','y','t','I','f',']','s','4','1',';','=','6','9','@','>','<','5','8','?','3','0','2','7',':','M','K','j','_','p','L',
'N','V','}','Z','[','y','n','c','M','l','r','L','o','f','T','Y','X','w','G','\n','q','e','j','O','I',']','u','x','E','P','{','C','g','J','/','.','-','*','+',' ','(','#','%','!',')','"','&','\\','$',',','p','Q','U','S','v','B','t','k','H','h','D','b','F','\'','K','m','R','d','A','_','^','8','?','4','7','2','6','0','5','3','9','<',';','@',':','=','1','>','`','i','s','W','z','a',
'f','y','n','s','B','[','F','u','D','`','l','K','L','g','c','p','j','d','x','N','a','H','P','{','h','m','E','\\','\n','J','U','Q','G','k','e','q','W','X','}','R','T','i','t','^','w','b','A',']','-','+','!','.','"','\'','$','*','&','%','#',',','/',')','(',' ','r','_','o','I','M','?','3','@','9','6','5','=',';','7','0','<','2','1','>','8',':','4','C','z','Y','O','V','Z','S','v',
'Y','P','d','_','H','v','n','`','t','Q','L','z','G','V','q','E','I','b','y','m','i','C','x','s','}','{','M','\\','c','Z','j','g','X','k','u','a','h','e',')','\n','.','/','%','&',' ','"','#','(','!','*',',','+','-','$','\'','N','D','U','W','[','S',']','=','9','8',':','>','0','1','2','?','7','6',';','<','4','5','3','@','r','B','o','J','A','w','K','l','f','F','p','O','R','T','^',
'B','q','K','N','c','x','\\','Y','i','k','F','V','j',']','n','g','u','l','e','z','T','X','W','a','^','{','m','E','P','o','\n','U','I','A','D','C','t','J','d','w','H','y','}','G','v','[','_','s','b','\'','#','+','*','$','"','(','%',',',' ','.','/','-','&','!',')','R','1',';','0','>','5','6','?','2',':','@','3','8','=','7','9','<','4','Q','L','`','S','M','h','p','r','f','O','Z',
'Y','B','P','p','O','R','x','k','C','`','z','t','v','D','a','\n','E','X','f','{','V','H','e','\\','S','[','l','u','b','o','q','d','I','K','w','}','L','s','n','F','m','G','j','g','U','A','Z','T','y','%','+','$','!','(','.','#','"','*',',',')','&','\'',' ','/','-','i','^',']','r','W','Q','J','9','<','6','2','?','1',';',':','3','0','8','7','>','5','4','@','=','_','c','M','N','h',
'F','w','y','r','N','C','n','f','\n','d','j','k','B','P','O','Q','m','`','W','L','U','o',' ','$','-','+','(','%',')','!','&','*',',','"','.','{','\'','#','<',':','7','1','>','2',';','5','4','@','9','6','3','?','8','0','=','/','c','e','E','A','Z','^','s','I','t','u','\\','v','b','_','H','T','D','K','X','i','z','G','l','q','Y','h','R','p','V','M','J','g','x','S','[',']','a','}',
't','E','n','h','\\','Q','b','S','T','u','I','`','v','y','_','k','/','"','+','!','\'','$','.','*','\n','&',',','#','-','%',')',' ','(','H','C','V','j','g','c','D','o','d','M','{','^','m','z','F','8','>','4','<','7','9','3',':',';','=','6','5','@','2','1','?','0','P','X','L','J','R','i','r','l','a','}','s','Y','[','f',']','p','x','N','e','Z','B','w','q','U','W','A','O','K','G',
'A','w','I','t','k','M','G','h','%','!','+','*','-',' ','.','/','#','(',',','&','\'','"',')','$','[','S','p','K','j','B','x','o','c',']','z','L','\n','V','Y','{','X','Z','^','R','e','C','U','u','l','T','v','J','_','Q','D','F','O','a','g','f','i','r','`','\\','m','@',';','8','?',':','<','3','5','6','=','1','0','4','2','7','}','>','9','E','q','W','y','s','d','N','n','P','b','H',
'G','x','t','8','2','6','>','1','@',':','?','=','4','7',';','9','<','3','\n','5','0','b','c','Y','_','P','d','L','v','r','e','`','{','f','W',']','m','i','k','F','A','T','q','X','^','j','w','K','H','\\','R','g','N','Z','I','l','z','+','*','\'',')','(','}','%','.','$','"',' ','-',',','#','/','&','!','a','S','O','D','E','B','J','U','[','s','C','o','y','n','V','h','Q','p','u','M',
'D','r','x','w','Q','M','v','a','A',']','O','j','e','d','Y',' ','#','"','$',')','!','.','+','%',',','&','/','*','(','\'','-','t','\\','W','N','{','P','K','n','U','q','L','X','o','_','F','H','[','i','s','c','B','y','\n','V','m','p','R','Z','u','E','l','^','0','9','>','@',';','4','8','?','<','6','3','}','=',':','2','7','1','5','g','b','C','T','I','G','f','h','J','z','S','`','k',
'x','k','C','`','z','t','v','D','a','E','X','f','Y','B','P','p','O','R','V','H','e','\\','S','j','g','U','A','Z','T','y','%','+','$','!','(','[','l','u','b','o','q','\n','d','I','K','w','L','s','n','F','m','G','.','#','"','*',',',')','&','\'','Q','J','9','<','6','2','?','1',' ','/','-','i','^',']','r','W',';','}',':','3','0','@','=','_','c','M','N','h','8','7','>','5','4','{',
'q','i',']','b','O','f','D','I','x','E','_','A','c','h','d','v','^','j','[','G','C','N','J','&','.','/',')','%','(','"','{','\'','-','!','#','$','*',' ','+',',','\\','X','k','y','B','R','F','U','H','w','K','Y','V','Z','e','\n','M','m','W','T','p','`','L','n','s','l','}','P','o','t','g','r','u','z','a','Q','@','4','3',';','7','>','6','?','0','<',':','9','=','1','2','5','8','S',
'C','F','c','m','H','h','\\','d','W','`','D','k','Y',']','x','v','f','o','R','l','b','.',',','(','?','7','<','>','5','@','8','2','\n','3','{','=','4','0','1',';',':','6','9','"',' ','*',')','-','#','!','\'','&','%','$','/','+','G','T','p','t','^','A','z','N','B','g','Z','O','X','V','[','j','i','S','a','E','J','s','K','y','r','U','n','}','u','e','I','q','L','_','Q','P','M','w',
'L','+','(',')','&','.',' ','$','%','-','\n','/','1','9',';','0','4','5','6',':','8','2','=','>','3','<','@','?','7','{','*','\'','!',',','"','#','k','N','Y','G','r','E','W','O','U','t','w','m','q','f','B','P','Z','T','R','l','u','i','J','`','F','\\','I','C','p','e','^','x','n','M','c','o','A','H','V','h','[','b','a','g','s','D','S','d','}','Q','j','z','_',']','K','X','v','y'
};

   int rno[MAX],pos[MAX];
    
     fp1=fopen("Encoded.txt","w");
     fp2=fopen("Key.txt","w");
   	printf("\n\n\t\t --ENCODING--\n");
   	printf("Your message:\n");
        for(i=0;(ch=fgetc(fp0))!=EOF;i++)
        {
         str[i]=ch;
         printf("%c",ch);
        }
        printf("\n\n");
        str[i]='\0';


  srand((unsigned) time(&t));
	printf("Your secret no. is: ");  
        for(i=0;i<count;i++) 
        {
	 gettimeofday(&t,NULL);
        
         rno[i]= rand()%20;                               // Generating random numbers
	 printf("%d",rno[i]);
	 fprintf(fp2,"%d ",rno[i]);
        }
  
	for(i=0;i<count;i++)
	{
		for(j=0;j<94;j++)
                {	
                   if(str[i]==coder[rno[i]][j])
                   {
			pos[i]=j;                         
                   }
                }
	}
       
       for(i=0;i<count;i++)
       {
        switch(pos[i])
        {
         case 0: code[i]='a';  break;
         case 1: code[i]='b';  break;
         case 2: code[i]='c';  break;
         case 3: code[i]='d';  break;
         case 4: code[i]='e';  break;
         case 5: code[i]='f';  break;
         case 6: code[i]='g';  break;
         case 7: code[i]='h';  break;
         case 8: code[i]='i';  break;
         case 9: code[i]='j';  break;
         case 10: code[i]='k'; break;
         case 11: code[i]='l'; break;
         case 12: code[i]='m'; break;
         case 13: code[i]='n'; break;
         case 14: code[i]='o'; break;
         case 15: code[i]='p'; break;
         case 16: code[i]='q'; break;
         case 17: code[i]='r'; break;
         case 18: code[i]='s'; break;
         case 19: code[i]='t'; break;
         case 20: code[i]='u'; break;
         case 21: code[i]='v'; break;
         case 22: code[i]='w'; break;
         case 23: code[i]='x'; break;
         case 24: code[i]='y'; break;
         case 25: code[i]='z'; break;
         case 26: code[i]='A'; break;
         case 27: code[i]='B'; break;
	 	case 28: code[i]='C'; break;
         case 29: code[i]='D'; break;
         case 30: code[i]='E'; break;
         case 31: code[i]='F'; break;
         case 32: code[i]='G';  break;
         case 33: code[i]='H';  break;
         case 34: code[i]='I';  break;
         case 35: code[i]='J';  break;
         case 36: code[i]='K';  break;
         case 37: code[i]='L';  break;
         case 38: code[i]='M';  break;
         case 39: code[i]='N';  break;
         case 40: code[i]='O';  break;
         case 41: code[i]='P';  break;
         case 42: code[i]='Q'; break;
         case 43: code[i]='R'; break;
         case 44: code[i]='S'; break;
         case 45: code[i]='T'; break;
         case 46: code[i]='U'; break;
         case 47: code[i]='V'; break;
         case 48: code[i]='W'; break;
         case 49: code[i]='X'; break;
         case 50: code[i]='Y'; break;
         case 51: code[i]='Z'; break;
         case 52: code[i]='0'; break;
         case 53: code[i]='1'; break;
         case 54: code[i]='2'; break;
         case 55: code[i]='3'; break;
         case 56: code[i]='4'; break;
         case 57: code[i]='5'; break;
         case 58: code[i]='6'; break;
         case 59: code[i]='7'; break;
	 	case 60: code[i]='8'; break;
         case 61: code[i]='9'; break;
         case 62: code[i]=' '; break;
         case 63: code[i]='!'; break;
         case 64: code[i]='"';  break;
         case 65: code[i]='#';  break;
         case 66: code[i]='$';  break;
         case 67: code[i]='%';  break;
         case 68: code[i]='\'';  break;
         case 69: code[i]='(';  break;
         case 70: code[i]=')';  break;
         case 71: code[i]='*';  break;
         case 72: code[i]='+';  break;
         case 73: code[i]=',';  break;
         case 74: code[i]='-'; break;
         case 75: code[i]='.'; break;
         case 76: code[i]='/'; break;
         case 77: code[i]=':'; break;
         case 78: code[i]=';'; break;
         case 79: code[i]='<'; break;
         case 80: code[i]='='; break;
         case 81: code[i]='>'; break;
         case 82: code[i]='@'; break;
         case 83: code[i]='['; break;
         case 84: code[i]='\\'; break;
         case 85: code[i]=']'; break;
         case 86: code[i]='^'; break;
         case 87: code[i]='`'; break;
         case 88: code[i]='&'; break;
         case 89: code[i]='_';break;
         case 90: code[i]='?';break;
         case 91: code[i]='{'; break;
         case 92: code[i]='}'; break;
         case 93: code[i]='\n';break;
         
         
        }
      }
	printf("\nYour encoded message is: ");
       for(i=0;i<count;i++)
       {
	putchar(code[i]);
	fputc(code[i],fp1);
       }
       printf("\n\n*NOTE*\nFiles 'Encoded.txt' & 'Key.txt' are generated\nUse these files to decrypt your message\n");
   fclose(fp1);
   fclose(fp2); 
  }
