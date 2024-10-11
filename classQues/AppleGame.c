//------: Apple game :-------

#include<stdio.h>
#include<string.h>
void login();
void game();
int main()
{
	login();
	game();
	 
	return 0;
}
void game()
{
	int apple=21,user,comp,turn=0;
	printf("\n**Apple Game\n");
	printf("\n There are total 21 apples\n");
	printf("\n pick one to four and who will pick the last apple will be losser !!\n");
	printf("\n U can choose from 1 to 4 \n\n");
	
	while(1)
	{
		if(turn==0)//user turn
		{
			printf("\n User Turn :  ");
			scanf("%d",&user);
			if(user > 4 || user < 1)
			{
				printf("Follow the rules (1->4 pick apple)\n");
				continue;
			}
				
			apple = apple-user;
			printf("\n Remaining apple - %d",apple);
			turn = 1;
		}
		if(turn==1)//computer turn
		{
			comp = 5-user;// AI Logic
			printf("\n Compter Turn : %d",comp);
			apple = apple - comp;
			printf("\n Remaining Apple - %d",apple);
			turn = 0;
		}
		
		if(apple==1)
		{
			break;
		}
	}
	if(turn == 0 && apple == 1)
	{
		printf("\n U are Looser !!");
	}
	if(turn == 1 && apple == 1)
	{
		printf("\n U are Winner !! ");
	}
}

void login()
{
	char user[25]="user" , pass[25]="pass",userN[25],passN[25];
	int i=0;
	printf("\n*********Apple Game********\n\n");
	printf("username : ");
	gets(userN);
	printf("password : ");
	for(i=0;i<4;i++){
		passN[i] = getch(passN);
		printf("*");
	}
	
	passN[i] = '\0';
	getch();
	system("cls");
	
	if(strcmp(user,userN)==0 && strcmp(pass,passN)==0){
		printf("\n\nBoth are same\n");
		printf("\n\nProceed the game\n");
		game();
	}
	else{
		printf("\nBoth are different\n");
		printf("\n\nEnter correct credentials\n");
	}
	
}
