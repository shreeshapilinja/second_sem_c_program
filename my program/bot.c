#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#include<dirent.h>
int main()
{
	char user[50];
	int a;
	printf("\t\t\tWelcome to shreesha's bot\n");
	while(1)
	{
		printf("==>");
		gets(user);
		if(strcmp(user,"close")==0)
		{
			system("cls");
			printf("ok bye\n");
			break;
		}
		else if(strcmp(user,"hai")==0)
		{
         printf("bot ==> hi sir\n");
		}
		else if(strcmp(user,"chrome")==0)
		{
			printf("ok sir , opeaning chrome browser \n");
			system("start chrome");
		}
		else if(strcmp(user,"notepad")==0)
		{
			printf("ok sir , opeaning notpad editor \n");
			system("start notepad");
		}
		else if(strcmp(user,"cmd")==0)
		{
			printf("ok sir , opeaning cmd terminal \n");
			system("start cmd");
		}
		else if(strcmp(user,"time")==0)
		{
			time_t s, val =1 ;
			struct tm* current_time;
            s = time(NULL);
			current_time = localtime(&s);
            printf("bot ==> %02d:%02d:%02d\n",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
		}
		else if(strcmp(user,"youtube")==0)
		{
			printf("ok sir , opeaning youtube \n");   
			system("start https://youtube.com");   
		}
		else if(strcmp(user,"gmail")==0)
		{
			printf("ok sir , opeaning gmail \n");   
			system("start https://mail.google.com/mail"); 
			system("start file:///C:/Users/laptop/Desktop/accounts.txt");
		}
		else if(strcmp(user,"temp mail")==0)
		{
			printf("ok sir , opeaning temp mail \n");   
			system("start https://temp-mail.org/en/");   
		}
		else if(strcmp(user,"temp gmail")==0)
		{
			printf("ok sir , opeaning  temp gmail\n");   
			system("start https://www.gmailnator.com/");   
		}
		else if(strcmp(user,"protected text")==0)
		{
			printf("ok sir , opeaning protected text \n");   
			system("start https://www.protectedtext.com/93539173");   
		}
		else if(strcmp(user,"codes")==0)
		{
			printf("ok sir , opeaning codes\n");   
			system("explorer E:\\codes");   
		}
		else if(strcmp(user,"calculator")==0)
		{
			printf("ok sir , opeaning calculator\n");   
			system("cmd /c calc");
		}
		else if(strcmp(user,"control panel")==0)
		{
			printf("ok sir , opeaning control panel\n");   
			system("cmd /c control");   
		}
		else if(strcmp(user,"windows version")==0)
		{
			printf("ok sir , windows version is \n");   
			system("cmd winver");   
		}
		else if(strcmp(user,"date")==0)
		{
			system("date");
		}
		else if(strcmp(user,"e drive")==0)
		{
			printf("ok sir , opening e drive \n");
			system("start "" /max E:");
		}
		else if(strcmp(user,"2nd sem")==0)
		{
			printf("ok sir , opening folder \n");
			system("start file:///E:/education/engineering/2nd%20semester");
		}
		else if(strcmp(user,"circuit")==0)
		{
			printf("ok sir , opening website \n");
			system("start http://cells.vcetputtur.ac.in/EC/");
		}
		else if(strcmp(user,"1st sem")==0)
		{
			printf("ok sir , opening folder \n");
			system("start file:///E:/education/engineering/1st%20semester");
		}
		else if(strcmp(user,"profile")==0)
		{
			printf("ok sir , opening folder \n");
			system("start file:///E:/education/shreesha%20profile");
		}
		else if(strcmp(user,"ia qp")==0)
		{
			printf("ok sir , opening folder \n");
			system("start file:///E:/education/vivekananda%20given%20annual%20question%20papers");
		}
		else if(strcmp(user,"downloads")==0)
		{
			printf("ok sir , opening folder \n");
			system("start file:///C:/Users/laptop/Downloads/");
		}
		else if(strcmp(user,"scan")==0)
		{
			printf("ok sir , opening to scan \n");
			system("start file:///C:/Program%20Files%20(x86)/EPSON%20Software/Epson%20ScanSmart/ScanSmart.exe");
		}
		else if(strcmp(user,"tor")==0)
		{
			printf("ok sir , tor browser \n");
			system("start file:///D:/tor/Tor%20Browser/Browser/firefox.exe");
		}
		else if(strcmp(user,"facebook")==0)
		{
			printf("ok sir , opening facebook \n 1)shreeshab947@gmail.com\t\t\trajgopal\n2)9620522347\t\t\trajgopal\n3)9353917389\t\t\tPilinjamane\n");
			system("start https://www.facebook.com/");
			
		}
		else if(strcmp(user,"instagram")==0)
		{
			printf("ok sir , opening instagram \n1)shreeshapilinja@gmail.com\t\t\tpilinjamane\n2)shreeshab947@gmail.com\t\t\trajgopal\n");
			system("start https://www.instagram.com/");
		}
		else if(strcmp(user,"telegram")==0)
		{
			printf("ok sir , opening telegram \n");
			system("start file:///D:/tor/");
		}
		else if(strcmp(user,"edge")==0)
		{
			printf("ok sir , opening microsoft edge \n");
			system("start file:///C:/Program%20Files%20(x86)/Microsoft/Edge/Application/msedge.exe");
		}
		else if(strcmp(user,"brave")==0)
		{
			printf("ok sir , opening brave browser \n");
			system("start file:///C:/Program%20Files/BraveSoftware/Brave-Browser/Application/brave.exe");
		}
		else if(strcmp(user,"teams")==0)
		{
			printf("ok sir , opening microsoft teams \n");
			system("start file:///C:/Users/laptop/AppData/Local/Microsoft/Teams/Update.exe");
		}
		else if(strcmp(user,"microsoft teams")==0)
		{
			printf("ok sir , opening micrsoft teams \n");
			system("start file:///C:/Users/laptop/AppData/Local/Microsoft/Teams/Update.exe");
		}
		else if(strcmp(user,"firefox")==0)
		{
			printf("ok sir , opening firefox browser \n");
			system("start file:///C:/Program%20Files/Mozilla%20Firefox/firefox.exe");
		}
		else if(strcmp(user,"internet explorer")==0)
		{
			printf("ok sir , opening internet explorer \n");
			system("start file:///C:/Program%20Files/Internet%20Explorer/iexplore.exe");
		}
		else if(strcmp(user,"paint")==0)
		{
			printf("ok sir , opening paint \n");
			system("start file:///C:/Windows/system32/mspaint.exe");
		}
		else if(strcmp(user,"snip")==0)
		{
			printf("ok sir , opening tool \n");
			system("start file:///C:/Windows/system32/SnippingTool.exe");
		}
		else if(strcmp(user,"word")==0)
		{
			printf("ok sir , opening word \n");
			system("start file:///C:/ProgramData/Microsoft/Windows/Start%20Menu/Programs/Microsoft%20Office%202013/");
		}
		else if(strcmp(user,"excel")==0)
		{
			printf("ok sir , opening excel \n");
			system("start file:///C:/ProgramData/Microsoft/Windows/Start%20Menu/Programs/Microsoft%20Office%202013/");
		}
		else if(strcmp(user,"powerpoint")==0)
		{
			printf("ok sir , opening powerpoint \n");
			system("start file:///C:/ProgramData/Microsoft/Windows/Start%20Menu/Programs/Microsoft%20Office%202013/");
		}
		else if(strcmp(user,"notepad+")==0)
		{
			printf("ok sir , opening  notepad++\n");
			system("start file:///D:/notepad+/Notepad++/notepad++.exe");
		}
		else if(strcmp(user,"recorder")==0)
		{
			printf("ok sir , opening  obs recorder\n");
			system("start file:///D:/obs/obs-studio/bin/64bit/obs64.exe");
		}
		else if(strcmp(user,"system cleaner")==0)
		{
			printf("ok sir , opening cleaner \n");
			system("start file:///C:/Windows/system32/cleanmgr.exe");
		}
		else if(strcmp(user,"railwire")==0)
		{
			printf("ok sir , opening railwire \nusername : ka.rajagopal.bbn\npassword : rajagopal123\n");
			system("start https://ka.railwire.co.in/");
		}
		else if(strcmp(user,"raildrive 2nd sem")==0)
		{
			printf("ok sir , opening.... \n");
			system("start file:///H:/full%20computer%20files/engineering/2nd%20semester/");
		}
		else if(strcmp(user,"watsap")==0)
		{
			printf("ok sir , opening  ...\n");
			system("start https://web.whatsapp.com/");
		}
		else if(strcmp(user,"songs")==0)
		{
			printf("1.Allu Arjun\n2.Nayan Video Song\n3.Pallavi\n4.pallavi\n5. Mahesh Babu, Rashmika\n6.prahas-1 \n7.prahas-2\n8.arjun\n9.Hanjugam \n10.triailor\n");
			scanf("%d",&a);
			switch(a)
			{
				case 1: system("start https://www.youtube.com/watch?v=2mDCVzruYzQ"); break;
				case 2: system("start https://www.youtube.com/watch?v=uKHlnmepnNA"); break;
				case 3: system("start https://www.youtube.com/watch?v=h9Am4CYaLng"); break;
				case 4: system("start https://www.youtube.com/watch?v=YFfEFbC9_XQ"); break;
				case 5: system("start https://www.youtube.com/watch?v=ZPwnGINFG_4"); break;
				case 6: system("start https://www.youtube.com/watch?v=eswudGVJbdU"); break;
				case 7: system("start https://www.youtube.com/watch?v=xnJ4RTodr3g"); break;
				case 8: system("start https://www.youtube.com/watch?v=wFAj0pW6xX0"); break;
				case 9: system("start https://www.youtube.com/watch?v=QUzjHNIauRw"); break;
				case 10: system("start https://www.youtube.com/watch?v=9xfDW-dIN9Y"); break;
			}
		}
		else if(strcmp(user,"")==0)
		{
			printf("ok sir , opening  \n");
			system("start ");
		}
		else if(strcmp(user,"")==0)
		{
			printf("ok sir , opening  \n");
			system("start ");
		}
		else if(strcmp(user,"")==0)
		{
			printf("ok sir , opening  \n");
			system("start ");
		}
		else if(strcmp(user,"")==0)
		{
			printf("ok sir , opening  \n");
			system("start ");
		}
		else if(strcmp(user,"all account")==0)
		{
			printf("ok sir , opening  accounts\n");
			system("start file:///C:/Users/laptop/Desktop/one%20account%20for%20all.txt");
		}
		else if(strcmp(user,"check usage")==0)
		{
			printf("ok sir , opening railwire \nusername : ka.rajagopal.bbn\npassword : rajagopal123\n");
			system("start https://ka.railwire.co.in/");
		}
		
	}
		
	getch();
	return 0;
	
}