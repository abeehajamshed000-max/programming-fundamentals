#include <iostream>
#include <conio.h>
using namespace std;

//function prototypes
void showmenu();
void adminlogin(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int &idx);
void admin(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int &idx);
void showAll(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int idx);
void searchCust(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int idx);
void updateRec(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int idx);
void toplist(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int idx);
void deleteRec(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int idx);
void addcustomer(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int &idx);

main()
{
	int index = 5;
	string custName[1000] = {"bilal", "hamza", "zara", "usman", "hira"};
	int custAge[1000] = {18, 22, 20, 25, 19};
	int pcNumber[1000] = {3, 7, 2, 5, 1};
	float hoursPlayed[1000] = {2.5, 1.0, 3.0, 4.0, 2.0};
	float amountPaid[1000] = {500, 200, 600, 800, 400};
	string gameType[1000] = {"pc", "ps5", "vr", "pc", "ps5"};

	while(true)
	{
		system("cls");
		showmenu();
		string option;
		cin>>option;
		cout<<"You choose "<<option<<endl;

		if(option=="1")
		{
			adminlogin(custName,custAge,pcNumber,hoursPlayed,amountPaid,gameType,index);
		}
		else if(option=="2")
		{
			addcustomer(custName,custAge,pcNumber,hoursPlayed,amountPaid,gameType,index);
		}
		else if(option=="3")
		{
			break;
		}
		else
		{
			cout<<"Wrong entered wrong option"<<endl;
		}
	}

	cout<<endl<<"Thanks for using this software";
}

void showmenu()
{
	cout<<"|--------------------------------|"<<endl;
	cout<<"|- Gaming Cafe Management System-|"<<endl;
	cout<<"|--------------------------------|"<<endl;
	cout<<endl;
	cout<<"User menu"<<endl;
	cout<<"1 Admin"<<endl;
	cout<<"2 Customer"<<endl;
	cout<<"3 to Exit"<<endl;
	cout<<"choose option : ";
}

void adminlogin(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int &idx)
{
	int i=0;
	while(i<3)
	{
		system("cls");
		cout<<"Admin menu :Login Attempt "<<i+1<<endl;
		string username,pass;
		cout<<"Enter username : ";
		cin>>username;
		cout<<"Enter password : ";
		cin>>pass;

		if(username=="admin" && pass=="cafe123")
		{
			cout<<"Logined successfully!"<<endl;
			admin(names,ages,pcno,hrs,amt,gtype,idx);
			break;
		}
		else
		{
			cout<<"Password or Username is invalid"<<endl;
			cout<<"Press any key to continue...";
			getch();
		}
		i++;
	}
}

void admin(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int &idx)
{
	while(true)
	{
		system("cls");
		cout<<"1 Show all customers"<<endl;
		cout<<"2 Search customer"<<endl;
		cout<<"3 Update customer record"<<endl;
		cout<<"4 Top spender list"<<endl;
		cout<<"5 Delete customer record"<<endl;
		cout<<"6 Logout"<<endl;
		cout<<"Choose the option : ";
		string op;
		cin>>op;

		if(op=="1")
		{
			showAll(names,ages,pcno,hrs,amt,gtype,idx);
		}
		else if(op=="2")
		{
			searchCust(names,ages,pcno,hrs,amt,gtype,idx);
		}
		else if(op=="3")
		{
			updateRec(names,ages,pcno,hrs,amt,gtype,idx);
		}
		else if(op=="4")
		{
			toplist(names,ages,pcno,hrs,amt,gtype,idx);
		}
		else if(op=="5")
		{
			deleteRec(names,ages,pcno,hrs,amt,gtype,idx);
		}
		else if(op=="6")
		{
			break;
		}
		else
		{
			cout<<"Wrong option selected"<<endl;
		}
		cout<<"Press any key to continue...";
		getch();
	}
}

void showAll(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int idx)
{
	cout<<"Name\tAge\tPC No\tHours\tAmount\tGame"<<endl;
	int i=0;
	while(i<idx)
	{
		if(names[i]!="")
		{
			cout<<names[i]<<"\t"<<ages[i]<<"\t"<<pcno[i]<<"\t"<<hrs[i]<<"\t"<<amt[i]<<"\t"<<gtype[i]<<endl;
		}
		i++;
	}
}

void searchCust(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int idx)
{
	cout<<"Enter name you want to search : ";
	string n;
	cin>>n;
	int foundindex=-1;
	for(int i=0;i<idx;i++)
	{
		if(names[i]==n)
		{
			foundindex=i;
		}
	}
	if(foundindex==-1)
	{
		cout<<"Customer not found"<<endl;
	}
	else
	{
		cout<<"Name\tAge\tPC No\tHours\tAmount\tGame"<<endl;
		cout<<names[foundindex]<<"\t"<<ages[foundindex]<<"\t"<<pcno[foundindex]<<"\t"<<hrs[foundindex]<<"\t"<<amt[foundindex]<<"\t"<<gtype[foundindex]<<endl;
	}
}

void updateRec(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int idx)
{
	cout<<"Enter name to update : ";
	string n;
	cin>>n;
	int foundindex=-1;
	for(int i=0;i<idx;i++)
	{
		if(names[i]==n)
		{
			foundindex=i;
		}
	}
	if(foundindex!=-1)
	{
		string newname; int newage; int newpc; float newhrs; float newamt; string newgame;
		cout<<"Enter new name : ";
		cin>>newname;
		cout<<"Enter new age : ";
		cin>>newage;
		cout<<"Enter new PC number : ";
		cin>>newpc;
		cout<<"Enter hours played : ";
		cin>>newhrs;
		cout<<"Enter amount paid : ";
		cin>>newamt;
		cout<<"Enter game type (pc/ps5/vr) : ";
		cin>>newgame;

		names[foundindex]=newname;
		ages[foundindex]=newage;
		pcno[foundindex]=newpc;
		hrs[foundindex]=newhrs;
		amt[foundindex]=newamt;
		gtype[foundindex]=newgame;
		cout<<"Record updated"<<endl;
	}
	else
	{
		cout<<"Record not found!"<<endl;
	}
}

void toplist(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int idx)
{
	//sorting using bubble sort
	for(int i=0;i<idx;i++)
	{
		for(int j=i+1;j<idx;j++)
		{
			if(amt[i]<amt[j])
			{
				string tn=names[i]; names[i]=names[j]; names[j]=tn;
				int ta=ages[i]; ages[i]=ages[j]; ages[j]=ta;
				int tp=pcno[i]; pcno[i]=pcno[j]; pcno[j]=tp;
				float th=hrs[i]; hrs[i]=hrs[j]; hrs[j]=th;
				float tamt=amt[i]; amt[i]=amt[j]; amt[j]=tamt;
				string tg=gtype[i]; gtype[i]=gtype[j]; gtype[j]=tg;
			}
		}
	}
	cout<<"Name\tAmount Paid"<<endl;
	for(int i=0;i<idx;i++)
	{
		if(names[i]!="")
		cout<<names[i]<<"\t"<<amt[i]<<endl;
	}
}

void deleteRec(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int idx)
{
	cout<<"Enter the name you want to delete : ";
	string n;
	cin>>n;
	int foundindex=-1;
	for(int i=0;i<idx;i++)
	{
		if(names[i]==n)
		{
			foundindex=i;
		}
	}
	if(foundindex!=-1)
	{
		names[foundindex]="";
		ages[foundindex]=0;
		pcno[foundindex]=0;
		hrs[foundindex]=0;
		amt[foundindex]=0;
		gtype[foundindex]="";
		cout<<"Record of "<<n<<" deleted"<<endl;
	}
	else
	{
		cout<<"record not found"<<endl;
	}
}

void addcustomer(string names[], int ages[], int pcno[], float hrs[], float amt[], string gtype[], int &idx)
{
	system("cls");
	cout<<"Welcome to gms customer menu"<<endl;
	string name; int age; int pc; float hours; float amount; string game;
	cout<<"Enter your name : "<<endl;
	cin>>name;
	cout<<"Enter your age : "<<endl;
	cin>>age;
	cout<<"Enter PC number you want : "<<endl;
	cin>>pc;
	cin.ignore();
	cout<<"Enter hours you want to play : "<<endl;
	cin>>hours;
	cout<<"Enter amount you are paying : "<<endl;
	cin>>amount;
	cout<<"Enter game type (pc/ps5/vr) : "<<endl;;
	cin>>game;

	names[idx]=name;
	ages[idx]=age;
	pcno[idx]=pc;
	hrs[idx]=hours;
	amt[idx]=amount;
	gtype[idx]=game;
	idx=idx+1;

	cout<<"Your data has been saved"<<endl;
	cout<<"Press any key to continue...";
	getch();
}
