#include <stdio.h>
int main()
{
	while(1)
	{
	printf("Valige reziim\n");
	printf("I-Vool(Current)\n");
	printf("U-Pinge(Voltage)\n");
	printf("R-Takisti(Resistance)\n");
	printf("T-Transistor\n");
	printf("F-muutmine standartsete uhikutele\n");
	char c;
	//~ char operation;
	double U=0,R=0,I=0,I_k,I_b,arv;
	double resI,resU,resR,b;
	int uhik;
	scanf(" %c",&c);
	switch(c)
	{
		case 'I':
		printf("Sisestage uhik, milles Teil on U\n");
		printf("Toetavad uhikud: Milli=3,Mikro=6,Nano=9, kui standartsed uhikud=0\n");
		scanf("%d",&uhik);
		printf("Sisestage U \n");
		scanf("%lf",&U);
		switch(uhik)
		{
			case 0:
			break;
			case 3:
			 U=U*0.001;
			 break;
			case 6:
			 U=U*0.000001;
			 break;
			 case 9:
			 U=U*0.000000001;
			 break;
		}
		printf("Sisestage R\n");
		scanf("%lf",&R);
		resI=U/R;
		printf("Result = %lf\n",resI);
		break;
		case 'U':
		printf("Sisestage uhik, milles Teil on I\n");
		printf("Toetavad uhikud: Milli=3,Mikro=6,Nano=9, kui standartsed uhikud=0\n");
		scanf("%d",&uhik);
		printf("Sisestage I\n");
		scanf("%lf",&I);
		switch(uhik)
		{
			case 0:
			break;
			case 3:
			 I=I*0.001;
			 break;
			case 6:
			 I=I*0.000001;
			 break;
			 case 9:
			 I=I*0.000000001;
			 break;
		}
		printf("Sisestage R\n");
		scanf("%lf",&R);
		resU=I*R;
		printf("Result = %lf\n",resU);
		printf("\n");
		break;
		case 'R':
		printf("Sisestage uhik, milles Teil on U\n");
		printf("Toetavad uhikud: Milli=3,Mikro=6,Nano=9, kui standartsed uhikud=0\n");
		scanf("%d",&uhik);
		printf("Sisestage U\n");
		scanf("%lf",&U);
		switch(uhik)
		{
			case 0:
			break;
			case 3:
			 U=U*0.001;
			 break;
			case 6:
			 U=U*0.000001;
			 break;
			 case 9:
			 U=U*0.000000001;
			 break;
		}
		printf("Sisestage uhik, milles Teil on I\n");
		printf("Toetavad uhikud: Milli=3,Mikro=6,Nano=9, kui standartsed uhikud=0\n");
		scanf("%d",&uhik);
		printf("Sisestage I\n");
		scanf("%lf",&I);
		switch(uhik)
		{
			case 0:
			break;
			case 3:
			 I=I*0.001;
			 break;
			case 6:
			 I=I*0.000001;
			 break;
			 case 9:
			 I=I*0.000000001;
			 break;
		}
		resR=U/I;
		printf("Result = %lf\n",resR);
		break;
		
		case 'T':
		printf("Sisestage uhik, milles Teil on I_k\n");
		printf("Toetavad uhikud: Milli=3,Mikro=6,Nano=9, kui standartsed uhikud=0\n");
		scanf("%d",&uhik);
		printf("Sisestage I_k\n");
		scanf("%lf",&I_k);
		switch(uhik)
		{
			case 0:
			break;
			case 3:
			 I_k=I_k*0.001;
			 break;
			case 6:
			 I_k=I_k*0.000001;
			 break;
			 case 9:
			 I_k=I_k*0.000000001;
			 break;
		}
		printf("Sisestage uhik, milles Teil on I_b\n");
		printf("Toetavad uhikud: Milli=3,Mikro=6,Nano=9, kui standartsed uhikud=0\n");
		scanf("%d",&uhik);
		printf("Sisestage I_b\n");
		scanf("%lf",&I_b);
		switch(uhik)
		{
			case 0:
			break;
			case 3:
			 I_b=I_b*0.001;
			 break;
			case 6:
			 I_b=I_b*0.000001;
			 break;
			 case 9:
			 I_b=I_b*0.000000001;
			 break;
		}
		b=I_k/I_b;
		printf("Result = %lf\n",b);
		break;
		case 'F':
		printf("Sisestage uhik, milles Teil on arv\n");
		printf("Toetavad uhikud: Milli=3,Mikro=6,Nano=9, kui standartsed uhikud=0\n");
		scanf("%d",&uhik);
		printf("Sisestage arv standartsete uhikute muutmiseks\n");
		scanf("%lf",&arv);
		switch(uhik)
		{
			case 0:
			break;
			case 3:
			 arv=arv*0.001;
			 break;
			case 6:
			 arv=arv*0.000001;
			 break;
			 case 9:
			 arv=arv*0.000000001;
			 break;
		}
		printf("Result = %lf\n",arv);
		printf("\n");
		break;
	}
	}
}
