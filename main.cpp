#include<iostream>
#include<fstream>
 

using namespace std;

class shopping
{
	
	private:
		int pcode;
		float price;
		float dis;
		string pname;
		string userName,Email,password;
        string searchName,searchPass,searchEmail;
        fstream file;
		
		public:
			void menu();
			void administrator();
			void buyer();
			void buyer1();
			void add();
			void edit();
			void rem();
			void list();
			void receipt();
			void login();
            void signUP();
            void help();
            void logout();
			
}obj;

void shopping :: menu()
{
	system("cls");
	m:
	int choice;
	string email;
	string password;
	
	cout<<"\t\t\t\t______________________________________\n";
	cout<<"\t\t\t\t                                      \n";
	cout<<"\t\t\t\t          WELCOME TO Bun Talk         \n";
	cout<<"\t\t\t\t                                      \n";
	cout<<"\t\t\t\t______________________________________\n";
	cout<<"\t\t\t\t                                      \n";
	cout<<"\t\t\t\t|  1) Administrator   |\n";
	cout<<"\t\t\t\t|                     |\n";
	cout<<"\t\t\t\t|  2) Buyer           |\n";
	cout<<"\t\t\t\t|                     |\n";
	cout<<"\t\t\t\t|  3) Exit            |\n";
	cout<<"\t\t\t\t|                     |\n";
	cout<<"\n\t\t\t Please select: ";
	cin>>choice;
	
	switch(choice)
	{
		 
		case 1:
			cout<<"\t\t\t                     \n";
			cout<<"\t\t\t ..Please Login.. \n";
			cout<<"\t\t\t                     \n";
			cout<<"\t\t\t Enter Email    :    \n";
			cin>>email;
			cout<<"\t\t\t Enter Password :       \n";
			cin>>password;
			
			if(email=="admin@email.com" && password=="admin@123")
			{
				cout << "Login successful!\n";	
				sleep(1);
				administrator();
			}
			else
			{
				cout<<"Invalid Login Details";
			}
			break;
	
	
	case 2:
		{
			buyer1();
			
		}
	
	case 3:
		{
			exit(0);
		}
		
		default :
			{
				cout<< "Please select from the given options";
				
			}
			
	
}
goto m;
}

void shopping:: administrator()
{
	system("cls");
	m:
	int choice;
	cout<<"\n\n\n\t\t\t     Admin Panel          ";
	cout<<"\n\t\t\t                              ";
	cout<<"\n\t\t\t|_____1) Add the product_____|";
	cout<<"\n\t\t\t|                            |";
	cout<<"\n\t\t\t|_____2) Edit the product____|";
	cout<<"\n\t\t\t|                            |";
	cout<<"\n\t\t\t|_____3) Delete the product__|";
    cout<<"\n\t\t\t|                            |";
    cout<<"\n\t\t\t|_____4) Back to main menu___|";
    
    cout<<"\n\n\t Please enter your choice : ";
    cin>>choice;
    
    switch(choice)
    {
    	case 1:
    		add();
    		break;
    		
    	case 2:
    		edit();
    		break;
    		
    	case 3:
    		rem();
    		break;
    		
    	case 4:
    		menu();
    		break;
    		
    	default :
    		cout<<"Invalid choice!";
    		
	}
	goto m;
}

void shopping:: buyer1(){
	
		system("cls");
	m:
	int choice;
    cout<<"\n\n\n\t\t\t\t Buyer Panel ";
	cout<<"\n\t\t\t______________________________ ";
	cout<<"\n\t\t\t                             ";
	cout<<"\n\t\t\t|                            |";
	cout<<"\n\t\t\t|_____1) Login_______________|";
	cout<<"\n\t\t\t|                            |";
	cout<<"\n\t\t\t|_____2) Sign-Up____________|";
	cout<<"\n\t\t\t|                            |";
	cout<<"\n\t\t\t|_____3) Go back_____________|";
	cout<<"\n\t\t\t|                            |";
	cout<<"\n\t\t\t|_____4) Help________________|";
	cout<<"\n\t\t\t                             ";
	cout<<"\n\t\t\t                             ";
	
	cout<<"\n\t\t\t Enter your choice : ";
	
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cin.ignore();
            obj.login();
            
		case 2:
			cin.ignore();
            obj.signUP();
			
		case 3:
    		menu();
    		break;
    		
    	case 4:
    		help();
    		break;
			
		default :
			
			cout<<"invalid choice";
			
	}
	
	goto m;
}

void shopping:: login(){
	system("cls");
	//m:
	bool loginSuccessful = false;
	
	
	cout<<"\n\n\n\t\t\t\t      LOGIN            "<<endl;
	cout<<"\n\t\t\t___________________________________";
	cout<<"\n\t\t\t                             ";
	cout<<"\n\t\t\t                             ";
    cout<<"\n\t\t\t     Enter Your User Name :: "<<endl;
    getline(cin,searchName);
    cout<<"\n\t\t\t     Enter Your Password  :: "<<endl;
    getline(cin,searchPass);

    file.open("loginData.txt",ios :: in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    
    while(!file.eof()){
        if(userName == searchName && password == searchPass){
        	cout << "\nAccount Login Successful...!";
            loginSuccessful = true; 
            sleep(1);
            buyer();
            break; 
        }
        getline(file, userName, '*');
        getline(file, Email, '*');
        getline(file, password, '\n');
    }
    
    file.close();

    
    if (!loginSuccessful) {
        cout << "\nLogin Failed! Please check your username and password." << endl;
        sleep(1);
            buyer1();
           
    }
}




// * log out start * 

void shopping::logout() {
    system("cls");
    cout << "\n\n\n\t\t\t\t      LOGOUT            " << endl;
    cout << "\n\t\t\t___________________________________";
    cout << "\n\t\t\t                             ";
    cout << "\n\t\t\t                             ";
    cout << "\n\t\t\t   You have been logged out. Goodbye!\n" << endl;
    
    

    
    sleep(1);
    
    buyer1();    
}


// * Log out end *


        	


        	
        	
    

void shopping:: signUP(){
	
		system("cls");
	m:
	cout<<"\n\n\n\t\t\t\t      SIGN UP          "<<endl;
	cout<<"\n\t\t\t___________________________________";
	cout<<"\n\t\t\t                             ";
	cout<<"\n\t\t\t                             ";
	cout<<"\n\t\t\t     Enter Your User Name :: ";
    getline(cin,userName);
    cout<<"\n\t\t\t Enter Your Email Address :: ";
    getline(cin,Email);
    cout<<"\n\t\t\t      Enter Your Password :: ";
    getline(cin,password);
    cout<<"\nAccount Sign Up Succesfull...!";

    file.open("loginData.txt",ios :: out | ios :: app);
    file<<userName<<"*"<<Email<<"*"<<password<<endl;
    {
    		
				sleep(1);
    buyer1();
	}
    
}



void shopping:: help()
{
	system("cls");
	m:
	int choice;
    cout<<"\n\n\n\t\t\t\t Feel free to contact us!";
    cout<<"\n\n\n\t\t\t\t Contact us via gmail at buntalk@gmail.com.";
    cout<<"\n\t\t\t                               ";
	cout<<"\n\t\t\t_________________________________________________";
	cout<<"\n\t\t\t                               ";
	cout<<"\n\t\t\t|                             |";
	cout<<"\n\t\t\t|_____1) Go back______________|";
	cout<<"\n\t\t\t                             ";
	cout<<"\n\t\t\t                             ";
	
	cout<<"\n\t\t\t Enter your choice : ";
	
	cin>>choice;
	
	switch(choice)
	{
			
		case 1:
    	    buyer1();
    		break;
			
		default :
			
			cout<<"invalid choice";
			
	}
	
	goto m;
}


void shopping:: buyer()
{
	system("cls");
	m:
	int choice;
    cout<<"\n\n\n\t\t\t\t Buyer";
	cout<<"\n\t\t\t______________________________ ";
	cout<<"\n\t\t\t                             ";
	cout<<"\n\t\t\t|                            |";
	cout<<"\n\t\t\t|_____1) Buy product_________|";
	cout<<"\n\t\t\t|                            |";
	cout<<"\n\t\t\t|_____2) Go back_____________|";
	cout<<"\n\t\t\t|                            |";
	cout<<"\n\t\t\t|_____3) Log out_____________|";
	cout<<"\n\t\t\t                             ";
	cout<<"\n\t\t\t                             ";
	
	cout<<"\n\t\t\t Enter your choice : ";
	
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			receipt();
			break;
			
		case 2:
			buyer1();
			break;
		
		case 3:
			logout();
			
			
		default :
			
			cout<<"invalid choice";
			
	}
	
	goto m;
	
	
}

void shopping ::add()
{
	system("cls");
	m:
	fstream data;
	int c;
	int token=0;
	float p;
	float d;
	string n;
	
	cout<<"\n\n\t\t\t Add new product";
	cout<<"\n\n\t Product code of the product ";
	cin>>pcode;
	cout<<"\n\n\t Name of the product ";
	cin>>pname;
	cout<<"\n\n\t Price of the product ";
	cin>>price;
	cout<<"\n\n\t Discount on product ";
	cin>>dis;
	
	data.open("database.txt",ios::in);
	
	if(!data)
	{
		data.open("database.txt", ios::app|ios::out);
		data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
		data.close();
	}
	else
	{
		data>>c>>n>>p>>d;
		
		while(!data.eof())
		{
			if(c ==pcode)
			{
				token++;
				
			}
			data>>c>>n>>p>>d;
		}
		data.close();
		
		
	
	
	if(token==1)
	 goto m;
	else{
		data.open("database.txt", ios::app|ios::out);
		data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
		data.close();
		
	}
}
	cout<<"\n\n\t\t Record inserted !";
}

void shopping ::edit()
{
	system("cls");
	fstream data,data1;
	int pkey;
	int token=0;
	int c;
	float p;
	float d;
	string n;
	
	cout<<"\n\t\t\t Modify the record";
	cout<<"\n\t\t\t Product code :";
	cin>>pkey;
	
	data.open("database.txt",ios::in);
	if(!data)
	{
		cout<<"\n\nFile doesn't exist! ";
	}
	else{
		
		data1.open("database1.txt", ios::app|ios::out);
		
		data>>pcode>>pname>>price>>dis;
		while(!data.eof())
		{
			if(pkey==pcode)
			{
				cout<<"\n\t\t Product new code :";
				cin>>c;
				cout<<"\n\t\t Name of the product :";
				cin>>n;
				cout<<"\n\t\t Price :";
				cin>>p;
				cout<<"\n\t\t Discount :";
				cin>>d;
				data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
				cout<<"\n\n\t\t Record edited ";
				token++;
			}
			else
			{
				data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
				
			}
			data>>pcode>>pname>>price>>dis;
		}
		data.close();
		data1.close();
		
		remove("database.txt");
		rename("database1.txt","database.txt");
		
		if(token==0)
		{
			cout<<"\n\n Record not found sorry!";
			sleep(1);
			administrator();
		}
	}
	
	
	
}
void shopping::rem()
{
	system("cls");
	
	fstream data,data1;
	int pkey;
	int token=0;
	cout<<"\n\n\t Delete product";
	cout<<"\n\n\t Product code :";
	cin>>pkey;
	data.open("database.txt", ios::in);
	if(!data)
	{
		cout<<"File doesnt exist";
		sleep(1);
			administrator();
		
	}
	
	else{
		data1.open("database1.txt",ios::app|ios::out);
		data>>pcode>>pname>>price>>dis;
		while(!data.eof())
		{
			if(pcode==pkey)
			{
				cout<<"\n\n\t Product deleted succesfully";
				token++;
			}
			else
			{
				data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
				
			}
			data>>pcode>>pname>>price>>dis;
		}
		data.close();
		data1.close();
		remove("database.txt");
		rename("database1.txt","database.txt");
		
		if(token==0)
		{
			cout<<"\n\n Record not found";
			sleep(1);
			administrator();
		}
	}
}

void shopping:: list()
{
	system("cls");
	fstream data;
	data.open("database.txt",ios::in);
	cout<<"\n\n|___________________________________________________________\n";
	cout<<"ProNo\t\tName\t\tPrice\n";
	cout<<"\n\n|___________________________________________________________\n";
	data>>pcode>>pname>>price>>dis;
	while(!data.eof())
	{
		cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
		data>>pcode>>pname>>price>>dis;
		
	}
	data.close();
}

void shopping::receipt() 
	{
		system("cls");
		fstream data;
		
		int arrc[100],arrq[100];
		char choice;
		int c=0;
		float amount=0;
		float dis=0;
		float total=0;
		cout<<"\n\n\t\t\t Receipt ";
		data.open("database.txt",ios::in);
		if(!data)
		{
			cout<<"\n\n Empty database";
		}
		else
		{
			data.close();                                   
			list();
			cout<<"\n____________________________\n";
			cout<<"\n|                            |";
			cout<<"\n|    Please place the order  |";
			cout<<"\n|____________________________|\n";
			do
			{
				m:
				cout<<"\n\n Product Code : ";
				cin>>arrc[c];
				cout<<"\n Product Quantity : ";
				cin>>arrq[c];
				for(int i=0;i<c;i++)
				{
					if(arrc[c] == arrc[i])
					{
						cout<<"\n\n Duplicate Product Code. Please try again!";
						sleep(1);
						receipt();
					}
				}
				c++;             
				cout<<"\n\n Want to buy another product? Press y for yes and n for no : ";
				cin>>choice;	
			}
			
			while(choice == 'y');
			system("cls");
			
			cout<<"\n\n\t\t\t__________RECEIPT______________\n";
			cout<<"\nProduct Num.\tProduct Name\tQuantity \tPrice \tAmount \tAmount with discount\n";
			
			
			for(int i=0;i<c;i++) 
			{
				data.open("database.txt",ios::in);
				data>>pcode>>pname>>price>>dis;
				while(!data.eof())
				{
					if(pcode == arrc[i])   
					{
						amount = price*arrq[i];
						dis = amount - (amount*dis/100);
						total =total+ dis;
						cout<<"\n"<<pcode<<"\t\t"<<pname<<"\t\t"<<arrq[i]<<"\t\t"<<price<<"\t"<<amount<<"\t\t"<<dis;	
					}
					   data>>pcode>>pname>>price>>dis;  
				}
				data.close();
			}
			cout<<"\n\n----------------------------------------";
			cout<<"\n Total Amount : "<<total;
		}
	}
int main()
{
	system("cls");
	shopping s;
	s.menu();
}

