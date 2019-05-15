#include<stdio.h>
#include<conio.h>
#include<string.h>



int main()
{


	int rno,counter=0,f=0,en=0,hi=0,ma=0,sc=0,ss=0,tot=0,per=0,i,j;
	char name[20],fname[20];
	printf("enter name\n");
	scanf("%s",name);

FILE *fpname,*fprno,*fpeng,*fphin,*fpmat,*fpsci,*fpssc,*fptot;
fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpeng=fopen("english.txt","r");
if(fpeng==NULL)
printf("english file not open");

fphin=fopen("hindi.txt","r");
if(fphin==NULL)
printf("hindi file not open");

fpmat=fopen("math.txt","r");
if(fpmat==NULL)
printf("math file not open");

fpsci=fopen("science.txt","r");
if(fpsci==NULL)
printf("science file not open");

fpssc=fopen("sscience.txt","r");
if(fpssc==NULL)
printf("sscience file not open");

fptot=fopen("total.txt","w");
if(fptot==NULL)
printf("total file not open");
	f=0;
while(strcmp(fname,name))
{
    counter++;
	fgets(fname,20,fpname);
	fname[strlen(fname)-1]='\0';

	printf("in while loop %s,%s  counter is %d\n",name ,fname,counter);

//if(counter==1)
//f=1;



}
printf("counter is %d",counter);


rewind(fpname);
for(i=0;i<counter;i++)
{
fscanf(fpeng,"%d",&en);
fscanf(fphin,"%d",&hi);
fscanf(fpmat,"%d",&ma);
fscanf(fpsci,"%d",&sc);
fscanf(fprno,"%d",&rno);
fscanf(fpssc,"%d",&ss);
//fscanf(fptot,"%d",&tot);
tot=en+hi+ma+sc+ss;
per=tot/5;
fgets(name,20,fpname);
fprintf(fptot,"%d",&tot);

}




printf("counter is %d\n",counter );

printf("NAME \t          ROLL NO  ENGLISH  HINDI  MATHS SCIENCE SO.CIENCE TOTAL   %%\n");

printf("%s",name);
for(j=0;j<(20-strlen(name));j++)
{printf(" ");
}
printf(" %d   %d \t     %d     %d \t   %d \t %d \t     %d   %d \n",rno,en,hi,ma,sc,ss,tot,per);



fclose(fpname);
fclose(fprno);
fclose(fpeng);
fclose(fphin);
fclose(fpmat);
fclose(fpsci);
fclose(fpssc);
fclose(fptot);


	getch();
	return 0;
}
