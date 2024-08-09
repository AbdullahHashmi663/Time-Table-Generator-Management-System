#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<fstream>
using namespace std;
struct Data{
	char subject[32],teacher[32];
};
struct BsIT{
	Data table[5][6];
};
void line()
{
	cout<<endl;
	for(int i=0;i<60;i++)
	cout<<"=";
	cout<<endl<<endl;
}
int hour()
{
	time_t now=time(0);
	struct tm *ct=localtime(&now);
	return ct->tm_hour;
}
int hour_t()
{
	if(hour()>12)
	return hour()-12;
	else
	return hour();
}
int min()
{
	time_t now=time(0);
	struct tm *ct=localtime(&now);
	return ct->tm_min;
}
int timesec()
{
	time_t now=time(0);
	struct tm *ct=localtime(&now);
	return ct->tm_sec;
}
int mday()
{
	time_t now=time(0);
	struct tm *ct=localtime(&now);
	return ct->tm_mday;
}
int mon()
{
	time_t now=time(0);
	struct tm *ct=localtime(&now);
	return ct->tm_mon+1;
}
int year()
{
	time_t now=time(0);
	struct tm *ct=localtime(&now);
	return ct->tm_year+1900;
}
int wday()
{
	time_t now=time(0);
	struct tm *ct=localtime(&now);
	return ct->tm_wday;
}
void today_day()
{
	string day;
	int x=wday();
	switch(x)
				{
					case 1:
						{
							cout<<"Monday";
							break;
						}
					case 2:
						{
							cout<<"Tuesday";
							break;
						}
					case 3:
						{
							cout<<"Wednessday";
							break;
						}
					case 4:
						{
							cout<<"Thursday";
							break;
						}
					case 5:
						{
							cout<<"Friday";
							break;
						}
					case 6:
						{
							cout<<"Saturday";
							break;
						}
					case 0:
						{
							cout<<"Sunday";
							break;
						}
				}
}
void period(int x)
{
	string time;
	switch(x)
	{
		case 0:
			{
				time="8:30-10:00";
				break;
			}
		case 1:
			{
				time="10:00-11:30";
				break;
			}
		case 2:
			{
				time="11:30-1:00";
				break;
			}
		case 3:
			{
				time="1:00-2:30";
				break;
			}
		case 4:
			{
				time="2:30-4:00";
				break;
			}
		case 5:
			{
				time="4:00-5:30";
				break;
			}
		default:
			{
				time="Error";
				break;
			}
	}
	cout<<time;
}
int sem_find_c(char i)
{
	switch(i)
	{
		case '1':
			{
				return 0;
				break;
			}
		case '2':
			{
				return 1;
				break;
			}
		case '3':
			{
				return 2;
				break;
			}
		case '4':
			{
				return 3;
				break;
			}
		case '5':
			{
				return 4;
				break;
			}
		case '6':
			{
				return 5;
				break;
			}
		case '7':
			{
				return 6;
				break;
			}
		case '8':
			{
				return 7;
				break;
			}	
		default:
			{
				return 8;
				break;
			}
	}
}
char sec_find(int i)
{
	switch(i)
	{
		case 0:
			{
				return 'a';
				break;
			}
		case 1:
			{
				return 'b';
				break;
			}
		default:
			{
				return 'x';
				break;
			}
		
	}
}
int sec_find_c(char i)
{
	switch(i)
	{
		case 'a':
			{
				return 0;
				break;
			}
		case 'b':
			{
				return 1;
				break;
			}
		default:
			{
				return 4;
				break;
			}
	}
}
void colorchange(int i)
{
	
	switch(i)
	{
		case 0:
			{
				system("color 0F");
			}
		case 1:
			{
				system("color 0E");
			}
		case 2:
			{
				system("color 0D");
				break;
			}
		case 3:
			{
				system("color 0C");
				break;
			}
		case 4:
			{
				system("color 0B");
				break;
			}
		case 5:
			{
				system("color 0A");
				break;
			}
		case 6:
			{
				system("color 09");
				break;
			}
		case 7:
			{
				system("color 08");
				break;
			}
		case 8:
			{
				system("color 07");
				break;
			}
		case 9:
			{
				system("color 06");
				break;
			}
		case 10:
			{
				system("color 05");
				break;
			}
		case 11:
			{
				system("color 04");
				break;
			}
		case 12:
			{
				system("color 03");
				break;
			}
		case 13:
			{
				system("color 02");
				break;
			}
		case 14:
			{
				system("color 01");
				break;
			}
		default:
			{
				system("color 0A");
			}
	}
}
void anime_loading(int n,int m)
{
	if (m==2)
	for(int i=0;i<n;i++)
	cout<<char(176)<<char(177)<<char(178)<<" ";
	if (m==1)
	for(int i=0;i<n;i++)
	cout<<char(178)<<char(177)<<char(176)<<" ";
	
}
void welcome_loading()
{
	int n=100,y=10;
	cout<<right<<setw(130)<<"______________________________________________\n";
	cout<<right<<setw(130)<<"|                                            |\n";
	cout<<right<<setw(130)<<"|     INITIALIZING AI TO MAKE TIME TABLE     |\n";
	cout<<right<<setw(130)<<"|____________________________________________|\n";
	Sleep(3000);
	system("color 06");
	for(int i=1;i<=15;i++)
	{
//	system("cls");
//	cout<<right<<setw(130)<<"______________________________________________\n";
//	cout<<right<<setw(130)<<"|                                            |\n";
//	cout<<right<<setw(130)<<"|     INITIALIZING AI TO MAKE TIME TABLE     |\n";
//	cout<<right<<setw(130)<<"|____________________________________________|\n";
	cout<<setw(n);anime_loading(i,1);cout<<" LOADING ";anime_loading(i,2);
	n-=4;
	Sleep(y);
	y+=30;
	cout<<"\r";
	}
//	int y=10;
//	cout<<"LOADING ";
//	Sleep(1000);
//	for(int i=0;i<15;i++)
//	{
//		cout<<char(176)<<char(177)<<char(178)<<" ";
//		Sleep(y);
//		y+=50;
//	}
}
void welcome_animation()
{
	int n1=18,n2=17,n3=19,n4=10,n5=21,n6=16,n7=26,n8=11;
	string line1="#include<iostream>",
		 line2="#include<conio.h>",
		 line3="using namespace std;",
		 line4="int main()",
		 line5="char Timetable[5][6];",
		 line6="Error Occured!!!",
		 line7="CheckTimeTable_Sequence();",
		 line8="FillData();",
		 line0="Running File WriteCODE.exe";
	welcome_loading();
	system("cls");
	system("color 07");
	for(int j=0;j<26;j++)
	{
		cout<<line0[j];
		Sleep(10);
	}
	int m=500;
	Sleep(5000);
	system("cls");
	system("color 03");
	cout<<endl;
	for(int j=0;j<n1;j++)
	{
		cout<<line1[j];
		Sleep(10);
	}
	cout<<endl;
	Sleep(m);
	for(int j=0;j<n2;j++)
	{
		cout<<line2[j];
		Sleep(10);
	}
	cout<<endl;
	Sleep(m);
	for(int j=0;j<n3;j++)
	{
		cout<<line3[j];
		Sleep(10);
	}
	cout<<endl;
	Sleep(m);
	for(int j=0;j<n4;j++)
	{
		cout<<line4[j];
		Sleep(10);
	}
	cout<<endl;
	cout<<"{\n     ";
	Sleep(m);
	for(int j=0;j<n5;j++)
	{
		cout<<line5[j];
		Sleep(10);
	}
	cout<<endl;
	Sleep(m);
	system("color 04");
	error:
	cout<<"\n     \a";
	for(int j=0;j<n6;j++)
	{
		cout<<line6[j];
		Sleep(5);
	}
	Sleep(2000);
	char input;
	cout<<"\nEnter Backspace to REMOVE ERROR: \n\n";
	input=getch();
	if(input!=8)
	goto error;
	else
	{
		system("color 02");
		
		cout<<"Writting Code AGAIN\n";
		Sleep(2000);
		system("cls");
		cout<<endl<<line1<<endl;
		cout<<line2<<endl;
		cout<<line3<<endl;
		cout<<line4<<endl;
		cout<<"{\n     "<<line5;
		Sleep(m);
		cout<<"\n     ";
		for(int j=0;j<n7;j++)
		{
			cout<<line7[j];
			Sleep(10);
		}
		Sleep(m*4);
		cout<<"\n     ";
		for(int j=0;j<n8;j++)
		{
			cout<<line8[j];
			Sleep(10);
		}
		Sleep(m*4);
		cout<<"\n}";
		enter:
		cout<<"\nPress ENTER to RUN The CODE \n";
		char input2;
		input2=getch();
		if(input2!=13)
		goto enter;
		else
		cout<<"Running Code";
		Sleep(2000);
	}
}	
void ascii_art()
{
    string input="                               Time Table";
    //loop will print first layer
    for (int i=0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i]== 'a')
            cout<<"  ___   ";
        if (input[i] == 'B' || input[i] == 'b')
            cout<<" _____  ";
        if (input[i] == 'E' || input[i] == 'e')
            cout<<" _____  ";
        if (input[i] == 'I' || input[i] == 'i')
            cout<<" _____  ";
        if (input[i] == 'L' || input[i] == 'l')
            cout<<" _      ";
        if (input[i] == 'M' || input[i] == 'm')
            cout<<" __  __  ";
        if (input[i] == 'T' || input[i] == 't')
            cout<<" _____  ";
        if (input[i] == ' ')
            cout<<"  ";
    }
    cout<<endl;
    //loop will print second layer
	for (int i=0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i]== 'a')
            cout<<" / _ \\  ";
        if (input[i] == 'B' || input[i] == 'b')
            cout<<"| ___ \\ ";
        if (input[i] == 'E' || input[i] == 'e')
            cout<<"|  ___| ";
        if (input[i] == 'I' || input[i] == 'i')
            cout<<"|_   _| ";
        if (input[i] == 'L' || input[i] == 'l')
            cout<<"| |     ";
        if (input[i] == 'M' || input[i] == 'm')
            cout<<"|  \\/  | ";
        if (input[i] == 'T' || input[i] == 't')
            cout<<"|_   _| ";
        if (input[i] == ' ')
            cout<<"  ";
    }
    cout<<endl;
    //loop will print third layer
    for (int i=0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i]== 'a')
            cout<<"/ /_\\ \\ ";
        if (input[i] == 'B' || input[i] == 'b')
            cout<<"| |_/ / ";
        if (input[i] == 'E' || input[i] == 'e')
            cout<<"| |__   ";
        if (input[i] == 'I' || input[i] == 'i')
            cout<<"  | |   ";
        if (input[i] == 'L' || input[i] == 'l')
            cout<<"| |     ";
        if (input[i] == 'M' || input[i] == 'm')
            cout<<"| .  . | ";
        if (input[i] == 'T' || input[i] == 't')
            cout<<"  | |   ";
        if (input[i] == ' ')
            cout<<"  ";
    }
    cout<<endl;
    //loop will print fourth layer
    for (int i=0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i]== 'a')
            cout<<"|  _  | ";
        if (input[i] == 'B' || input[i] == 'b')
            cout<<"| ___ \\ ";
        if (input[i] == 'E' || input[i] == 'e')
            cout<<"|  __|  ";
        if (input[i] == 'I' || input[i] == 'i')
            cout<<"  | |   ";
        if (input[i] == 'L' || input[i] == 'l')
            cout<<"| |     ";
        if (input[i] == 'M' || input[i] == 'm')
            cout<<"| |\\/| | ";
        if (input[i] == 'T' || input[i] == 't')
            cout<<"  | |   ";
        if (input[i] == ' ')
            cout<<"  ";
    }
    cout<<endl;
    //loop will print fifth layer
    for (int i=0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i]== 'a')
            cout<<"| | | | ";
        if (input[i] == 'B' || input[i] == 'b')
            cout<<"| |_/ / ";
        if (input[i] == 'E' || input[i] == 'e')
            cout<<"| |___  ";
        if (input[i] == 'I' || input[i] == 'i')
            cout<<" _| |_  ";
        if (input[i] == 'L' || input[i] == 'l')
            cout<<"| |____ ";
        if (input[i] == 'M' || input[i] == 'm')
            cout<<"| |  | | ";
        if (input[i] == 'T' || input[i] == 't')
            cout<<"  | |   ";
        if (input[i] == ' ')
            cout<<"  ";
    }
    cout<<endl;
    //loop will print sixth layer
    for (int i=0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i]== 'a')
            cout<<"\\_| |_/ ";
        if (input[i] == 'B' || input[i] == 'b')
            cout<<"\\____/  ";
        if (input[i] == 'E' || input[i] == 'e')
            cout<<"\\____/  ";
        if (input[i] == 'I' || input[i] == 'i')
            cout<<" \\___/  ";
        if (input[i] == 'L' || input[i] == 'l')
            cout<<"\\_____/ ";
        if (input[i] == 'M' || input[i] == 'm')
            cout<<"\\_|  |_/ ";
        if (input[i] == 'T' || input[i] == 't')
            cout<<"  \\_/   ";
        if (input[i] == ' ')
            cout<<"  ";
    }
    cout<<endl;
}
void intro()
{
	system("cls");
//	system("color 0A");
	cout<<right;
	ascii_art();
	cout<<setw(120)<<"_______________________________________________\n";
	cout<<setw(120)<<"|                                             |\n";
	cout<<setw(120)<<"|        WELCOME TO BAHRIA UNIVERSITY         |\n";
	cout<<setw(120)<<"|       -------------------------------       |\n";
	cout<<setw(120)<<"|                                             |\n";
	cout<<setw(120)<<"|            DEPARTMENT OF BS-IT              |\n";
	cout<<setw(120)<<"|             ------------------              |\n";
	cout<<setw(120)<<"|                                             |\n";
	cout<<setw(120)<<"|    BAHRIA UNIVERSITY - ISLAMABAD CAMPUS     |\n";
	cout<<setw(120)<<"|_____________________________________________|\n";
	cout<<setw(120)<<" _____________________________________________ \n";
	cout<<setw(120)<<"/  Made by:                                   \\\n";
	cout<<setw(120)<<"\\          ABDULLAH BIN ZUBAIR HASHMI         /\n";
	cout<<setw(120)<<"/                01-135231-001                \\\n";
	cout<<setw(120)<<"\\  -----------------------------------------  /\n";
	cout<<setw(120)<<"/                BS-IT 1 (A)                  \\\n";
	cout<<setw(120)<<"\\_____________________________________________/\n";
//	system("color 03");
	cout<<left;
}
void password(char *a,int x)
{
		
		intro();
		cout<<"Enter Pin: ";
		for(int j=0;j<x;j++)
		cout<<"*";
		*a=getch();
		
}
void loading()
{
	int y=10;
	intro();
	cout<<"LOADING ";
	Sleep(1000);
	for(int i=0;i<15;i++)
	{
		colorchange(i);
		cout<<char(176)<<char(177)<<char(178)<<" ";
		Sleep(y);
		y+=50;
	}
	system("color E1");
}


int main()
{
	BsIT semester[8][2];
	const int monday = 0, tuesday = 1, wednesday = 2, thursday = 3, friday = 4;
	const int first = 0, second = 1, third = 2, fourth = 3, fifth = 4, sixth = 5;
	const int sem1 = 0, sem2 = 1, sem3 = 2, sem4 = 3, sem5 = 4, sem6 = 5, sem7 = 6, sem8 = 7, a = 0, b = 1;
	/* 1st semster 5*/ Data cp = {"COMPUTER PROGRAMING","MR. ABRAR AHMED"}, phy ={"APPLIED PHYSICS","MR. SAEED UR REHMAN"},  ict = {"INFORMATION & COMMUNICATION","Mrs. Ayesha Jamal"},  eng = {"FUNCTIONAL ENGLISH","Mr. Naseer ud din"}, mth = {"CALCULUS","Ms. Naila Shaheen"}, free = {"FREE PERIOD"," "},
	/* 2nd semster 5*/ oop = {"OBJECT ORIENTED PROGRAMING","Mr. Ali Ahsan"},  dm = {"DISCRETE MATHEMATICS","Ms. Ayesha"}, dd = {"DIGITAL DESIGN","Mr. Hassan Jamal"}, cs = {"COMMUNICATION SKILLS","Dr. Hadi Zulfiqar"}, ct = {"COMPUTER TECH","Mr. Yasir Shah"},
	/* 3rd semster 5*/ pns = {"PROBABILITY & STATS","Ms. Alisha shah"}, la = {"LINEAR ALGEBRA","Mr. Hassnain Ali"}, pp = {"PROFESSIONAL PRACTICES","Mr. Shams ul Islam"}, dsa = {"DATA STRUCTURE & ALGORITHM","Mr. Yaseen "}, dcn = {"DATA COMUNICATION NETWORKING","Ms. Hoor "},
	/* 4th semster 5*/ os = {"OPERATING SYSTEMS","Mr. Umer Hashim"}, is = {"INFORMATION SECURITY","Mr. Moazam Zulfiqar"}, dbms = {"DATABASE MANAGEMENT SYSTEM","Mr. Muhammad Ahmed"}, se = {"SOFTWARE ENGINEERING","Mr.Sher Ali"}, pom = {"PROJECT OBJECT MODEL","Mr. Atif Aslam"},
	/* 5th semster 5*/ itpm = {"IT PROJECT MANAGEMENT","Mr. SARFARAZ"}, ws = {"WEB SYSTEMS & TECH.","MR. SAIF"} , sre = {"SOFTWARE REQUIREMENT ENG.","MR. M. ISLAM"}, sna = {"SOFTWARE & NETWORK ADMIN.","Ms. Aleena Ali"}, ent = {"ENTERPRISE NETWORK TECH.","MR. M. AZHAR MANZOOR"},
	/* 6th semster 7*/ mad = {"MOBILE APP DEVELOPMENT","Mr. Romail Ayub"}, ai = {"ARTIFICAL INTELLIGENCE","Mr.Zoraiz David"}, bia = {"BUSINESS IMPACT ANALYSIS","Ms. Nayyab Ali"}, es = {"ENTERPRISE SYSTEMS","Ms. Maryam Ahmed"}, iti = {"IT INFRASTRUCTURE","Mr. Usama rajpoot"}, twps = {"TECH. WRITING & PRESENT SKILLS","Mr. Shumail"},otb={"ORG. THEORY & BEHAVIOUR","Mr. Taib"},
	/* 7th semster 5*/ css = {"CYBER SECURITY SYSTEMS","Mr. Robert Alam"}, dam = {"DB ADMINISTRATION & MANAGE","Dr. James Bond"}, sqa = {"SOFTWARE QUALITY ASSURANCE","Mr. Hitler"}, ids = {"INTRUSION DETECTOIN SYSTEM","Mr. Eliah "}, ps = {"PAKISTAN STUDIES","Mr. Shahzaib Khan"},
	/* 8th semster 4*/ dw = {"DATA WAREHOUSE","Ms. Nimra "}, vss = {"VIRTUAL SYSTEM & SERVICES","Mr. Riaz Ahmed"},isl = {"ISLAMIC STUDIES","Mr. Abdullah Hashmi"}, ue = {"USER EQUIPMENT","Mr. Ishaaq Mutahir"};
	
	
	const string day[5]={"Monday","Tuesday","Wednesday","Thursday","Friday"};
	string teachers_attendence[41],teacher_login[1000],ampm[1000];
	int hourD[1000],minD[1000],secD[1000];
	int sec,sem,i,j,k,l,n=0,login_n=0,choice_class,choice_class1;
	int day_num=wday();
	string user,username;
	char pass[4],pin[4];
	bool flag=true,flag_run=true,flag_teacher;
	char choice,choice_sec,choice_schedule,choice_sem,choice_end,section,choice_table_open;
	char d='-';
	string filedate;
	filedate=to_string(mday())+d+to_string(mon())+d+to_string(year());
	
	Data subject_teacher_cmp[42]={ {"COMPUTER PROGRAMING","MR. ABRAR AHMED"},  {"APPLIED PHYSICS","MR. SAEED UR REHMAN"}, {"INFORMATION & COMMUNICATION","Mrs. Ayesha Jamal"},  {"FUNCTIONAL ENGLISH","Mr. Naseer ud din"},  {"CALCULUS","Ms. Naila Shaheen"},  {"FREE PERIOD"," "},
	/* 2nd semster */ {"OBJECT ORIENTED PROGRAMING","Mr. Ali Ahsan"}, {"DISCRETE MATHEMATICS","Ms. Ayesha"},  {"DIGITAL DESIGN","Mr. Hassan Jamal"}, {"COMMUNICATION SKILLS","Dr. Hadi Zulfiqar"}, {"COMPUTER TECH","Mr. Yasir Shah"},
	/* 3rd semster */ {"PROBABILITY & STATS","Ms. Alisha shah"},  {"LINEAR ALGEBRA","Mr. Hassnain Ali"},  {"PROFESSIONAL PRACTICES","Mr. Shams ul Islam"},  {"DATA STRUCTURE & ALGORITHM","Mr. Yaseen "},  {"DATA COMUNICATION NETWORKING","Ms. Hoor "},
	/* 4th semster */ {"OPERATING SYSTEMS","Mr. Umer Hashim"},  {"INFORMATION SECURITY","Mr. Moazam Zulfiqar"},  {"DATABASE MANAGEMENT SYSTEM","Mr. Muhammad Ahmed"},  {"SOFTWARE ENGINEERING","Mr.Sher Ali"}, {"PROJECT OBJECT MODEL","Mr. Atif Aslam"},
	/* 5th semster */ {"IT PROJECT MANAGEMENT","Mr. SARFARAZ"}, {"WEB SYSTEMS & TECH.","MR. SAIF"} , {"SOFTWARE REQUIREMENT ENG.","MR. M. ISLAM"}, {"SOFTWARE & NETWORK ADMIN.","Ms. Aleena Ali"}, {"ENTERPRISE NETWORK TECH.","MR. M. AZHAR MANZOOR"},
	/* 6th semster */ {"MOBILE APP DEVELOPMENT","Mr. Romail Ayub"}, {"ARTIFICAL INTELLIGENCE","Mr.Zoraiz David"}, {"BUSINESS IMPACT ANALYSIS","Ms. Nayyab Ali"}, {"ENTERPRISE SYSTEMS","Ms. Maryam Ahmed"}, {"IT INFRASTRUCTURE","Mr. Usama rajpoot"}, {"TECH. WRITING & PRESENT SKILLS","Mr. Shumail"},{"ORG. THEORY & BEHAVIOUR","Mr. Taib"},
	/* 7th semster */ {"CYBER SECURITY SYSTEMS","Mr. Robert Alam"}, {"DB ADMINISTRATION & MANAGE","Dr. James Bond"}, {"SOFTWARE QUALITY ASSURANCE","Mr. Hitler"}, {"INTRUSION DETECTOIN SYSTEM","Mr. Eliah "}, {"PAKISTAN STUDIES","Mr. Shahzaib Khan"},
	/* 8th semster */ {"DATA WAREHOUSE","Ms. Nimra "}, {"VIRTUAL SYSTEM & SERVICES","Mr. Riaz Ahmed"}, {"ISLAMIC STUDIES","Mr. Abdullah Hashmi"},{"USER EQUIPMENT","Mr. Ishaaq Mutahir"}};
//	cout<<"________________________________________________________________________________________________________________________________________________________________________________________________________________\n";
//	cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
//	cout<<"================================================================================================================================================================================================================\n";
//	cout<<"adjust the screen zoom so the above lines don't get in next line |*-*|\n";
//	system("pause");
	welcome_animation();
	system("color 0E");
	intro();
	cout<<"Which table do you want to open\n1-Original\n2-Updated\n";
	cin>>choice_table_open;
	if(choice_table_open=='1')
	{
 	//696 lines data
	//semester 1A class scedule
	//MONDAY
	start:
	semester[sem1][a].table[monday][first] = free ;
	semester[sem1][a].table[monday][second] = mth ;
	semester[sem1][a].table[monday][third] = ict ;
	semester[sem1][a].table[monday][fourth] = ict ;
	semester[sem1][a].table[monday][fifth] = eng ;
	semester[sem1][a].table[monday][sixth] = free ;

	//TUESDAY
	semester[sem1][a].table[tuesday][first] = mth ;
	semester[sem1][a].table[tuesday][second] = phy ;
	semester[sem1][a].table[tuesday][third] = phy ;
	semester[sem1][a].table[tuesday][fourth] = cp ;
	semester[sem1][a].table[tuesday][fifth] = eng ;
	semester[sem1][a].table[tuesday][sixth] = free ;
	//WEDNESDAY
	semester[sem1][a].table[wednesday][first] = free ;
	semester[sem1][a].table[wednesday][second] = cp ;
	semester[sem1][a].table[wednesday][third] = ict  ;
	semester[sem1][a].table[wednesday][fourth] = ict  ;
	semester[sem1][a].table[wednesday][fifth] = free ;
	semester[sem1][a].table[wednesday][sixth] = free ;
	//THURSDAY
	semester[sem1][a].table[thursday][first] = phy  ;
	semester[sem1][a].table[thursday][second] = phy  ;
	semester[sem1][a].table[thursday][third] = phy  ;
	semester[sem1][a].table[thursday][fourth] = phy  ;
	semester[sem1][a].table[thursday][fifth] = free ;
	semester[sem1][a].table[thursday][sixth] = free ;
	//FRIDAY
	semester[sem1][a].table[friday][first] = free ;
	semester[sem1][a].table[friday][second] = cp  ;
	semester[sem1][a].table[friday][third] = cp  ;
	semester[sem1][a].table[friday][fourth] = free ;
	semester[sem1][a].table[friday][fifth] = free ;
	semester[sem1][a].table[friday][sixth] = free ;
	//====================================================================
		//semester 1B class scedule
		//MONDAY
	semester[sem1][b].table[monday][first] = mth ;
	semester[sem1][b].table[monday][second] = phy ;
	semester[sem1][b].table[monday][third] = phy ;
	semester[sem1][b].table[monday][fourth] = eng ;
	semester[sem1][b].table[monday][fifth] = free ;
	semester[sem1][b].table[monday][sixth] = free ;
	//TUESDAY
	semester[sem1][b].table[tuesday][first] = free ;
	semester[sem1][b].table[tuesday][second] = mth ;
	semester[sem1][b].table[tuesday][third] = cp ;
	semester[sem1][b].table[tuesday][fourth] = eng ;
	semester[sem1][b].table[tuesday][fifth] = ict ;
	semester[sem1][b].table[tuesday][sixth] = ict ;
	//WEDNESDAY
	semester[sem1][b].table[wednesday][first] = phy  ;
	semester[sem1][b].table[wednesday][second] = phy  ;
	semester[sem1][b].table[wednesday][third] = cp ;
	semester[sem1][b].table[wednesday][fourth] = phy  ;
	semester[sem1][b].table[wednesday][fifth] = phy  ;
	semester[sem1][b].table[wednesday][sixth] = free ;
	//THURSDAY
	semester[sem1][b].table[thursday][first] = free ;
	semester[sem1][b].table[thursday][second] = free ;
	semester[sem1][b].table[thursday][third] = cp  ;
	semester[sem1][b].table[thursday][fourth] = cp  ;
	semester[sem1][b].table[thursday][fifth] = free ;
	semester[sem1][b].table[thursday][sixth] = free ;
	//FRIDAY
	semester[sem1][b].table[friday][first] = free ;
	semester[sem1][b].table[friday][second] = ict  ;
	semester[sem1][b].table[friday][third] = ict  ;
	semester[sem1][b].table[friday][fourth] = free ;
	semester[sem1][b].table[friday][fifth] = free ;
	semester[sem1][b].table[friday][sixth] = free ;
	//====================================================================
		//semester 2A class scedule
		//MONDAY

	semester[sem2][a].table[monday][first] = free ;
	semester[sem2][a].table[monday][second] = oop ;
	semester[sem2][a].table[monday][third] = dm ;
	semester[sem2][a].table[monday][fourth] = free ;
	semester[sem2][a].table[monday][fifth] = dd ;
	semester[sem2][a].table[monday][sixth] = dd ;

	//TUESDAY
	semester[sem2][a].table[tuesday][first] = oop ;
	semester[sem2][a].table[tuesday][second] = free ;
	semester[sem2][a].table[tuesday][third] = cs ;
	semester[sem2][a].table[tuesday][fourth] = free ;
	semester[sem2][a].table[tuesday][fifth] = free ;
	semester[sem2][a].table[tuesday][sixth] = free ;
	//WEDNESDAY
	semester[sem2][a].table[wednesday][first] = dd  ;
	semester[sem2][a].table[wednesday][second] = dd  ;
	semester[sem2][a].table[wednesday][third] = ct ;
	semester[sem2][a].table[wednesday][fourth] = cs ;
	semester[sem2][a].table[wednesday][fifth] = free ;
	semester[sem2][a].table[wednesday][sixth] = free ;
	//THURSDAY
	semester[sem2][a].table[thursday][first] = oop  ;
	semester[sem2][a].table[thursday][second] = oop  ;
	semester[sem2][a].table[thursday][third] = ct ;
	semester[sem2][a].table[thursday][fourth] = free ;
	semester[sem2][a].table[thursday][fifth] = dm ;
	semester[sem2][a].table[thursday][sixth] = free ;
	//FRIDAY
	semester[sem2][a].table[friday][first] = free ;
	semester[sem2][a].table[friday][second] = free ;
	semester[sem2][a].table[friday][third] = free ;
	semester[sem2][a].table[friday][fourth] = free ;
	semester[sem2][a].table[friday][fifth] = free ;
	semester[sem2][a].table[friday][sixth] = free ;
	//====================================================================
		//semester 1B class scedule
		//MONDAY
	semester[sem2][b].table[monday][first] = oop ;
	semester[sem2][b].table[monday][second] = ct ;
	semester[sem2][b].table[monday][third] = free ;
	semester[sem2][b].table[monday][fourth] = dm ;
	semester[sem2][b].table[monday][fifth] = free ;
	semester[sem2][b].table[monday][sixth] = free ;
	//TUESDAY
	semester[sem2][b].table[tuesday][first] = cs ;
	semester[sem2][b].table[tuesday][second] = oop ;
	semester[sem2][b].table[tuesday][third] = ct ;
	semester[sem2][b].table[tuesday][fourth] = free ;
	semester[sem2][b].table[tuesday][fifth] = free ;
	semester[sem2][b].table[tuesday][sixth] = free ;
	//WEDNESDAY
	semester[sem2][b].table[wednesday][first] = oop  ;
	semester[sem2][b].table[wednesday][second] = oop  ;
	semester[sem2][b].table[wednesday][third] = cs ;
	semester[sem2][b].table[wednesday][fourth] = dd ;
	semester[sem2][b].table[wednesday][fifth] = dd ;
	semester[sem2][b].table[wednesday][sixth] = free ;
	//THURSDAY
	semester[sem2][b].table[thursday][first] = dd  ;
	semester[sem2][b].table[thursday][second] = dd  ;
	semester[sem2][b].table[thursday][third] = free ;
	semester[sem2][b].table[thursday][fourth] = dm ;
	semester[sem2][b].table[thursday][fifth] = free ;
	semester[sem2][b].table[thursday][sixth] = free ;
	//FRIDAY
	semester[sem2][b].table[friday][first] = free ;
	semester[sem2][b].table[friday][second] = free ;
	semester[sem2][b].table[friday][third] = free ;
	semester[sem2][b].table[friday][fourth] = free ;
	semester[sem2][b].table[friday][fifth] = free ;
	semester[sem2][b].table[friday][sixth] = free ;


	//======================================================================================
	//======================================================================================
	//======================================================================================

		//semester 3A class scedule
		//MONDAY
	semester[sem3][a].table[monday][first] = pns ;
	semester[sem3][a].table[monday][second] = dsa ;
	semester[sem3][a].table[monday][third] = pp ;
	semester[sem3][a].table[monday][fourth] = la ;
	semester[sem3][a].table[monday][fifth] = free ;
	semester[sem3][a].table[monday][sixth] = free ;
	//TUESDAY
	semester[sem3][a].table[tuesday][first] = pns ;
	semester[sem3][a].table[tuesday][second] = free ;
	semester[sem3][a].table[tuesday][third] = la ;
	semester[sem3][a].table[tuesday][fourth] = dcn ;
	semester[sem3][a].table[tuesday][fifth] = dsa  ;
	semester[sem3][a].table[tuesday][sixth] = dsa  ;
	//WEDNESDAY
	semester[sem3][a].table[wednesday][first] = free ;
	semester[sem3][a].table[wednesday][second] = pp ;
	semester[sem3][a].table[wednesday][third] = dcn ;
	semester[sem3][a].table[wednesday][fourth] = free ;
	semester[sem3][a].table[wednesday][fifth] = free ;
	semester[sem3][a].table[wednesday][sixth] = free ;
	//THURSDAY
	semester[sem3][a].table[thursday][first] = dcn  ;
	semester[sem3][a].table[thursday][second] = dcn  ;
	semester[sem3][a].table[thursday][third] = dsa ;
	semester[sem3][a].table[thursday][fourth] = free ;
	semester[sem3][a].table[thursday][fifth] = free ;
	semester[sem3][a].table[thursday][sixth] = free ;
	//FRIDAY
	semester[sem3][a].table[friday][first] = free ;
	semester[sem3][a].table[friday][second] = free ;
	semester[sem3][a].table[friday][third] = free ;
	semester[sem3][a].table[friday][fourth] = free ;
	semester[sem3][a].table[friday][fifth] = free ;
	semester[sem3][a].table[friday][sixth] = free ;

	//====================================================================
		//semester 3B class scedule
		//MONDAY
	semester[sem3][b].table[monday][first] = pp ;
	semester[sem3][b].table[monday][second] = pns ;
	semester[sem3][b].table[monday][third] = la ;
	semester[sem3][b].table[monday][fourth] = free ;
	semester[sem3][b].table[monday][fifth] = free ;
	semester[sem3][b].table[monday][sixth] = free ;
	//TUESDAY
	semester[sem3][b].table[tuesday][first] = free ;
	semester[sem3][b].table[tuesday][second] = pns ;
	semester[sem3][b].table[tuesday][third] = dsa ;
	semester[sem3][b].table[tuesday][fourth] = la ;
	semester[sem3][b].table[tuesday][fifth] = dcn ;
	semester[sem3][b].table[tuesday][sixth] = free ;
	//WEDNESDAY
	semester[sem3][b].table[wednesday][first] = dcn  ;
	semester[sem3][b].table[wednesday][second] = dcn  ;
	semester[sem3][b].table[wednesday][third] = dsa ;
	semester[sem3][b].table[wednesday][fourth] = free ;
	semester[sem3][b].table[wednesday][fifth] = free ;
	semester[sem3][b].table[wednesday][sixth] = free ;
	//THURSDAY
	semester[sem3][b].table[thursday][first] = pp ;
	semester[sem3][b].table[thursday][second] = dsa  ;
	semester[sem3][b].table[thursday][third] = dsa  ;
	semester[sem3][b].table[thursday][fourth] = dcn ;
	semester[sem3][b].table[thursday][fifth] = free ;
	semester[sem3][b].table[thursday][sixth] = free ;
	//FRIDAY
	semester[sem3][b].table[friday][first] = free ;
	semester[sem3][b].table[friday][second] = free ;
	semester[sem3][b].table[friday][third] = free ;
	semester[sem3][b].table[friday][fourth] = free ;
	semester[sem3][b].table[friday][fifth] = free ;
	semester[sem3][b].table[friday][sixth] = free ;

	//====================================================================
		//semester 4A class scedule
		//MONDAY
	semester[sem4][a].table[monday][first] = os ;
	semester[sem4][a].table[monday][second] = dbms ;
	semester[sem4][a].table[monday][third] = free ;
	semester[sem4][a].table[monday][fourth] = is ;
	semester[sem4][a].table[monday][fifth] = free ;
	semester[sem4][a].table[monday][sixth] = free ;
	//TUESDAY
	semester[sem4][a].table[tuesday][first] = os ;
	semester[sem4][a].table[tuesday][second] = dbms ;
	semester[sem4][a].table[tuesday][third] = pom ;
	semester[sem4][a].table[tuesday][fourth] = is ;
	semester[sem4][a].table[tuesday][fifth] = free ;
	semester[sem4][a].table[tuesday][sixth] = free ;
	//WEDNESDAY
	semester[sem4][a].table[wednesday][first] = dbms  ;
	semester[sem4][a].table[wednesday][second] = dbms  ;
	semester[sem4][a].table[wednesday][third] = se ;
	semester[sem4][a].table[wednesday][fourth] = pom ;
	semester[sem4][a].table[wednesday][fifth] = free ;
	semester[sem4][a].table[wednesday][sixth] = free ;
	//THURSDAY
	semester[sem4][a].table[thursday][first] = os  ;
	semester[sem4][a].table[thursday][second] = os  ;
	semester[sem4][a].table[thursday][third] = se ;
	semester[sem4][a].table[thursday][fourth] = free ;
	semester[sem4][a].table[thursday][fifth] = free ;
	semester[sem4][a].table[thursday][sixth] = free ;
	//FRIDAY
	semester[sem4][a].table[friday][first] = free ;
	semester[sem4][a].table[friday][second] = free ;
	semester[sem4][a].table[friday][third] = free ;
	semester[sem4][a].table[friday][fourth] = free ;
	semester[sem4][a].table[friday][fifth] = free ;
	semester[sem4][a].table[friday][fifth] = free ;

	//====================================================================
		//semester 4B class scedule
		//MONDAY
	semester[sem4][b].table[monday][first] = os ;
	semester[sem4][b].table[monday][second] = is ;
	semester[sem4][b].table[monday][third] = dbms ;
	semester[sem4][b].table[monday][fourth] = free ;
	semester[sem4][b].table[monday][fifth] = free ;
	semester[sem4][b].table[monday][sixth] = free ;
	//TUESDAY
	semester[sem4][b].table[tuesday][first] = os ;
	semester[sem4][b].table[tuesday][second] = is ;
	semester[sem4][b].table[tuesday][third] = free ;
	semester[sem4][b].table[tuesday][fourth] = dbms ;
	semester[sem4][b].table[tuesday][fifth] = pom ;
	semester[sem4][b].table[tuesday][sixth] = free ;
	//WEDNESDAY
	semester[sem4][b].table[wednesday][first] = os  ;
	semester[sem4][b].table[wednesday][second] = os  ;
	semester[sem4][b].table[wednesday][third] = free ;
	semester[sem4][b].table[wednesday][fourth] = se ;
	semester[sem4][b].table[wednesday][fifth] = free ;
	semester[sem4][b].table[wednesday][sixth] = free ;
	//THURSDAY
	semester[sem4][b].table[thursday][first] = dbms  ;
	semester[sem4][b].table[thursday][second] = dbms  ;
	semester[sem4][b].table[thursday][third] = pom ;
	semester[sem4][b].table[thursday][fourth] = se ;
	semester[sem4][b].table[thursday][fifth] = free ;
	semester[sem4][b].table[thursday][sixth] = free ;
	//FRIDAY
	semester[sem4][b].table[friday][first] = free ;
	semester[sem4][b].table[friday][second] = free ;
	semester[sem4][b].table[friday][third] = free ;
	semester[sem4][b].table[friday][fourth] = free ;
	semester[sem4][b].table[friday][fifth] = free ;
	semester[sem4][b].table[friday][sixth] = free ;

	//====================================================================



	//======================================================================================
	//======================================================================================
	//======================================================================================

		//semester 5A class scedule
		//MONDAY
	semester[sem5][a].table[monday][first] = free ;
	semester[sem5][a].table[monday][second] = free ;
	semester[sem5][a].table[monday][third] = itpm ;
	semester[sem5][a].table[monday][fourth] = ws ;
	semester[sem5][a].table[monday][fifth] = free ;
	semester[sem5][a].table[monday][sixth] = free ;
	//TUESDAY
	semester[sem5][a].table[tuesday][first] = sre ;
	semester[sem5][a].table[tuesday][second] = ws  ;
	semester[sem5][a].table[tuesday][third] = ws  ;
	semester[sem5][a].table[tuesday][fourth] = free ;
	semester[sem5][a].table[tuesday][fifth] = free ;
	semester[sem5][a].table[tuesday][sixth] = free ;
	//WEDNESDAY
	semester[sem5][a].table[wednesday][first] = sre ;
	semester[sem5][a].table[wednesday][second] = sna ;
	semester[sem5][a].table[wednesday][third] = free ;
	semester[sem5][a].table[wednesday][fourth] = free ;
	semester[sem5][a].table[wednesday][fifth] = itpm ;
	semester[sem5][a].table[wednesday][sixth] = free ;
	//THURSDAY
	semester[sem5][a].table[thursday][first] = sna ;
	semester[sem5][a].table[thursday][second] = ent ;
	semester[sem5][a].table[thursday][third] = free ;
	semester[sem5][a].table[thursday][fourth] = free ;
	semester[sem5][a].table[thursday][fifth] = free ;
	semester[sem5][a].table[thursday][sixth] = free ;
	//FRIDAY
	semester[sem5][a].table[friday][first] = sna  ;
	semester[sem5][a].table[friday][second] = sna  ;
	semester[sem5][a].table[friday][third] = ent ;
	semester[sem5][a].table[friday][fourth] = free ;
	semester[sem5][a].table[friday][fifth] = free ;
	semester[sem5][a].table[friday][sixth] = free ;

	//====================================================================
		//semester 5B class scedule
		//MONDAY
	semester[sem5][b].table[monday][first] = sre ;
	semester[sem5][b].table[monday][second] = itpm ;
	semester[sem5][b].table[monday][third] = free ;
	semester[sem5][b].table[monday][fourth] = free ;
	semester[sem5][b].table[monday][fifth] = free ;
	semester[sem5][b].table[monday][sixth] = free ;
	//TUESDAY
	semester[sem5][b].table[tuesday][first] = ws  ;
	semester[sem5][b].table[tuesday][second] = ws  ;
	semester[sem5][b].table[tuesday][third] = free ;
	semester[sem5][b].table[tuesday][fourth] = free ;
	semester[sem5][b].table[tuesday][fifth] = free ;
	semester[sem5][b].table[tuesday][sixth] = free ;
	//WEDNESDAY
	semester[sem5][b].table[wednesday][first] = sna ;
	semester[sem5][b].table[wednesday][second] = sre ;
	semester[sem5][b].table[wednesday][third] = free ;
	semester[sem5][b].table[wednesday][fourth] = ws ;
	semester[sem5][b].table[wednesday][fifth] = ws ;
	semester[sem5][b].table[wednesday][sixth] = itpm ;
	//THURSDAY
	semester[sem5][b].table[thursday][first] = free ;
	semester[sem5][b].table[thursday][second] = sna ;
	semester[sem5][b].table[thursday][third] = ent ;
	semester[sem5][b].table[thursday][fourth] = free ;
	semester[sem5][b].table[thursday][fifth] = free ;
	semester[sem5][b].table[thursday][sixth] = free ;
	//FRIDAY
	semester[sem5][b].table[friday][first] = free ;
	semester[sem5][b].table[friday][second] = ent ;
	semester[sem5][b].table[friday][third] = free ;
	semester[sem5][b].table[friday][fourth] = free ;
	semester[sem5][b].table[friday][fifth] = sna  ;
	semester[sem5][b].table[friday][sixth] = sna  ;

	//======================================================================================
	//======================================================================================
	//======================================================================================

		//semester 6A class scedule
		//MONDAY
	semester[sem6][a].table[monday][first] = mad ;
	semester[sem6][a].table[monday][second] = mad ;
	semester[sem6][a].table[monday][third] = ai ;
	semester[sem6][a].table[monday][fourth] = ai ;
	semester[sem6][a].table[monday][fifth] = bia ;
	semester[sem6][a].table[monday][sixth] = free ;
	//TUESDAy
	semester[sem6][a].table[tuesday][first] = mad  ;
	semester[sem6][a].table[tuesday][second] = mad  ;
	semester[sem6][a].table[tuesday][third] = es ;
	semester[sem6][a].table[tuesday][fourth] = iti ;
	semester[sem6][a].table[tuesday][fifth] = bia ;
	semester[sem6][a].table[tuesday][sixth] = twps ;
	//WEDNESDAY
	semester[sem6][a].table[wednesday][first] = twps ;
	semester[sem6][a].table[wednesday][second] = es ;
	semester[sem6][a].table[wednesday][third] = ai  ;
	semester[sem6][a].table[wednesday][fourth] = ai  ;
	semester[sem6][a].table[wednesday][fifth] = otb ;
	semester[sem6][a].table[wednesday][sixth] = free ;
	//THURSDAY
	semester[sem6][a].table[thursday][first] = twps ;
	semester[sem6][a].table[thursday][second] = free ;
	semester[sem6][a].table[thursday][third] = otb ;
	semester[sem6][a].table[thursday][fourth] = iti ;
	semester[sem6][a].table[thursday][fifth] = free ;
	semester[sem6][a].table[thursday][sixth] = free ;
	//FRIDAY
	semester[sem6][a].table[friday][first] = free ;
	semester[sem6][a].table[friday][second] = free ;
	semester[sem6][a].table[friday][third] = free ;
	semester[sem6][a].table[friday][fourth] = free ;
	semester[sem6][a].table[friday][fifth] = free ;
	semester[sem6][a].table[friday][sixth] = free ;

	//====================================================================
		//semester 6B class scedule
		//MONDAY
	semester[sem6][b].table[monday][first] = mad ;
	semester[sem6][b].table[monday][second] = ai ;
	semester[sem6][b].table[monday][third] = ai ;
	semester[sem6][b].table[monday][fourth] = free ;
	semester[sem6][b].table[monday][fifth] = bia ;
	semester[sem6][b].table[monday][sixth] = free ;
	//TUESDAY
	semester[sem6][b].table[tuesday][first] = mad  ;
	semester[sem6][b].table[tuesday][second] = mad  ;
	semester[sem6][b].table[tuesday][third] = free ;
	semester[sem6][b].table[tuesday][fourth] = es ;
	semester[sem6][b].table[tuesday][fifth] = bia ;
	semester[sem6][b].table[tuesday][sixth] = free ;
	//WEDNESDAY
	semester[sem6][b].table[wednesday][first] = iti ;
	semester[sem6][b].table[wednesday][second] = twps ;
	semester[sem6][b].table[wednesday][third] = es ;
	semester[sem6][b].table[wednesday][fourth] = otb ;
	semester[sem6][b].table[wednesday][fifth] = free ;
	semester[sem6][b].table[wednesday][sixth] = free ;
	//THURSDAY
	semester[sem6][b].table[thursday][first] = iti ;
	semester[sem6][b].table[thursday][second] = twps ;
	semester[sem6][b].table[thursday][third] = ai  ;
	semester[sem6][b].table[thursday][fourth] = ai  ;
	semester[sem6][b].table[thursday][fifth] = otb ;
	semester[sem6][b].table[thursday][sixth] = free ;
	//FRIDAY
	semester[sem6][b].table[friday][first] = free ;
	semester[sem6][b].table[friday][second] = free ;
	semester[sem6][b].table[friday][third] = free ;
	semester[sem6][b].table[friday][fourth] = free ;
	semester[sem6][b].table[friday][fifth] = free ;
	semester[sem6][b].table[friday][sixth] = free ;

	//======================================================================================
	//======================================================================================
	//======================================================================================

		//semester 7A class scedule
		//MONDAY
	semester[sem7][a].table[monday][first] = free ;
	semester[sem7][a].table[monday][second] = css ;
	semester[sem7][a].table[monday][third] = dam  ;
	semester[sem7][a].table[monday][fourth] = dam  ;
	semester[sem7][a].table[monday][fifth] = free ;
	semester[sem7][a].table[monday][sixth] = sqa ;
	//TUESDAY
	semester[sem7][a].table[tuesday][first] = free ;
	semester[sem7][a].table[tuesday][second] = dam ;
	semester[sem7][a].table[tuesday][third] = free ;
	semester[sem7][a].table[tuesday][fourth] = ids ;
	semester[sem7][a].table[tuesday][fifth] = ids ;
	semester[sem7][a].table[tuesday][sixth] = sqa ;
	//WEDNESDAY
	semester[sem7][a].table[wednesday][first] = free ;
	semester[sem7][a].table[wednesday][second] = css ;
	semester[sem7][a].table[wednesday][third] = free ;
	semester[sem7][a].table[wednesday][fourth] = free ;
	semester[sem7][a].table[wednesday][fifth] = ids  ;
	semester[sem7][a].table[wednesday][sixth] = ids  ;
	//THURSDAY
	semester[sem7][a].table[thursday][first] = free ;
	semester[sem7][a].table[thursday][second] = dam ;
	semester[sem7][a].table[thursday][third] = ps ;
	semester[sem7][a].table[thursday][fourth] = ps ;
	semester[sem7][a].table[thursday][fifth] = free ;
	semester[sem7][a].table[thursday][sixth] = free ;
	//FRIDAY
	semester[sem7][a].table[friday][first] = mad ;
	semester[sem7][a].table[friday][second] = mad ;
	semester[sem7][a].table[friday][third] = free ;
	semester[sem7][a].table[friday][fourth] = free ;
	semester[sem7][a].table[friday][fifth] = free ;
	semester[sem7][a].table[friday][sixth] = free ;

	//====================================================================
		//semester 7B class scedule
		//MONDAY
	semester[sem7][b].table[monday][first] = free ;
	semester[sem7][b].table[monday][second] = dam ;
	semester[sem7][b].table[monday][third] = css ;
	semester[sem7][b].table[monday][fourth] = sqa ;
	semester[sem7][b].table[monday][fifth] = free ;
	semester[sem7][b].table[monday][sixth] = free ;
	//TUESDAY
	semester[sem7][b].table[tuesday][first] = dam  ;
	semester[sem7][b].table[tuesday][second] = dam  ;
	semester[sem7][b].table[tuesday][third] = ids ;
	semester[sem7][b].table[tuesday][fourth] = ids ;
	semester[sem7][b].table[tuesday][fifth] = free ;
	semester[sem7][b].table[tuesday][sixth] = free ;
	//WEDNESDAY
	semester[sem7][b].table[wednesday][first] = free ;
	semester[sem7][b].table[wednesday][second] = dam ;
	semester[sem7][b].table[wednesday][third] = ps ;
	semester[sem7][b].table[wednesday][fourth] = ps ;
	semester[sem7][b].table[wednesday][fifth] = free ;
	semester[sem7][b].table[wednesday][sixth] = free ;
	//THURSDAY
	semester[sem7][b].table[thursday][first] = free ;
	semester[sem7][b].table[thursday][second] = css ;
	semester[sem7][b].table[thursday][third] = free ;
	semester[sem7][b].table[thursday][fourth] = sqa ;
	semester[sem7][b].table[thursday][fifth] = ids  ;
	semester[sem7][b].table[thursday][sixth] = ids  ;
	//FRIDAY
	semester[sem7][b].table[friday][first] = free ;
	semester[sem7][b].table[friday][second] = free ;
	semester[sem7][b].table[friday][third] = free ;
	semester[sem7][b].table[friday][fourth] = free ;
	semester[sem7][b].table[friday][fifth] = free ;
	semester[sem7][b].table[friday][sixth] = free ;

	//====================================================================
	//====================================================================
	//====================================================================
	//======================================================================================
	//======================================================================================
	//======================================================================================

		//semester 8A class scedule
		//MONDAY
	semester[sem8][a].table[monday][first] = free ;
	semester[sem8][a].table[monday][second] = free ;
	semester[sem8][a].table[monday][third] = free ;
	semester[sem8][a].table[monday][fourth] = free ;
	semester[sem8][a].table[monday][fifth] = free ;
	semester[sem8][a].table[monday][sixth] = free ;
	//TUESDAY
	semester[sem8][a].table[tuesday][first] = dw ;
	semester[sem8][a].table[tuesday][second] = free ;
	semester[sem8][a].table[tuesday][third] = vss ;
	semester[sem8][a].table[tuesday][fourth] = isl ;
	semester[sem8][a].table[tuesday][fifth] = isl ;
	semester[sem8][a].table[tuesday][sixth] = free ;
	//WEDNESDAY
	semester[sem8][a].table[wednesday][first] = dm ;
	semester[sem8][a].table[wednesday][second] = free ;
	semester[sem8][a].table[wednesday][third] = ue ;
	semester[sem8][a].table[wednesday][fourth] = free ;
	semester[sem8][a].table[wednesday][fifth] = free ;
	semester[sem8][a].table[wednesday][sixth] = free ;
	//THURSDAY
	semester[sem8][a].table[thursday][first] = dm ;
	semester[sem8][a].table[thursday][second] = dw ;
	semester[sem8][a].table[thursday][third] = ue ;
	semester[sem8][a].table[thursday][fourth] = vss ;
	semester[sem8][a].table[thursday][fifth] = vss  ;
	semester[sem8][a].table[thursday][sixth] = vss  ;
	//FRIDAY
	semester[sem8][a].table[friday][first] = free ;
	semester[sem8][a].table[friday][second] = free ;
	semester[sem8][a].table[friday][third] = free ;
	semester[sem8][a].table[friday][fourth] = free ;
	semester[sem8][a].table[friday][fifth] = free ;
	semester[sem8][a].table[friday][sixth] = free ;

	//====================================================================
		//semester 8B class scedule
		//MONDAY
	semester[sem8][b].table[monday][first] = free ;
	semester[sem8][b].table[monday][second] = free ;
	semester[sem8][b].table[monday][third] = free ;
	semester[sem8][b].table[monday][fourth] = free ;
	semester[sem8][b].table[monday][fifth] = free ;
	semester[sem8][b].table[monday][sixth] = free ;
	//TUESDAY
	semester[sem8][b].table[tuesday][first] = dw ;
	semester[sem8][b].table[tuesday][second] = vss ;
	semester[sem8][b].table[tuesday][third] = free ;
	semester[sem8][b].table[tuesday][fourth] = free ;
	semester[sem8][b].table[tuesday][fifth] = free ;
	semester[sem8][b].table[tuesday][sixth] = free ;
	//WEDNESDAY
	semester[sem8][b].table[wednesday][first] = dm ;
	semester[sem8][b].table[wednesday][second] = ue ;
	semester[sem8][b].table[wednesday][third] = free ;
	semester[sem8][b].table[wednesday][fourth] = vss ;
	semester[sem8][b].table[wednesday][fifth] = vss  ;
	semester[sem8][b].table[wednesday][sixth] = vss  ;
	//THURSDAY
	semester[sem8][b].table[thursday][first] = dm ;
	semester[sem8][b].table[thursday][second] = dw ;
	semester[sem8][b].table[thursday][third] = free ;
	semester[sem8][b].table[thursday][fourth] = ue ;
	semester[sem8][b].table[thursday][fifth] = isl ;
	semester[sem8][b].table[thursday][sixth] = isl ;
	//FRIDAY
	semester[sem8][b].table[friday][first] = free ;
	semester[sem8][b].table[friday][second] = free ;
	semester[sem8][b].table[friday][third] = free ;
	semester[sem8][b].table[friday][fourth] = free ;
	semester[sem8][b].table[friday][fifth] = free ;
	semester[sem8][b].table[friday][sixth] = free ;

	//====================================================================
	//====================================================================
	//====================================================================
	//======================================================================================
	//======================================================================================
	//======================================================================================
	}
	else if(choice_table_open=='2')
	{
		string input;
	    fstream file_sub("semester_"+filedate+"_data.txt", ios::in );
	   
	    if(file_sub.is_open())
	    {
	    	for(i=0;i<8;i++)
	    	for(j=0;j<2;j++)
	    	for(k=0;k<5;k++)
	    	for(l=0;l<6;l++)
	    	{
	    		file_sub.getline(semester[i][j].table[k][l].subject,32);
			}
	    	for(i=0;i<8;i++)
	    	for(j=0;j<2;j++)
	    	for(k=0;k<5;k++)
	    	for(l=0;l<6;l++)
	    	{
	    		file_sub.getline(semester[i][j].table[k][l].teacher,32);
			}
	        
	    file_sub.close();    
	    }
	    
		else
		{
			cout<<"Subject File corrupt\n";
			cout<<"Opening Original Table\n";
			system("pause");
			goto start;
		}
	    
	}
	else
	{
		cout<<"Wrong choice\n";
		cout<<"Opening Original Table\n";
		system("pause");
		goto start;
	}
	
	
while(flag_run==true)
{
	system("color 0A");
	intro();
	
	cout<<"1- To view Week Timetable \n";
	cout<<"2- To check today schedule(for students) \n";
	cout<<"3- To check today schedule(for teachers) \n";
	cout<<"4- To Quit\n";
	choice=getch();
	//====================================================================
	intro();
	
	switch(choice)
	{
		case '1':
			{
				system("color 03");
				flag=true;
				cout<<"Enter your Semester{1-8}: ";
				choice_sem=getch();
				intro();
				
				cout<<"Enter your Section{a,b}: ";
				choice_sec=getch();
				intro();
				
				sem=sem_find_c(choice_sem);
				if(sem==8)
				{
					flag =false;
					cout<<"invalid semester\n";
				}
				sec=sec_find_c(choice_sec);
				if(sec==4)
				{
					flag=false;
					cout<<"invalid section\n";
					
				}
				if(flag==true)
				{
					system("color F0");
					intro();
					cout<<right;
					cout<<setw(50)<<"SEMESTER: "<<choice_sem;
					cout<<setw(50)<<"SECTION: "<<choice_sec;
					cout<<setw(50)<<"DAY: ";today_day();
					cout<<endl;
					cout<<left;
					cout<<"________________________________________________________________________________________________________________________________________________________________________________________________________________\n";
					cout<<"|"<<setw(15)<<"Days"<<"|";
					for(i=0;i<6;i++)
					{
						cout<<setw(31);
						period(i);
						cout<<"|";
						Sleep(10);
					}
					cout<<endl;
					cout<<"|_______________|_______________________________|_______________________________|_______________________________|_______________________________|_______________________________|_______________________________|\n";
					
					for(i=0;i<5;i++)//days
				{
				
					cout<<"|"<<setw(15)<<day[i];
					Sleep(10);
					for(j=0;j<6;j++)//period
				{
					
					cout<<"|"<<setw(31)<<semester[sem][sec].table[i][j].subject;
					
					Sleep(10);	
				}
				cout<<"|"<<endl;
				cout<<"|"<<setw(15)<<" ";
					for(j=0;j<6;j++)//teacher
				{
					
					cout<<"|"<<setw(31)<<semester[sem][sec].table[i][j].teacher;
					Sleep(10);
						
				}
				
					cout<<"|"<<endl;
					cout<<"|_______________|_______________________________|_______________________________|_______________________________|_______________________________|_______________________________|_______________________________|\n";
					Sleep(500);
				}
				}
				else
				{
					line();
					cout<<"WANT TO TRY ANOTHER SECTION\n";
					line();
				}
				system("pause");
				break;
			}
			
			
		case '2':
			{
				system("color 03");
				flag=true;
				cout<<"Enter your Semester{1-8}: ";
				choice_sem=getch();
				intro();
				
				cout<<"Enter your Section{a,b}: ";
				choice_sec=getch();
				intro();
				
				sem=sem_find_c(choice_sem);
				if(sem==8)
				{
					flag =false;
					cout<<"invalid semester\n";
				}
				sec=sec_find_c(choice_sec);
				if(sec==4)
				{
					flag=false;
					cout<<"invalid section\n";
					
				}
				if(flag==true)
				{
					system("color F0");
					intro();
					cout<<right;
					cout<<setw(50)<<"SEMESTER: "<<choice_sem;
					cout<<setw(50)<<"SECTION: "<<choice_sec;
					cout<<setw(50)<<"DAY: ";today_day();
					cout<<endl;
					cout<<left;
					cout<<"________________________________________________________________________________________________________________________________________________________________________________________________________________\n";
					cout<<"|"<<setw(15)<<"Days"<<"|";
					for(i=0;i<6;i++)
					{
						cout<<setw(31);
						period(i);
						cout<<"|";
						Sleep(10);
					}
					cout<<endl;
					cout<<"|_______________|_______________________________|_______________________________|_______________________________|_______________________________|_______________________________|_______________________________|\n";
					
				i=day_num-1;
				
					cout<<"|"<<setw(15)<<day[i];
					Sleep(10);
					for(j=0;j<6;j++)//period
				{
					
					cout<<"|"<<setw(31)<<semester[sem][sec].table[i][j].subject;
					
					Sleep(10);	
				}
				cout<<"|"<<endl;
				cout<<"|"<<setw(15)<<" ";
					for(j=0;j<6;j++)//teacher
				{
					
					cout<<"|"<<setw(31)<<semester[sem][sec].table[i][j].teacher;
					Sleep(10);
						
				}
				
					cout<<"|"<<endl;
					cout<<"|_______________|_______________________________|_______________________________|_______________________________|_______________________________|_______________________________|_______________________________|\n";
					Sleep(500);
				
				}
				else
				{
					line();
					cout<<"WANT TO TRY ANOTHER SECTION\n";
					line();
				}
				system("pause");
				break;
			}
			
		case '3':
			{
				system("color 0A");
				bool flag_class=false,flag_day=true,flag_username=false,flag_pass=false;
				intro();
				cout<<"Enter Username: ";
				cin>>user;
				intro();
				for(int x=0;x<4;x++)
				password(&pass[x],x);
				loading();
				
				
				intro();
				cout<<endl<<endl<<endl;
				cout<<right;
				if(user=="cp")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=cp.teacher;
						flag_pass=true;
					}
				}
				else if(user=="phy")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=phy.teacher;
						flag_pass=true;
					}
				}
				else if(user=="ict")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=ict.teacher;
						flag_pass=true;
					}
				}
				else if(user=="eng")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=eng.teacher;
						flag_pass=true;
					}
				}
				else if(user=="mth")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=mth.teacher;
						flag_pass=true;
					}
				}
				else if(user=="oop")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=oop.teacher;
						flag_pass=true;
					}
				}
				else if(user=="dm")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=dm.teacher;
						flag_pass=true;
					}
				}
				else if(user=="dd")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=dd.teacher;
						flag_pass=true;
					}
				}
				else if(user=="cs")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=cs.teacher;
						flag_pass=true;
					}
				}
				else if(user=="ct")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=ct.teacher;
						flag_pass=true;
					}
				}
				else if(user=="pns")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=pns.teacher;
						flag_pass=true;
					}
				}
				else if(user=="la")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=la.teacher;
						flag_pass=true;
					}
				}
				else if(user=="pp")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=pp.teacher;
						flag_pass=true;
					}
				}
				else if(user=="dsa")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=dsa.teacher;
						flag_pass=true;
					}
				}
				else if(user=="dcn")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=dcn.teacher;
						flag_pass=true;
					}
				}
				else if(user=="os")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=os.teacher;
						flag_pass=true;
					}
				}
				else if(user=="is")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=is.teacher;
						flag_pass=true;
					}
				}
				else if(user=="dbms")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=dbms.teacher;
						flag_pass=true;
					}
				}
				else if(user=="se")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=se.teacher;
						flag_pass=true;
					}
				}
				else if(user=="pom")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=pom.teacher;
						flag_pass=true;
					}
				}
				else if(user=="itpm")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=itpm.teacher;
						flag_pass=true;
					}
				}
				else if(user=="ws")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=ws.teacher;
						flag_pass=true;
					}
				}
				else if(user=="sre")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=sre.teacher;
						flag_pass=true;
					}
				}
				else if(user=="sna")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=sna.teacher;
						flag_pass=true;
					}
				}
				else if(user=="ent")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=ent.teacher;
						flag_pass=true;
					}
				}
				else if(user=="mad")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=mad.teacher;
						flag_pass=true;
					}
				}
				else if(user=="ai")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=ai.teacher;
						flag_pass=true;
					}
				}
				else if(user=="bia")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=bia.teacher;
						flag_pass=true;
					}
				}
				else if(user=="es")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=es.teacher;
						flag_pass=true;
					}
				}
				else if(user=="iti")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=iti.teacher;
						flag_pass=true;
					}
				}
				else if(user=="twps")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=twps.teacher;
						flag_pass=true;
					}
				}
				else if(user=="otb")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=otb.teacher;
						flag_pass=true;
					}
				}
				else if(user=="css")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=css.teacher;
						flag_pass=true;
					}
				}
				else if(user=="dam")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=dam.teacher;
						flag_pass=true;
					}
				}
				else if(user=="sqa")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=sqa.teacher;
						flag_pass=true;
					}
				}
				else if(user=="ids")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=ids.teacher;
						flag_pass=true;
					}
				}
				else if(user=="ps")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=ps.teacher;
						flag_pass=true;
					}
				}
				else if(user=="ue")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=ue.teacher;
						flag_pass=true;
					}
				}
				else if(user=="isl")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=isl.teacher;
						flag_pass=true;
					}
				}
				else if(user=="vss")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=vss.teacher;
						flag_pass=true;
					}
				}
				
				else if(user=="dw")
				{
					flag_username=true;
					if(pass[0]=='0' && pass[1]=='0' && pass[2]=='0' && pass[3]=='0')
					{
						username=dw.teacher;
						flag_pass=true;
					}
				}
				if(flag_username==false)
				{
					cout<<"Wrong username\nYou can choose from these:\n(cp,phy,ict,eng,mth,oop,dm,dd,cs,ct,\npns,la,pp,dsa,dcn,os,is,dbms,se,pom,\nitpm,ws,sre,sna,ent,mad,ai,bia,es,iti,\ntwps,otb,css,dam,sqa,ids,ps,ue,isl,vss,dw)\n\n";
				}
				if(flag_username==true && flag_pass==false)
				{
					cout<<"Wrong password\n";
				}
			if(flag_username==true && flag_pass==true)
			{				flag_teacher=true;//attendence file
				for(i=0;i<n;i++)
				if(teachers_attendence[i]==username)
				flag_teacher=false;
				if(flag_teacher==true)
				{
					teachers_attendence[n]=username;
					n++;
				}
				
				
				if(hour()>12)
				ampm[login_n]="pm";
				else
				ampm[login_n]="am";
				
				teacher_login[login_n]=username;
				hourD[login_n]=hour_t();
				minD[login_n]=min();
				secD[login_n]=timesec();
				login_n++;
					
				if(day_num==6 || day_num==0)
					flag_day=false;
				if(flag_day==true)
					{
						teachermenu:
							intro();
					system("color F0");
					cout<<setw(30)<<"Welcome "<<username<<endl;
					cout<<setw(53)<<"You have following classes for today\n";
					cout<<left;
					cout<<endl;
					cout<<"__________________________________________________________________________________________________\n";
					cout<<"|"<<setw(29)<<"Time"<<setw(19)<<"|Semester"<<setw(17)<<"|Section"<<setw(31)<<"|Subject"<<"|"<<endl;
					cout<<"|_____________________________|__________________|________________|______________________________|\n";
					for(i=0;i<8;i++)
						for(k=0;k<6;k++)
							for(j=0;j<2;j++)
								if(semester[i][j].table[day_num-1][k].teacher==username)
								{
									cout<<left;
									cout<<"|"<<setw(29);
									period(k);
									sem=i+1;
									section=sec_find(j);
									cout<<"| "<<setw(17)<<sem<<"| "<<setw(15)<<section<<"| "<<setw(29)<<semester[i][j].table[day_num-1][k].subject<<"|"<<endl;
									cout<<"|_____________________________|__________________|________________|______________________________|\n";
									flag_class=true;
								}
					
					if(flag_class==false)
					cout<<right<<setw(30)<<"No class for today\n\n\n";
					cout<<"1-To make changes in schedule\n";
					cout<<"2-To mark your lectures as free period\n";
					cout<<"3-To take extra class\n";
					cout<<"4-To close menu\n";
					choice_schedule=getch();
					switch(choice_schedule)
					{
						case '1':
							{
								system("color 03");
				flag=true;
				intro();
				cout<<"Enter your Semester{1-8}: ";
				choice_sem=getch();
				intro();
				
				cout<<"Enter your Section{a,b}: ";
				choice_sec=getch();
				intro();
				
				sem=sem_find_c(choice_sem);
				if(sem==8)
				{
					flag=false;
					cout<<"invalid semester\n";
				}
				sec=sec_find_c(choice_sec);
				if(sec==4)
				{
					flag=false;
					cout<<"invalid section\n";
					break;
				}
				bool flag_class_check=false;
				flag_class=false;
						system("color 0A");
				cout<<left;
				for(int k=0;k<6;k++)
				if(username==semester[sem][sec].table[day_num-1][k].teacher)
				flag_class_check=true;
				
						if(flag_class_check)
						{
							cout<<"These are free periods:\n";
						cout<<"_________________________________________________________________________\n";
						cout<<"|"<<setw(5)<<"num"<<"|"<<setw(29)<<"Time"<<setw(19)<<"|Semester"<<setw(17)<<"|Section"<<"|"<<endl;
						cout<<"|_____|_____________________________|__________________|________________|\n";
								string freeP;
								freeP=free.subject;
								for(k=0;k<6;k++)
									if(freeP==semester[sem][sec].table[day_num-1][k].subject)
								{
									cout<<left;
									cout<<"|"<<setw(5)<<k+1<<"|"<<setw(29);
									period(k);
									cout<<"| "<<setw(17)<<choice_sem<<"| "<<setw(15)<<choice_sec<<"|"<<endl;
									cout<<"|_____|_____________________________|__________________|________________|\n";
									
									flag_class=true;
								}
								if(flag_class==false)
									cout<<right<<setw(30)<<"No free period available for today\n\n\n";				
								else
								{
								
									cout<<"Enter \"num\" to shift lecture to that time\n";
									cin>>choice_class;
									if(freeP==semester[sem][sec].table[day_num-1][choice_class-1].subject)
									{
									system("color 0E");
									cout<<"Which lecture do you want to shift\n";
									
					cout<<left;
					cout<<"________________________________________________________________________________________________________\n";
					cout<<"|"<<setw(5)<<"num"<<"|"<<setw(29)<<"Time"<<setw(19)<<"|Semester"<<setw(17)<<"|Section"<<setw(31)<<"|Subject"<<"|"<<endl;
					cout<<"|_____|_____________________________|__________________|________________|______________________________|\n";
					
						for(k=0;k<5;k++)		
								if(semester[sem][sec].table[day_num-1][k].teacher==username)
								{
									cout<<left;
									cout<<"|"<<setw(5)<<k+1<<"|"<<setw(29);
									period(k);
									
									cout<<"| "<<setw(17)<<choice_sem<<"| "<<setw(15)<<choice_sec<<"| "<<setw(29)<<semester[sem][sec].table[day_num-1][k].subject<<"|"<<endl;
									cout<<"|_____|_____________________________|__________________|________________|______________________________|\n";
								}
									cin>>choice_class1;
									intro();
									
									
//									temp=semester[sem][sec].table[day_num-1][choice_class-1];
									
									semester[sem][sec].table[day_num-1][choice_class-1]= semester[sem][sec].table[day_num-1][choice_class1-1];
									
									semester[sem][sec].table[day_num-1][choice_class1-1]=free;//temp;
									
//									temp.subject=semester[sem][sec].table[day_num-1][choice_class-1].subject;
//									temp.teacher=semester[sem][sec].table[day_num-1][choice_class-1].teacher;
//									temp.lab=semester[sem][sec].table[day_num-1][choice_class-1].lab;
//									
//									
//									semester[sem][sec].table[day_num-1][choice_class-1].subject= semester[sem][sec].table[day_num-1][choice_class1-1].subject;
//									semester[sem][sec].table[day_num-1][choice_class-1].teacher= semester[sem][sec].table[day_num-1][choice_class1-1].teacher;
//									semester[sem][sec].table[day_num-1][choice_class-1].lab= semester[sem][sec].table[day_num-1][choice_class1-1].lab;
//									
//									semester[sem][sec].table[day_num-1][choice_class1-1].subject=temp.subject;
//									semester[sem][sec].table[day_num-1][choice_class1-1].teacher=temp.teacher;
//									semester[sem][sec].table[day_num-1][choice_class1-1].lab=temp.lab;
									cout<<"Request done\n";
								}
								else
								cout<<"class not free\n";
									
							}
						}
						else
						cout<<"you dont have class in this section\n";
							system("pause");
							goto teachermenu;
								break;
							}
						case '2':
							{
								system("color 04");
								char confirm;
								cout<<"press c to confirm your choice\n";
								cin>>confirm;
								if(confirm=='c')
								{
								for(i=0;i<4;i++)
									for(k=0;k<5;k++)
										for(j=0;j<3;j++)
											if(semester[i][j].table[day_num-1][k].teacher==username)
												{
													semester[i][j].table[day_num-1][k]=free;
												}
									cout<<"Request done\n";
								}
							system("pause");
								goto teachermenu;
								break;
							}
						case '3':
							{
								system("color 03");
				flag=true;
				intro();
				cout<<"Enter your Semester{1-8}: ";
				choice_sem=getch();
				intro();
				
				cout<<"Enter your Section{a,b}: ";
				choice_sec=getch();
				intro();
				
				sem=sem_find_c(choice_sem);
				if(sem==8)
				{
					flag=false;
					cout<<"invalid semester\n";
				}
				sec=sec_find_c(choice_sec);
				if(sec==4)
				{
					flag=false;
					cout<<"invalid section\n";
					break;
				}
//				bool flag_class_check=false;
				flag_class=false;
						system("color 0A");
				cout<<left;
							cout<<"These are free periods:\n";
						cout<<"_________________________________________________________________________\n";
						cout<<"|"<<setw(5)<<"num"<<"|"<<setw(29)<<"Time"<<setw(19)<<"|Semester"<<setw(17)<<"|Section"<<"|"<<endl;
						cout<<"|_____|_____________________________|__________________|________________|\n";
								string freeP;
								freeP=free.subject;
								for(k=0;k<6;k++)
									if(freeP==semester[sem][sec].table[day_num-1][k].subject)
								{
									cout<<left;
									cout<<"|"<<setw(5)<<k+1<<"|"<<setw(29);
									period(k);
									cout<<"| "<<setw(17)<<choice_sem<<"| "<<setw(15)<<choice_sec<<"|"<<endl;
									cout<<"|_____|_____________________________|__________________|________________|\n";
									
									flag_class=true;
								}
								if(flag_class==false)
									cout<<right<<setw(30)<<"No free period available for today\n\n\n";				
								else
								{
									cout<<"Enter \"num\" to take lecture at that time\n";
									cin>>choice_class;
									Data temp;
								for(i=0;i<42;i++)
											if(subject_teacher_cmp[i].teacher==username)
												{
													strcpy(temp.subject,subject_teacher_cmp[i].subject);
													strcpy(temp.teacher,subject_teacher_cmp[i].teacher);
													break;
												}
									if(freeP==semester[sem][sec].table[day_num-1][choice_class-1].subject)
									{
										strcpy(semester[sem][sec].table[day_num-1][choice_class-1].subject,temp.subject);
										strcpy(semester[sem][sec].table[day_num-1][choice_class-1].teacher,temp.teacher);
									}
								}
							system("pause");
								goto teachermenu;
								break;
							}
						case '4':
							{
								system("color 0A");
								cout<<"Good Bye\nHave a nice day\n";
								break;
							}
						default:
							{
								cout<<"Invalid choice\n";
								goto teachermenu;
								break;
							}
					}
					}
					else
					cout<<right<<setw(30)<<"No class for today\n\n\n";
		}
				system("pause");
				break;
			}
		case '4':
			{
				intro();
				for(int x=0;x<4;x++)
				password(&pin[x],x);
				loading();
				if(pin[0]=='1' && pin[1]=='2' && pin[2]=='3' && pin[3]=='4')
					flag_run=false;
				else
				{
					intro();
					cout<<"Wrong pin\n";
					system("pause");
				}
				break;
			}
		default:
			{
				cout<<"Invalid choice\n";
				system("pause");
				break;
			}
	}
		if(flag_run==false)
	{
		intro();
	cout<<endl<<endl;
	cout<<right;
	line();
	cout<<setw(50)<<"Thankyou for visiting our Time table";
	line();
	
	
	
	}
}
fstream file,filel;
filel.open("login_data.txt",ios::app);
				if(filel.is_open())
				{
					filel<<"______________________________________________________________________________\n";
					filel<<"Date: "<<mday()<<"-"<<mon()<<"-"<<year()<<endl;
					for(i=0;i<login_n;i++)
					filel<<left<<setw(40)<<teacher_login[i]<<"Time: "<<hourD[i]<<":"<<minD[i]<<":"<<secD[i]<<" "<<ampm[i]<<endl;
				}
filel.close();

file.open("attendence.txt",ios::app);
if(file.is_open())
{
	file<<"______________________________________________________________________________\n";
	file<<"Date: "<<mday()<<"-"<<mon()<<"-"<<year()<<endl;
	for(i=0;i<n;i++)
	file<<teachers_attendence[i]<<endl;
}
file.close();

	system("color 0E");    
cout<<"Welcome Admin\n";
cout<<"Following teacher login today\n";
for(i=0;i<n;i++)
cout<<teachers_attendence[i]<<endl;
char choice_save;
cout<<"Enter s to save data to a file\n";
cin>>choice_save;
if(choice_save=='s'||choice_save=='S')
{
	fstream file_save("semester_"+filedate+"_data.txt", ios::out );
	   
	    if(file_save.is_open())
	    {
	    	for(i=0;i<8;i++)
	    	for(j=0;j<2;j++)
	    	for(k=0;k<5;k++)
	    	for(l=0;l<6;l++)
	    	{
	    		file_save<< semester[i][j].table[k][l].subject<<endl;
			}
	    	for(i=0;i<8;i++)
	    	for(j=0;j<2;j++)
	    	for(k=0;k<5;k++)
	    	for(l=0;l<6;l++)
	    	{
	    		file_save<< semester[i][j].table[k][l].teacher<<endl;
			}
	        
	    file_save.close();    
	    }
cout<<"File saved successfully\n";
}
else
cout<<"File not saved\n";


	
	return 0;
}