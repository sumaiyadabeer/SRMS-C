#include<stdio.h>
#include<conio.h>
#include<string.h>


void adding ();
void disname();
void disrno();
void delrno();
void delname();
void diall();
void heng();
void hhin();
void hmat();
void hsci();
void hssc();
void htot();
void peng();
void phin();
void pmat();
void psci();
void pssc();
void feng();
void fhin();
void fmat();
void fsci();
void fssc();
void deng();
void dhin();
void dmat();
void dsci();
void dssc();
void dtot();
void reng();
void rhin();
void rmat();
void rsci();
void rssc();
void rtot();
void cat();
void cata();
void catag();
int main()
{
FILE *fptname,*fptpas,*fppas;
int counter=0,at,sel,pas=2014,p,pass=0,c,a,i,f;
char name[20],fname[20];
printf("WELCOME TO STUDENT RECORD MANAGEMENT SYSTEM..");
getch();
printf("\nLOG IN AS: \n 1: ADMIN\n 2: TEACHER..\n");
scanf("%d",&at);


fppas=fopen("password.txt","r");
if(fppas==NULL)
printf("password file not open");

fscanf(fppas,"%d",&pas);

fclose(fptname);


if(at==2){

fptname=fopen("tname.txt","r");
if(fptname==NULL)
printf("tname file not open");

fptpas=fopen("tpass.txt","r");
if(fptpas==NULL)
printf("tpassword file not open");

printf("please enter your firstname");
scanf("%s",name);
printf("please enter your password");
scanf("%d",&pass);

for(c=0;!feof(fptpas);c++)
{
fscanf(fptpas,"%d",&pas);
//printf("\n password file is %d,passswor is %d",pas,pass);
if(pas==pass){
//printf("password matched");
break;
}

}


if(pas!=pass){
printf("\nplease try again with valid entry\n")	;
getch();
return 0;
}
for(a=0;a<=c;a++)
{
fscanf(fptname,"%s",&fname);

}
//printf("name %s  %s",name,fname);

if(!strcmp(name,fname)){

//printf("name matched");
while(counter!=11)
{
printf("\nplease enter your choise:\n1:adding a new record\n2:display the selected record\n3:display all record\n4:delete a record\n5:highest marks\n6:list of pass student\n7:list of fail student \n8:list of distinctions\n9:catagory\n 10:rank\n11:exit");
scanf("%d",&counter);

switch(counter)
{
	case 1:
	adding();//done

	break;
	case 2:
		printf("1:search by name\n2:search by roll no\n  ");
		scanf("%d",&sel);
		if(sel==1)
		disname();
		else
	    disrno();
	break;
	case 3:
	diall();//done..
	printf("3");
	break;
	case 4:
	    printf("1:delete by name\n2:delete by roll no\n");
		scanf("%d",&sel);
		if(sel==1)
		delname();
		else if (sel==2)
		delrno();
		else
		printf("please enter proper choise\n");
	break;
	case 5:
	printf("5");/// highest
	printf("choose subject \n1:english\n2:hindi\n3:maths\n4:science\n5:social science\n6:total");
	scanf("%d",&sel);

	if (sel==1)
        {
	    heng();
	    }
	else if(sel==2)
		{
        hhin();
		}
	else if(sel==3)
		{
            hmat();
        }
	else if(sel==4)
		{
        hsci();
        }
	else if(sel==5)
		{
        hssc();
        }
	else if(sel==6)
		{
        htot();
         }
	else
	{
	printf("please enter proper choise\n");
	}
	break;
		case 6:
	printf("6");/// pass

		printf("choose subject \n1:english\n2:hindi\n3:maths\n4:science\n5:social science\n");
	scanf("%d",&sel);

	if (sel==1)
        {
	    peng();
	    }
	else if(sel==2)
		{
        phin();
		}
	else if(sel==3)
		{
           pmat();
        }
	else if(sel==4)
		{
        psci();
        }
	else if(sel==5)
		{
        pssc();
        }

	else
	{
	printf("please enter proper choise\n");
	}
	break;
		case 7:
	printf("7");/// fail
			printf("choose subject \n1:english\n2:hindi\n3:maths\n4:science\n5:social science\n");
	scanf("%d",&sel);

	if (sel==1)
        {
	    feng();
	    }
	else if(sel==2)
		{
        fhin();
		}
	else if(sel==3)
		{
           fmat();
        }
	else if(sel==4)
		{
        fsci();
        }
	else if(sel==5)
		{
        fssc();
        }

	else
	{
	printf("please enter proper choise\n");
	}


	break;
		case 8:
	printf("8");/// dinstinction
	printf("choose subject \n1:english\n2:hindi\n3:maths\n4:science\n5:social science\n6:overall distinction");
	scanf("%d",&sel);

	if (sel==1)
        {
	    deng();
	    }
	else if(sel==2)
		{
        dhin();
		}
	else if(sel==3)
		{
        dmat();
        }
	else if(sel==4)
		{
        dsci();
        }
	else if(sel==5)
		{
        dssc();
        }
    else if(sel==6)
		{
        dtot();
        }
	else
	{
	printf("please enter proper choise\n");
	}



	break;

		case 9:
	printf("9");/// catagory
	printf("enter the choise\n1:gold\n2:silver\n3:bronze");
	scanf("%d",&sel);

	if (sel==1)
        {
	 cat();
	    }
	else if(sel==2)
		{
    cata();
		}
	else if(sel==3)
		{
    catag();
        }else
        {
         	printf("please enter proper choise\n");

        }

	break;

		case 10:
	printf("10");/// rank
		printf("choose subject \n1:english\n2:hindi\n3:maths\n4:science\n5:social science\n6:final rank");
	scanf("%d",&sel);

	if (sel==1)
        {
	   reng();
	    }
	else if(sel==2)
		{
        rhin();
		}
	else if(sel==3)
		{
        rmat();
        }
	else if(sel==4)
		{
        rsci();
        }
	else if(sel==5)
		{
        rssc();
        }
    else if(sel==6)
		{
        rtot();
        }
	else
	{
	printf("please enter proper choise\n");
	}






	break;

		case 11:
	printf("11");/// exit done
	break;




}



}
fclose(fptpas);
fclose(fppas);
}
}else if(at==1)
{
printf("PLEASE ENTER PASSWORD\n");
scanf("%d",&p);
if(p==pas)
{

 printf("1:change password\n2:add teacher\n3:remove teacher");
 scanf("%d",&sel);
 if (sel==1)
        {
printf("PLEASE ENTER NEW PASSWORD");
scanf("%d",&pas);
printf("pas is %d",pas);

fppas=fopen("password.txt","w");
if(fppas==NULL)
printf("password file not open");

fprintf(fppas,"%d",pas);

fclose(fppas);
                        //password done
	    }
	else if(sel==2)
		{

                        //add
fptname=fopen("tname.txt","a");
if(fptname==NULL)
printf("tnmae file not open");

fptpas=fopen("tpass.txt","a");
if(fptpas==NULL)
printf("password file not open");




printf("enter name\n");
gets(name);
gets(name);
fprintf(fptname,"%s\n",name);

printf("password no\n");
scanf("%d",&a);
fprintf(fptpas,"\n%d",a);

fclose(fptpas);
fclose(fptname);

		}
	else if(sel==3)
		{
             FILE *fptname,*fptpas,*fpttname,*fpttpas;
fptname=fopen("tname.txt","r");
if(fptname==NULL)
printf("tname file not open");

fptpas=fopen("tpass.txt","r");
if(fptpas==NULL)
printf("roll no file not open");

fpttname=fopen("_tname.txt","w");
if(fpttname==NULL)
printf("name file not open");

fpttpas=fopen("_tpass.txt","w");
if(fpttpas==NULL)
printf("roll no file not open");

printf("enter the password of teacher\n");
scanf("%d",&pas);
counter=0;
while(f!=1)
{counter++;
	fscanf(fptpas,"%d",&pass);
if(pas==pass)
f=1;
	printf("counter is %d fpas is %d  pas id %d, \n",counter,pass,pas);


}
c=0;
rewind(fptpas);
while(!feof(fptname))
{
printf("get data from file \n");
if(c==counter-1)
{
// fscanf(fpname,"%s",name);
fgets(name,20,fptname);
 fscanf(fptpas,"%d",&pas);

   printf(" OH DATA SEEMS TO VE FOUND !! c is inner %d  \n",c);
}
//fscanf(fptname,"%s",name);
fgets(name,20,fptname);
fscanf(fptpas,"%d",&pas);

if(!feof(fpttname)){
fprintf(fpttname,"%s",name);
fprintf(fpttpas,"%d\n",pas);


  c++;
  printf("c is %d  \n",c);

}

}



fclose(fptname);
fclose(fptpas);
fclose(fpttname);
fclose(fpttpas);



fptname=fopen("tname.txt","w");
if(fptname==NULL)
printf("tname file not open");

fptpas=fopen("tpass.txt","w");
if(fptpas==NULL)
printf("roll no file not open");

fpttname=fopen("_tname.txt","r");
if(fpttname==NULL)
printf("name file not open");

fpttpas=fopen("_tpass.txt","r");
if(fpttpas==NULL)
printf("roll no file not open");
for(i=1;i<c;i++)
{
	printf("put data to file \n");
fscanf(fpttpas,"%d",&pas);

fgets(name,20,fpttname);

//printf("%s\t%d\t%d\t%d\t%d\t%d\t%d",name,rno,en,hi,ma,sc,ss);

fprintf(fptpas,"%d\n",pas);

fprintf(fptname,"%s",name);





}

fclose(fptname);
fclose(fptpas);
fclose(fpttname);
fclose(fpttpas);







			            //remove
        }else
        {
        printf("please enter proper choise\n");
        }



}else
{
printf("WRONG PASSWORD!!");
}

}else
{
printf("PLEASE ENTER PROPER CHOISE AGAIN..");
}


	getch();
	return 0;
}
void reng()
{
 int marx,hmarx=0,counter=0,f,rno,var,frno,i,j,arr[100],arrr[100],ar[100],tot,s,sw,rnk;
char name[20],fname[20];

FILE *fpeng,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpeng=fopen("english.txt","r");
if(fpeng==NULL)
printf("english file not open");


counter=0;
while(!feof(fpname))
{
	//fscanf(fpname,"%s",name);
fgets(name,20,fpname);
	counter++;
//	printf("while loop\n");

}
printf("%d\n",counter);
for(i=0;i<counter-1;i++)
{
 fscanf(fpeng,"%d",&tot);
 arr[i]=tot;
 arrr[i]=i;
//printf("for loop %d   %d\n",arr[i],arrr[i]);

}

for(i=0;i<counter-1;i++)
{
//printf("%d\t %d", arr[i], arrr[i]);
//printf("for 2 loop\n");
//break;
}
for(i=0;i<counter-1;i++)
{
for(j=counter-2;i<j;j--)
{
 if(arr[j]>arr[j-1])
 {
 s=arr[j];
 arr[j]=arr[j-1];
 arr[j-1]=s;

 sw=arrr[j];
 arrr[j]=arrr[j-1];
 arrr[j-1]=sw;


 }



}



}

printf("\n\n");
for(i=0;i<counter-1;i++)
{
//printf("%d\t", arr[i]);
//printf("for 3 loop\n");
//break;
}



rnk=0;
f=0;
for(i=0;i<counter-1;i++)
{
    if(i!=0)
    {
    if(arr[i]==arr[i-1])
        {rnk--;
        f++;}

    }

    rnk++;
    ar[i]=rnk;
}
//f++;


printf("\n\n");
for(i=0;i<counter-1;i++)
{
//printf("%d\t", ar[i]);
//printf("for 3 loop\n");
//break;
}

printf("f is %d\n",f);
printf("NAME      ROLL NO             TOTAL             RANK\n");
for(i=0;i<counter-1;i++)
{
rewind(fpname);
rewind(fprno);
rewind(fpeng);
//printf(" outer, %d\n",arrr[i]);
for(j=0;j<=arrr[i];j++)
{
 fscanf(fpeng,"%d",&tot);
 fscanf(fprno,"%d",&rno);
// fscanf(fpname,"%s",name);
fgets(name,20,fpname);
//printf("inner %d",arrr[i]);

}

printf("%s",name);
for(j=0;j<(20-strlen(name));j++)
{printf(" ");

}
printf("\t     %d\t \t %d\t\t   %d\n",rno,tot,ar[i]);
//break;
}


for(i=0;i<counter-1;i++)
{
    var=counter-f;
    var=var-arr[i];
//printf("%d\t %d\t %d", arr[i], arrr[i],var);
//printf("for 3 loop\n");
//break;
}



fclose(fpname);
fclose(fprno);
fclose(fpeng);




}
void rhin()
{

int marx,hmarx=0,counter=0,f,rno,frno,i,j,arr[100],arrr[100],ar[100],tot,s,sw,rnk;
char name[20],fname[20];

FILE *fphin,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fphin=fopen("hindi.txt","r");
if(fphin==NULL)
printf("hindi file not open");


counter=0;
while(!feof(fpname))
{
	//fscanf(fpname,"%s",name);
fgets(name,20,fpname);
	counter++;
//	printf("while loop\n");

}
//printf("%d\n",counter);
for(i=0;i<counter-1;i++)
{
 fscanf(fphin,"%d",&tot);
 arr[i]=tot;
 arrr[i]=i;
//printf("for loop %d   %d\n",arr[i],arrr[i]);

}

for(i=0;i<counter-1;i++)
{
//printf("%d\t %d", arr[i], arrr[i]);
//printf("for 2 loop\n");
//break;
}
for(i=0;i<counter-1;i++)
{
for(j=counter-2;i<j;j--)
{
 if(arr[j]>arr[j-1])
 {
 s=arr[j];
 arr[j]=arr[j-1];
 arr[j-1]=s;

 sw=arrr[j];
 arrr[j]=arrr[j-1];
 arrr[j-1]=sw;


 }



}



}

printf("\n\n");
for(i=0;i<counter-1;i++)
{
//printf("%d\t %d", arr[i], arrr[i]);
//printf("for 3 loop\n");
//break;
}

rnk=0;
f=0;
for(i=0;i<counter-1;i++)
{
    if(i!=0)
    {
    if(arr[i]==arr[i-1]){
        rnk--;
        f++;
    }
    }

    rnk++;
    ar[i]=rnk;
}




printf("NAME                         ROLL NO             TOTAL             RANK\n");
for(i=0;i<counter-1;i++)
{
rewind(fpname);
rewind(fprno);
rewind(fphin);
//printf(" outer, %d\n",arrr[i]);
for(j=0;j<=arrr[i];j++)
{
 fscanf(fphin,"%d",&tot);
 fscanf(fprno,"%d",&rno);
// fscanf(fpname,"%s",name);
fgets(name,20,fpname);
//printf("inner %d",arrr[i]);

}

printf("%s",name);
for(j=0;j<(20-strlen(name));j++)
{printf(" ");
}
printf("\t     %d\t \t %d\t\t   %d\n",rno,tot,ar[i]);
//break;
}


for(i=0;i<counter-1;i++)
{
//printf("%d\t %d\t %d", arr[i], arrr[i],ar[i]);
//printf("for 3 loop\n");
//break;
}



fclose(fpname);
fclose(fprno);
fclose(fphin);

}
void rmat()
{

int marx,hmarx=0,counter=0,f,rno,frno,i,j,arr[100],arrr[100],ar[100],tot,s,sw,rnk;
char name[20],fname[20];

FILE *fpmat,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpmat=fopen("math.txt","r");
if(fpmat==NULL)
printf("maths file not open");


counter=0;
while(!feof(fpname))
{
	//fscanf(fpname,"%s",name);
fgets(name,20,fpname);
	counter++;
//	printf("while loop\n");

}
//printf("%d\n",counter);
for(i=0;i<counter-1;i++)
{
 fscanf(fpmat,"%d",&tot);
 arr[i]=tot;
 arrr[i]=i;
//printf("for loop %d   %d\n",arr[i],arrr[i]);

}

for(i=0;i<counter-1;i++)
{
//printf("%d\t %d", arr[i], arrr[i]);
//printf("for 2 loop\n");
//break;
}
for(i=0;i<counter-1;i++)
{
for(j=counter-2;i<j;j--)
{
 if(arr[j]>arr[j-1])
 {
 s=arr[j];
 arr[j]=arr[j-1];
 arr[j-1]=s;

 sw=arrr[j];
 arrr[j]=arrr[j-1];
 arrr[j-1]=sw;


 }



}



}

printf("\n\n");
for(i=0;i<counter-1;i++)
{
//printf("%d\t %d", arr[i], arrr[i]);
//printf("for 3 loop\n");
//break;
}

rnk=0;
f=0;
for(i=0;i<counter-1;i++)
{
    if(i!=0)
    {
    if(arr[i]==arr[i-1]){
        rnk--;
        f++;
    }
    }

    rnk++;
    ar[i]=rnk;
}




printf("NAME                         ROLL NO             TOTAL             RANK\n");
for(i=0;i<counter-1;i++)
{
rewind(fpname);
rewind(fprno);
rewind(fpmat);
//printf(" outer, %d\n",arrr[i]);
for(j=0;j<=arrr[i];j++)
{
 fscanf(fpmat,"%d",&tot);
 fscanf(fprno,"%d",&rno);
// fscanf(fpname,"%s",name);
fgets(name,20,fpname);
//printf("inner %d",arrr[i]);

}

printf("%s",name);
for(j=0;j<(20-strlen(name));j++)
{printf(" ");
}
printf("\t     %d\t \t %d\t\t   %d\n",rno,tot,ar[i]);
//break;
}


for(i=0;i<counter-1;i++)
{
//printf("%d\t %d\t %d", arr[i], arrr[i],ar[i]);
//printf("for 3 loop\n");
//break;
}



fclose(fpname);
fclose(fprno);
fclose(fpmat);

}
void rsci()
{

int marx,hmarx=0,counter=0,f,rno,frno,i,j,arr[100],arrr[100],ar[100],tot,s,sw,rnk;
char name[20],fname[20];

FILE *fpsci,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpsci=fopen("science.txt","r");
if(fpsci==NULL)
printf("science file not open");


counter=0;
while(!feof(fpname))
{
	//fscanf(fpname,"%s",name);
fgets(name,20,fpname);
	counter++;
//	printf("while loop\n");

}
//printf("%d\n",counter);
for(i=0;i<counter-1;i++)
{
 fscanf(fpsci,"%d",&tot);
 arr[i]=tot;
 arrr[i]=i;
//printf("for loop %d   %d\n",arr[i],arrr[i]);

}

for(i=0;i<counter-1;i++)
{
//printf("%d\t %d", arr[i], arrr[i]);
//printf("for 2 loop\n");
//break;
}
for(i=0;i<counter-1;i++)
{
for(j=counter-2;i<j;j--)
{
 if(arr[j]>arr[j-1])
 {
 s=arr[j];
 arr[j]=arr[j-1];
 arr[j-1]=s;

 sw=arrr[j];
 arrr[j]=arrr[j-1];
 arrr[j-1]=sw;


 }



}



}

printf("\n\n");
for(i=0;i<counter-1;i++)
{
//printf("%d\t %d", arr[i], arrr[i]);
//printf("for 3 loop\n");
//break;
}

rnk=0;
f=0;
for(i=0;i<counter-1;i++)
{
    if(i!=0)
    {
    if(arr[i]==arr[i-1]){
        rnk--;
        f++;
    }
    }

    rnk++;
    ar[i]=rnk;
}




printf("NAME                         ROLL NO             TOTAL             RANK\n");
for(i=0;i<counter-1;i++)
{
rewind(fpname);
rewind(fprno);
rewind(fpsci);
//print\\\\\'r(j=0;j<=arrr[i];j++)
{
 fscanf(fpsci,"%d",&tot);
 fscanf(fprno,"%d",&rno);
// fscanf(fpname,"%s",name);
fgets(name,20,fpname);
//printf("inner %d",arrr[i]);

}

printf("%s",name);
for(j=0;j<(20-strlen(name));j++)
{printf(" ");
}
printf("\t     %d\t \t %d\t\t   %d\n",rno,tot,ar[i]);
//break;
}


for(i=0;i<counter-1;i++)
{
//printf("%d\t %d\t %d", arr[i], arrr[i],ar[i]);
//printf("for 3 loop\n");
//break;
}



fclose(fpname);
fclose(fprno);
fclose(fpsci);

}
void rssc()
{

int marx,hmarx=0,counter=0,f,rno,frno,i,j,arr[100],arrr[100],ar[100],tot,s,sw,rnk;
char name[20],fname;

FILE *fpssc,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpssc=fopen("sscience.txt","r");
if(fpssc==NULL)
printf("s science file not open");


counter=0;
while(!feof(fpname))
{
	//fscanf(fpname,"%s",name);
fgets(name,20,fpname);
	counter++;
//	printf("while loop\n");

}
printf("%d\n",counter);
for(i=0;i<counter-1;i++)
{
 fscanf(fpssc,"%d",&tot);
 arr[i]=tot;
 arrr[i]=i;
//printf("for loop %d   %d\n",arr[i],arrr[i]);

}

for(i=0;i<counter-1;i++)
{
//printf("%d\t %d", arr[i], arrr[i]);
//printf("for 2 loop\n");
//break;
}
for(i=0;i<counter-1;i++)
{
for(j=counter-2;i<j;j--)
{
 if(arr[j]>arr[j-1])
 {
 s=arr[j];
 arr[j]=arr[j-1];
 arr[j-1]=s;

 sw=arrr[j];
 arrr[j]=arrr[j-1];
 arrr[j-1]=sw;


 }



}



}

printf("\n\n");
for(i=0;i<counter-1;i++)
{
//printf("%d\t %d", arr[i], arrr[i]);
//printf("for 3 loop\n");
//break;
}

rnk=0;
f=0;
for(i=0;i<counter-1;i++)
{
    if(i!=0)
    {
    if(arr[i]==arr[i-1]){
        rnk--;
        f++;
    }
    }

    rnk++;
    ar[i]=rnk;
}




printf("NAME                         ROLL NO             TOTAL             RANK\n");
for(i=0;i<counter-1;i++)
{
rewind(fpname);
rewind(fprno);
rewind(fpssc);
//printf(" outer, %d\n",arrr[i]);
for(j=0;j<=arrr[i];j++)
{
 fscanf(fpssc,"%d",&tot);
 fscanf(fprno,"%d",&rno);
// fscanf(fpname,"%s",name);
fgets(name,20,fpname);
//printf("inner %d",arrr[i]);

}

printf("%s",name);
for(j=0;j<(20-strlen(name));j++)
{printf(" ");
}
printf("\t     %d\t \t %d\t\t   %d\n",rno,tot,ar[i]);
//break;
}


for(i=0;i<counter-1;i++)
{
//printf("%d\t %d\t %d", arr[i], arrr[i],ar[i]);
//printf("for 3 loop\n");
//break;
}



fclose(fpname);
fclose(fprno);
fclose(fpssc);

}
void rtot()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j,arr[100],arrr[100],ar[100],tot,s,sw,rnk;
char name[20],fname[20];

FILE *fptot,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fptot=fopen("total.txt","r");
if(fptot==NULL)
printf("total file not open");


counter=0;
while(!feof(fpname))
{
	//fscanf(fpname,"%s",name);
fgets(name,20,fpname);
counter++;
	printf("while loop\n");

}
printf("%d\n",counter);
for(i=0;i<counter-1;i++)
{
 fscanf(fptot,"%d",&tot);
 arr[i]=tot;
 arrr[i]=i;
//printf("for loop %d   %d\n",arr[i],arrr[i]);

}

for(i=0;i<counter-1;i++)
{
//printf("%d\t %d", arr[i], arrr[i]);
//printf("for 2 loop\n");
//break;
}
for(i=0;i<counter-1;i++)
{
for(j=counter-2;i<j;j--)
{
 if(arr[j]>arr[j-1])
 {
 s=arr[j];
 arr[j]=arr[j-1];
 arr[j-1]=s;

 sw=arrr[j];
 arrr[j]=arrr[j-1];
 arrr[j-1]=sw;


 }



}



}

printf("\n\n");
for(i=0;i<counter-1;i++)
{
//printf("%d\t %d", arr[i], arrr[i]);
//printf("for 3 loop\n");
//break;
}

rnk=0;
f=0;
for(i=0;i<counter-1;i++)
{
    if(i!=0)
    {
    if(arr[i]==arr[i-1]){
        rnk--;
        f++;
    }
    }

    rnk++;
    ar[i]=rnk;
}




printf("NAME                         ROLL NO             TOTAL             RANK\n");
for(i=0;i<counter-1;i++)
{
rewind(fpname);
rewind(fprno);
rewind(fptot);
//printf(" outer, %d\n",arrr[i]);
for(j=0;j<=arrr[i];j++)
{
 fscanf(fptot,"%d",&tot);
 fscanf(fprno,"%d",&rno);
// fscanf(fpname,"%s",name);
fgets(name,20,fpname);
//printf("inner %d",arrr[i]);

}

printf("%s",name);
for(j=0;j<(20-strlen(name));j++)
{printf(" ");
}
printf("\t     %d\t \t %d\t\t   %d\n",rno,tot,ar[i]);
//break;
}


for(i=0;i<counter-1;i++)
{
//printf("%d\t %d\t %d", arr[i], arrr[i],ar[i]);
//printf("for 3 loop\n");
//break;
}



fclose(fpname);
fclose(fprno);
fclose(fptot);

}




void catag()
{

	int rno,counter=0,frno,f=0,en=0,hi=0,ma=0,sc=0,ss=0,i,j,cat;
char name[20];
FILE *fpname,*fprno,*fpeng,*fphin,*fpmat,*fpsci,*fpssc;
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




while(!feof(fpname))
{
	//fscanf(fpname,"%s",name);
fgets(name,20,fpname);
	counter++;
//	printf("while loop\n");

}
//printf("counter is %d\n",counter);

rewind(fpname);
printf("BRONZE CATOGORY LIST IS ..\n");
printf("ROLL NO        NAME\n");

for(i=1;i<counter;i++)
{cat=0;
fscanf(fpeng,"%d",&en);
if(en>74)
cat++;
fscanf(fprno,"%d",&rno);

fscanf(fphin,"%d",&hi);
if(hi>74)
cat++;
fscanf(fpmat,"%d",&ma);
if(ma>74)
cat++;
fscanf(fpsci,"%d",&sc);
if(sc>74)
cat++;
fscanf(fpssc,"%d",&ss);
if(ss>74)
cat++;
//fscanf(fpname,"%s",name);
fgets(name,20,fpname);

if(cat==3)
{
printf("%d\t",rno);
 printf("\t%s\n",name);

//bronze
}



}










fclose(fpname);
fclose(fprno);
fclose(fpeng);
fclose(fphin);
fclose(fpmat);
fclose(fpsci);
fclose(fpssc);

}
void cata()
{

	int rno,counter=0,frno,f=0,en=0,hi=0,ma=0,sc=0,ss=0,i,j,cat;
char name[20];
FILE *fpname,*fprno,*fpeng,*fphin,*fpmat,*fpsci,*fpssc;
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




while(!feof(fpname))
{
	//fscanf(fpname,"%s",name);
fgets(name,20,fpname);
	counter++;
//	printf("while loop\n");

}
//printf("counter is %d\n",counter);

rewind(fpname);
printf("SILVER CATOGORY LIST IS ..\n");
printf("ROLL NO        NAME\n");
for(i=1;i<counter;i++)
{cat=0;
fscanf(fpeng,"%d",&en);
if(en>74)
cat++;
fscanf(fprno,"%d",&rno);

fscanf(fphin,"%d",&hi);
if(hi>74)
cat++;
fscanf(fpmat,"%d",&ma);
if(ma>74)
cat++;
fscanf(fpsci,"%d",&sc);
if(sc>74)
cat++;
fscanf(fpssc,"%d",&ss);
if(ss>74)
cat++;
//fscanf(fpname,"%s",name);
fgets(name,20,fpname);

if(cat==4)
{
    printf("%d\t");
 printf("\t%s\n",name);

//gold
}



}










fclose(fpname);
fclose(fprno);
fclose(fpeng);
fclose(fphin);
fclose(fpmat);
fclose(fpsci);
fclose(fpssc);

}
void cat()
{

	int rno,counter=0,frno,f=0,en=0,hi=0,ma=0,sc=0,ss=0,i,j,cat;
char name[20];
FILE *fpname,*fprno,*fpeng,*fphin,*fpmat,*fpsci,*fpssc;
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




while(!feof(fpname))
{
	//fscanf(fpname,"%s",name);
fgets(name,20,fpname);
	counter++;
//	printf("while loop\n");

}
//printf("counter is %d\n",counter);

rewind(fpname);
printf("GOLD CATOGORY LIST IS ..\n");
printf("ROLL NO        NAME\n");
for(i=1;i<counter;i++)
{cat=0;
fscanf(fpeng,"%d",&en);
if(en>74)
cat++;
fscanf(fprno,"%d",&rno);

fscanf(fphin,"%d",&hi);
if(hi>74)
cat++;
fscanf(fpmat,"%d",&ma);
if(ma>74)
cat++;
fscanf(fpsci,"%d",&sc);
if(sc>74)
cat++;
fscanf(fpssc,"%d",&ss);
if(ss>74)
cat++;
//fscanf(fpname,"%s",name);
fgets(name,20,fpname);

if(cat==5)
{
    printf("%d\t",rno);
 printf("\t%s\n",name);

//gold
}



}










fclose(fpname);
fclose(fprno);
fclose(fpeng);
fclose(fphin);
fclose(fpmat);
fclose(fpsci);
fclose(fpssc);

}



void dtot()
{

	int rno,counter=0,frno,f=0,en=0,hi=0,ma=0,sc=0,ss=0,i,j,cat;
char name[20];
FILE *fpname,*fprno,*fpeng,*fphin,*fpmat,*fpsci,*fpssc;
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




while(!feof(fpname))
{
	//fscanf(fpname,"%s",name);
fgets(name,20,fpname);
	counter++;
//	printf("while loop\n");

}
//printf("counter is %d\n",counter);

rewind(fpname);
printf("overall distinction LIST IS ..\n");
printf("ROLL NO        NAME\n");
for(i=1;i<counter;i++)
{cat=0;
fscanf(fpeng,"%d",&en);
if(en>74)
cat++;
fscanf(fprno,"%d",&rno);

fscanf(fphin,"%d",&hi);
if(hi>74)
cat++;
fscanf(fpmat,"%d",&ma);
if(ma>74)
cat++;
fscanf(fpsci,"%d",&sc);
if(sc>74)
cat++;
fscanf(fpssc,"%d",&ss);
if(ss>74)
cat++;
//fscanf(fpname,"%s",name);
fgets(name,20,fpname);

if(cat==5)
{
    printf("%d\t",rno);
 printf("\t%s\n",name);

//gold
}



}










fclose(fpname);
fclose(fprno);
fclose(fpeng);
fclose(fphin);
fclose(fpmat);
fclose(fpsci);
fclose(fpssc);
}
void dssc()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpssc,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpssc=fopen("sscience.txt","r");
if(fpssc==NULL)
printf("sscience file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fpssc))
{
//counter++;
fscanf(fpssc,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(74<marx&&!feof(fpssc))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student who got distinction is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fpssc);

}
void dsci()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpsci,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpsci=fopen("science.txt","r");
if(fpsci==NULL)
printf("english file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fpsci))
{
//counter++;
fscanf(fpsci,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(74<marx&&!feof(fpsci))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student who got distinction is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fpsci);

}
void dmat()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpmat,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpmat=fopen("math.txt","r");
if(fpmat==NULL)
printf("english file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fpmat))
{
//counter++;
fscanf(fpmat,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(74<marx&&!feof(fpmat))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student who got distinction is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fpmat);

}
void dhin()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fphin,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fphin=fopen("hindi.txt","r");
if(fphin==NULL)
printf("hindi file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fphin))
{
//counter++;
fscanf(fphin,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(74<marx&&!feof(fphin))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student who got distinction is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fphin);

}
void deng()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpeng,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpeng=fopen("english.txt","r");
if(fpeng==NULL)
printf("english file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fpeng))
{
//counter++;
fscanf(fpeng,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(74<marx&&!feof(fpeng))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student who got distinction is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fpeng);

}



void fssc()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpssc,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpssc=fopen("sscience.txt","r");
if(fpssc==NULL)
printf("sscience file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fpssc))
{
//counter++;
fscanf(fpssc,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(33>marx&&!feof(fpssc))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student fail is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fpssc);

}
void fsci()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpsci,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpsci=fopen("science.txt","r");
if(fpsci==NULL)
printf("english file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fpsci))
{
//counter++;
fscanf(fpsci,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(33>marx&&!feof(fpsci))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student fail is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fpsci);

}
void fmat()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpmat,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpmat=fopen("math.txt","r");
if(fpmat==NULL)
printf("english file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fpmat))
{
//counter++;
fscanf(fpmat,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(33>marx&&!feof(fpmat))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student fail is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fpmat);

}
void fhin()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fphin,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fphin=fopen("hindi.txt","r");
if(fphin==NULL)
printf("hindi file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fphin))
{
//counter++;
fscanf(fphin,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(33>marx&&!feof(fphin))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student fail is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fphin);

}
void feng()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpeng,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpeng=fopen("english.txt","r");
if(fpeng==NULL)
printf("english file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fpeng))
{
//counter++;
fscanf(fpeng,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(33>marx&&!feof(fpeng))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student fail is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fpeng);

}



void pssc()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpssc,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpssc=fopen("sscience.txt","r");
if(fpssc==NULL)
printf("sscience file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fpssc))
{
//counter++;
fscanf(fpssc,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(33<marx&&!feof(fpssc))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student pass is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fpssc);

}
void psci()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpsci,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpsci=fopen("science.txt","r");
if(fpsci==NULL)
printf("english file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fpsci))
{
//counter++;
fscanf(fpsci,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(33<marx&&!feof(fpsci))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student pass is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fpsci);

}
void pmat()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpmat,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpmat=fopen("math.txt","r");
if(fpmat==NULL)
printf("english file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fpmat))
{
//counter++;
fscanf(fpmat,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(33<marx&&!feof(fpmat))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student pass is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fpmat);

}
void phin()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fphin,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fphin=fopen("hindi.txt","r");
if(fphin==NULL)
printf("hindi file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fphin))
{
//counter++;
fscanf(fphin,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(33<marx&&!feof(fphin))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student pass is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fphin);

}
void peng()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpeng,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpeng=fopen("english.txt","r");
if(fpeng==NULL)
printf("english file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);


counter=0;
printf("NAME \t               ROLL NO     \t MARKS\n");
while(!feof(fpeng))
{
//counter++;
fscanf(fpeng,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);



//printf("while loop mrx is %d\n",marx);
if(33<marx&&!feof(fpeng))
{
counter++;
printf("%s",name);

printf(" \t \t\t%d\t \t     %d \n",rno,marx);
}

}

printf("total no of student pass is %d\n",counter);








fclose(fpname);
fclose(fprno);
fclose(fpeng);

}



void heng()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpeng,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpeng=fopen("english.txt","r");
if(fpeng==NULL)
printf("english file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);
while(!feof(fpeng))
{
counter++;
fscanf(fpeng,"%d",&marx);
//printf("while loop mrx is %d\n",marx);
if(hmarx<marx)
{
hmarx=marx;
f=counter;
}

}
printf("highest marx is %d",hmarx);
rewind(fpeng);
for(i=0;i<f;i++)
{
fscanf(fpeng,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);


}




//printf("f is %d\n",f );

printf("NAME \t           ROLL NO   \t MARKS\n");

printf("%s",name);
for(j=0;j<(20-strlen(name));j++)
{printf(" ");
}
printf(" %d\t \t     %d \n",rno,marx);


fclose(fpname);
fclose(fprno);
fclose(fpeng);

}
void hmat()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpmat,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpmat=fopen("math.txt","r");
if(fpmat==NULL)
printf("math file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);
while(!feof(fpmat))
{
counter++;
fscanf(fpmat,"%d",&marx);
//printf("while loop mrx is %d\n",marx);
if(hmarx<marx)
{
hmarx=marx;
f=counter;
}

}
printf("highest marx is %d",hmarx);
rewind(fpmat);
for(i=0;i<f;i++)
{
fscanf(fpmat,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);


}




//printf("f is %d\n",f );

printf("NAME \t           ROLL NO   \t MARKS\n");

printf("%s",name);
for(j=0;j<(20-strlen(name));j++)
{printf(" ");
}
printf(" %d\t \t     %d \n",rno,marx);


fclose(fpname);
fclose(fprno);
fclose(fpmat);

}
void hhin()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fphin,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fphin=fopen("hindi.txt","r");
if(fphin==NULL)
printf("hindi file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);
while(!feof(fphin))
{
counter++;
fscanf(fphin,"%d",&marx);
//printf("while loop mrx is %d\n",marx);
if(hmarx<marx)
{
hmarx=marx;
f=counter;
}

}
printf("highest marx is %d",hmarx);
rewind(fphin);
for(i=0;i<f;i++)
{
fscanf(fphin,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);


}




//printf("f is %d\n",f );

printf("NAME \t           ROLL NO   \t MARKS\n");

printf("%s",name);
for(j=0;j<(20-strlen(name));j++)
{printf(" ");
}
printf(" %d\t \t     %d \n",rno,marx);


fclose(fpname);
fclose(fprno);
fclose(fphin);

}
void hsci()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpsci,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpsci=fopen("science.txt","r");
if(fpsci==NULL)
printf("english file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);
while(!feof(fpsci))
{
counter++;
fscanf(fpsci,"%d",&marx);
//printf("while loop mrx is %d\n",marx);
if(hmarx<marx)
{
hmarx=marx;
f=counter;
}

}
printf("highest marx is %d",hmarx);
rewind(fpsci);
for(i=0;i<f;i++)
{
fscanf(fpsci,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);


}




//printf("f is %d\n",f );

printf("NAME \t           ROLL NO   \t MARKS\n");

printf("%s",name);
for(j=0;j<(20-strlen(name));j++)
{printf(" ");
}
printf(" %d\t \t     %d \n",rno,marx);


fclose(fpname);
fclose(fprno);
fclose(fpsci);

}
void hssc()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fpssc,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpssc=fopen("sscience.txt","r");
if(fpssc==NULL)
printf("sscience file not open");
//printf(" b4 while loop mrx is %d\n",hmarx);
while(!feof(fpssc))
{
counter++;
fscanf(fpssc,"%d",&marx);
//printf("while loop mrx is %d\n",marx);
if(hmarx<marx)
{
hmarx=marx;
f=counter;
}

}
printf("highest marx is %d",hmarx);
rewind(fpssc);
for(i=0;i<f;i++)
{
fscanf(fpssc,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);


}




//printf("f is %d\n",f );

printf("NAME \t           ROLL NO   \t MARKS\n");

printf("%s",name);
for(j=0;j<(20-strlen(name));j++)
{printf(" ");
}
printf(" %d\t \t     %d \n",rno,marx);


fclose(fpname);
fclose(fprno);
fclose(fpssc);

}
void htot()
{
int marx,hmarx=0,counter=0,f,rno,frno,i,j;
char name[20],fname;

FILE *fptot,*fpname,*fprno;

fpname=fopen("name.txt","r");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fptot=fopen("total.txt","r");
if(fptot==NULL)
printf("total file not open");
printf(" b4 while loop mrx is %d\n",hmarx);
while(!feof(fptot))
{
counter++;
fscanf(fptot,"%d",&marx);
printf("while loop mrx is %d\n",marx);
if(hmarx<marx)
{
hmarx=marx;
f=counter;
}

}
printf("highest marx is %d",hmarx);
rewind(fptot);
for(i=0;i<f;i++)
{
fscanf(fptot,"%d",&marx);

fscanf(fprno,"%d",&rno);

fgets(name,20,fpname);


}




//printf("f is %d\n",f );

printf("\nNAME \t           ROLL NO   \t MARKS\n");

printf("%s",name);
//printf("%s",name);
for(j=0;j<(20-strlen(name));j++)
{printf(" ");
}
printf(" %d\t \t     %d \n",rno,marx);


fclose(fpname);
fclose(fprno);
fclose(fptot);

}



void delname()
{
int rno,counter,frno,f=0,en=0,hi=0,ma=0,sc=0,ss=0,tot=0,i,c;
	char name[20]/*={'k','a','v','y','a',' ','m','i','s','h','r','a'}*/,fname[20];
	printf("enter name\n");
	//name="kava mishra";
	gets(name);
	gets(name);                                      ////// WHY IT IS NOT WORKING ;(NAILED IT  ;)
//printf("%s ........",name);

	getch();

FILE *fpname,*fprno,*fpeng,*fphin,*fpmat,*fpsci,*fpssc,*fptot,*fptname,*fptrno,*fpteng,*fpthin,*fptmat,*fptsci,*fptssc,*fpttot;
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

fptot=fopen("total.txt","r");
if(fptot==NULL)
printf("total file not open");

fptname=fopen("_name.txt","w");
if(fpname==NULL)
printf("name file not open");

fptrno=fopen("_roll.txt","w");
if(fprno==NULL)
printf("roll no file not open");

fpteng=fopen("_english.txt","w");
if(fpeng==NULL)
printf("english file not open");

fpthin=fopen("_hindi.txt","w");
if(fphin==NULL)
printf("hindi file not open");

fptmat=fopen("_math.txt","w");
if(fpmat==NULL)
printf("math file not open");

fptsci=fopen("_science.txt","w");
if(fpsci==NULL)
printf("science file not open");

fptssc=fopen("_sscience.txt","w");
if(fpssc==NULL)
printf("sscience file not open");

fpttot=fopen("_total.txt","w");
if(fpttot==NULL)
printf("total file not open");




	counter=0;
	f=0;
while(strcmp(fname,name)&&(!feof(fpname)))
{
    counter++;
	fgets(fname,20,fpname);
	fname[strlen(fname)-1]='\0';
	if(!(strcmp(fname,name))){
		f=1;
		break;
	}
//	printf("in while loop %s,%s  counter is %d strf is %d,str is %d\n",name ,fname,counter,strlen(fname),strlen(name));

//if(counter==1)
//f=1;





}

if(f!=1){
printf("record not exist... TRY AGAIN!!\n");
return;
}
//printf("counter is %d",counter);

rewind(fpname);
c=0;
while(!feof(fpname))
{

if(c==counter-1)
{
fgets(fname,20,fpname);
 fscanf(fprno,"%d",&rno);
fscanf(fpeng,"%d",&en);
fscanf(fphin,"%d",&hi);
fscanf(fpmat,"%d",&ma);
fscanf(fpsci,"%d",&sc);
fscanf(fpssc,"%d",&ss);
fscanf(fptot,"%d",&tot);
 //  printf("c is inner %d  \n",c);
}


fgets(fname,20,fpname);
fscanf(fprno,"%d",&rno);
fscanf(fpeng,"%d",&en);
fscanf(fphin,"%d",&hi);
fscanf(fpmat,"%d",&ma);
fscanf(fpsci,"%d",&sc);
fscanf(fpssc,"%d",&ss);
fscanf(fptot,"%d",&tot);





if(!feof(fpname)){
//if(c!=counter-1){
fputs(fname,fptname);
fprintf(fptrno,"%d\n",rno);
fprintf(fpteng,"%d\n",en);
fprintf(fpthin,"%d\n",hi);
fprintf(fptmat,"%d\n",ma);
fprintf(fptsci,"%d\n",sc);
fprintf(fptssc,"%d\n",ss);
fprintf(fpttot,"%d\n",tot);

  c++;
 // printf("c is %d  \n",c);

}
}







fclose(fpname);
fclose(fprno);
fclose(fpeng);
fclose(fphin);
fclose(fpmat);
fclose(fpsci);
fclose(fpssc);
fclose(fptot);
fclose(fptname);
fclose(fptrno);
fclose(fpteng);
fclose(fpthin);
fclose(fptmat);
fclose(fptsci);
fclose(fptssc);
fclose(fpttot);







fpname=fopen("name.txt","w");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","w");
if(fprno==NULL)
printf("roll no file not open");

fpeng=fopen("english.txt","w");
if(fpeng==NULL)
printf("english file not open");

fphin=fopen("hindi.txt","w");
if(fphin==NULL)
printf("hindi file not open");

fpmat=fopen("math.txt","w");
if(fpmat==NULL)
printf("math file not open");

fpsci=fopen("science.txt","w");
if(fpsci==NULL)
printf("science file not open");

fpssc=fopen("sscience.txt","w");
if(fpssc==NULL)
printf("sscience file not open");

fptot=fopen("total.txt","w");
if(fptot==NULL)
printf("total file not open");

fptname=fopen("_name.txt","r");
if(fpname==NULL)
printf("name file not open");

fptrno=fopen("_roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpteng=fopen("_english.txt","r");
if(fpeng==NULL)
printf("english file not open");

fpthin=fopen("_hindi.txt","r");
if(fphin==NULL)
printf("hindi file not open");

fptmat=fopen("_math.txt","r");
if(fpmat==NULL)
printf("math file not open");

fptsci=fopen("_science.txt","r");
if(fpsci==NULL)
printf("science file not open");

fptssc=fopen("_sscience.txt","r");
if(fpssc==NULL)
printf("sscience file not open");

fpttot=fopen("_total.txt","r");
if(fpttot==NULL)
printf("total file not open");





//printf("NAME \t ROLL NO \t  ENGLISH HINDI MATHS  SCIENCE  SOCIAL SCIENCE\n");
for(i=0;i<c;i++)
{
fscanf(fpteng,"%d",&en);
fscanf(fptrno,"%d",&rno);
fscanf(fpthin,"%d",&hi);
fscanf(fptmat,"%d",&ma);
fscanf(fptsci,"%d",&sc);
fscanf(fptssc,"%d",&ss);
fscanf(fpttot,"%d",&tot);
fgets(fname,20,fptname);

//printf("%s\t%d\t%d\t%d\t%d\t%d\t%d",name,rno,en,hi,ma,sc,ss);

fprintf(fpeng,"%d\n",en);
fprintf(fprno,"%d\n",rno);
fprintf(fphin,"%d\n",hi);
fprintf(fpmat,"%d\n",ma);
fprintf(fpsci,"%d\n",sc);
fprintf(fpssc,"%d\n",ss);
fprintf(fptot,"%d\n",tot);
fputs(fname,fpname);





}


fclose(fpname);
fclose(fprno);
fclose(fpeng);
fclose(fphin);
fclose(fpmat);
fclose(fpsci);
fclose(fpssc);
fclose(fptot);
fclose(fptname);
fclose(fptrno);
fclose(fpteng);
fclose(fpthin);
fclose(fptmat);
fclose(fptsci);
fclose(fptssc);
fclose(fpttot);


}

void delrno()
{
int rno,counter,frno,f=0,en=0,hi=0,ma=0,sc=0,ss=0,tot,i,c;
char name[20];

FILE *fpname,*fprno,*fpeng,*fphin,*fpmat,*fpsci,*fpssc,*fptot,*fptname,*fptrno,*fpteng,*fpthin,*fptmat,*fptsci,*fptssc,*fpttot;
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

fptot=fopen("total.txt","r");
if(fptot==NULL)
printf("total file not open");


fptname=fopen("_name.txt","w");
if(fpname==NULL)
printf("name file not open");

fptrno=fopen("_roll.txt","w");
if(fprno==NULL)
printf("roll no file not open");

fpteng=fopen("_english.txt","w");
if(fpeng==NULL)
printf("english file not open");

fpthin=fopen("_hindi.txt","w");
if(fphin==NULL)
printf("hindi file not open");

fptmat=fopen("_math.txt","w");
if(fpmat==NULL)
printf("math file not open");

fptsci=fopen("_science.txt","w");
if(fpsci==NULL)
printf("science file not open");

fptssc=fopen("_sscience.txt","w");
if(fpssc==NULL)
printf("sscience file not open");

fpttot=fopen("_total.txt","w");
if(fptot==NULL)
printf("total file not open");

printf("enter the roll no\n");
scanf("%d",&rno);
counter=0;
while(!feof(fprno))
{counter++;
	fscanf(fprno,"%d",&frno);
if(frno==rno){
f=1;
break;
}

//	printf("counter is %d fro is %d  rno id %d, \n",counter,frno,rno);


}

if(f!=1){
printf("record not exist... TRY AGAIN!!\n");
return;
}
c=0;
rewind(fprno);
while(!feof(fpname))
{


if(c==counter-1)
{
// fscanf(fpname,"%s",name);
fgets(name,20,fpname);
 fscanf(fprno,"%d",&rno);
fscanf(fpeng,"%d",&en);
fscanf(fphin,"%d",&hi);
fscanf(fpmat,"%d",&ma);
fscanf(fpsci,"%d",&sc);
fscanf(fpssc,"%d",&ss);
fscanf(fptot,"%d",&tot);
  // printf("c is inner %d  \n",c);
}
//fscanf(fpname,"%s",name);
fgets(name,20,fpname);
fscanf(fprno,"%d",&rno);
fscanf(fpeng,"%d",&en);
fscanf(fphin,"%d",&hi);
fscanf(fpmat,"%d",&ma);
fscanf(fpsci,"%d",&sc);
fscanf(fpssc,"%d",&ss);
fscanf(fptot,"%d",&tot);
if(!feof(fpname)){
fprintf(fptname,"%s",name);
fprintf(fptrno,"%d\n",rno);
fprintf(fpteng,"%d\n",en);
fprintf(fpthin,"%d\n",hi);
fprintf(fptmat,"%d\n",ma);
fprintf(fptsci,"%d\n",sc);
fprintf(fptssc,"%d\n",ss);
fprintf(fpttot,"%d\n",tot);

  c++;
  //printf("c is %d  \n",c);

}

}



fclose(fpname);
fclose(fprno);
fclose(fpeng);
fclose(fphin);
fclose(fpmat);
fclose(fpsci);
fclose(fpssc);
fclose(fptot);
fclose(fptname);
fclose(fptrno);
fclose(fpteng);
fclose(fpthin);
fclose(fptmat);
fclose(fptsci);
fclose(fptssc);
fclose(fpttot);

name[0]='o';
name[1]='o';
fpname=fopen("name.txt","w");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","w");
if(fprno==NULL)
printf("roll no file not open");

fpeng=fopen("english.txt","w");
if(fpeng==NULL)
printf("english file not open");

fphin=fopen("hindi.txt","w");
if(fphin==NULL)
printf("hindi file not open");

fpmat=fopen("math.txt","w");
if(fpmat==NULL)
printf("math file not open");

fpsci=fopen("science.txt","w");
if(fpsci==NULL)
printf("science file not open");

fpssc=fopen("sscience.txt","w");
if(fpssc==NULL)
printf("sscience file not open");

fptot=fopen("total.txt","w");
if(fptot==NULL)
printf("total file not open");


fptname=fopen("_name.txt","r");
if(fpname==NULL)
printf("name file not open");

fptrno=fopen("_roll.txt","r");
if(fprno==NULL)
printf("roll no file not open");

fpteng=fopen("_english.txt","r");
if(fpeng==NULL)
printf("english file not open");

fpthin=fopen("_hindi.txt","r");
if(fphin==NULL)
printf("hindi file not open");

fptmat=fopen("_math.txt","r");
if(fpmat==NULL)
printf("math file not open");

fptsci=fopen("_science.txt","r");
if(fpsci==NULL)
printf("science file not open");

fptssc=fopen("_sscience.txt","r");
if(fpssc==NULL)
printf("sscience file not open");

fpttot=fopen("_total.txt","r");
if(fpttot==NULL)
printf("total file not open");


//printf("NAME \t ROLL NO \t  ENGLISH HINDI MATHS  SCIENCE  SOCIAL SCIENCE\n");
for(i=0;i<c;i++)
{
fscanf(fpteng,"%d",&en);
fscanf(fptrno,"%d",&rno);
fscanf(fpthin,"%d",&hi);
fscanf(fptmat,"%d",&ma);
fscanf(fptsci,"%d",&sc);
fscanf(fptssc,"%d",&ss);
fscanf(fpttot,"%d",&tot);
//fscanf(fptname,"%s",name);
fgets(name,20,fptname);
//printf("%s",name);

//printf("%s\t%d\t%d\t%d\t%d\t%d\t%d",name,rno,en,hi,ma,sc,ss);

fprintf(fpeng,"%d\n",en);
fprintf(fprno,"%d\n",rno);
fprintf(fphin,"%d\n",hi);
fprintf(fpmat,"%d\n",ma);
fprintf(fpsci,"%d\n",sc);
fprintf(fpssc,"%d\n",ss);
fprintf(fptot,"%d\n",tot);
fprintf(fpname,"%s",name);





}

fclose(fpname);
fclose(fprno);
fclose(fpeng);
fclose(fphin);
fclose(fpmat);
fclose(fpsci);
fclose(fpssc);
fclose(fptot);
fclose(fptname);
fclose(fptrno);
fclose(fpteng);
fclose(fpthin);
fclose(fptmat);
fclose(fptsci);
fclose(fptssc);
fclose(fpttot);
}



void disname()
{}
void disrno()
{
int rno,counter,frno,f=0,en=0,hi=0,ma=0,sc=0,ss=0,tot=0,per=0,j,i;
char name[20];
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

fptot=fopen("total.txt","r");
if(fpssc==NULL)
printf("total file not open");



printf("enter the roll no\n");
scanf("%d",&rno);
counter=0;
f=0;
while(!feof(fprno))
{counter++;
	fscanf(fprno,"%d",&frno);
if(frno==rno){

f=1;
break;}
//	printf("counter is %d fro is %d  rno id %d\n",counter,frno,rno);
}
if(f!=1){
printf("record not exist... TRY AGAIN!!\n");
return;
}


for(i=0;i<counter;i++)
{
fscanf(fpeng,"%d",&en);
fscanf(fphin,"%d",&hi);
fscanf(fpmat,"%d",&ma);
fscanf(fpsci,"%d",&sc);
fscanf(fpssc,"%d",&ss);
fscanf(fptot,"%d",&tot);
per=tot/5;
//fscanf(fpname,"%s",name);
fgets(name,20,fpname);


}




//printf("counter is %d\n",counter );
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
}void diall()
{}





void adding ()
{

int a,tot=0;
char name[20];
FILE *fpname,*fprno,*fpeng,*fphin,*fpmat,*fpsci,*fpssc,*fptot;
fpname=fopen("name.txt","a");
if(fpname==NULL)
printf("name file not open");

fprno=fopen("roll.txt","a");
if(fprno==NULL)
printf("roll no file not open");

fpeng=fopen("english.txt","a");
if(fpeng==NULL)
printf("english file not open");

fphin=fopen("hindi.txt","a");
if(fphin==NULL)
printf("hindi file not open");

fpmat=fopen("math.txt","a");
if(fpmat==NULL)
printf("math file not open");

fpsci=fopen("science.txt","a");
if(fpsci==NULL)
printf("science file not open");

fpssc=fopen("sscience.txt","a");
if(fpssc==NULL)
printf("sscience file not open");

fptot=fopen("total.txt","a");
if(fptot==NULL)
printf("total file not open");




printf("enter name\n");
gets(name);
gets(name);
fprintf(fpname,"%s\n",name);

printf("enter roll no\n");
scanf("%d",&a);
fprintf(fprno,"%d\n",a);


printf("enter no in english\n");
scanf("%d",&a);
fprintf(fpeng,"%d\n",a);
tot=tot+a;

printf("enter no in hindi\n");
scanf("%d",&a);
fprintf(fphin,"%d\n",a);
tot=tot+a;

printf("enter no in maths\n");
scanf("%d",&a);
fprintf(fpmat,"%d\n",a);
tot=tot+a;

printf("enter no in science\n");
scanf("%d",&a);
fprintf(fpsci,"%d\n",a);
tot=tot+a;

printf("enter no in social science\n");
scanf("%d",&a);
fprintf(fpssc,"%d\n",a);

tot=tot+a;
fprintf(fptot,"%d\n",tot);



fclose(fpname);
fclose(fprno);
fclose(fpeng);
fclose(fphin);
fclose(fpmat);
fclose(fpsci);
fclose(fpssc);
fclose(fptot);



}
