#include <iostream>
#include <ctime>

using namespace std;

void header();
void love(int &i, int &j); // declaration
void load()
{
	for(int i = 0; i < 100; i++) {
		cout << "loading... " << i << " %" << endl;
		system("clear");
	}
}

int main()
{
	int a, b;
	string us, pw;
	char kar;

	// login
	do {
			cout << "username : "; getline(cin, us);
			cout << "password : "; getline(cin, pw);
		
			// condition
			if (us == "@215" && pw == "@215" ) {
				load(); // call function load
			
				// header
				header();
				cin >> kar;
		
				// condition
				if(kar == 'm') {
					love(a,b); // call function
			} else 
				if(kar == 't') {
				cout << "\nThanks udah mau jawab :')\n";
			}
			
		} else {
			cout << "\nusername atau password salah\n"
				 << "ingin mengulang y/n ... ? ";
			cin >> kar;
			cin.ignore();
			// condition
			if(kar == 'n')
			return 0;
			system("clear");
		}

	}while(kar == 'y');
	return 0;
}

// prototype function
void love(int &i, int &j) 
{ 
			cout << endl;
                 for(i=1;i<=22;i++){
                 for(j=1;j<=60;j++){
                 if(i==1) if(((j>=14)&&(j<=23))||((j>=39)&&(j<=48))) cout<<"*"; else cout<<" ";
                 else if(i==2) if(((j>=11)&&(j<=26))||((j>=36)&&(j<=51))) cout<<"*"; else cout<<" ";
                 else if(i==3) if(((j>=9)&&(j<=28))||((j>=34)&&(j<=53))) cout<<"*"; else cout<<" ";
                 else if(i==4) if(((j>=7)&&(j<=30))||((j>=32)&&(j<=55))) cout<<"*"; else cout<<" ";
                 else if((i>=5)&&(i<=8)) if((j>=5)&&(j<=57)) cout<<"*"; else cout<<" ";
                 else if(i==9)  if((j>=7)&&(j<=55))  cout<<"*"; else cout<<" ";
                 else if(i==10) if((j>=9)&&(j<=53))  cout<<"*"; else cout<<" ";
                 else if(i==11) if((j>=11)&&(j<=51)) cout<<"*"; else cout<<" ";
                 else if(i==12) if((j>=13)&&(j<=49)) cout<<"*"; else cout<<" ";
                 else if(i==13) if((j>=15)&&(j<=47)) cout<<"*"; else cout<<" ";
                 else if(i==14) if((j>=17)&&(j<=45)) cout<<"*"; else cout<<" ";
                 else if(i==15) if((j>=19)&&(j<=43)) cout<<"*"; else cout<<" ";
                 else if(i==16) if((j >=21)&&(j<=41)) cout<<"*"; else cout<<" ";
                 else if(i==17) if((j>=23)&&(j<=39)) cout<<"*"; else cout<<" ";
                 else if(i==18) if((j>=25)&&(j<=37)) cout<<"*"; else cout<<" ";
                 else if(i==19) if((j>=27)&&(j<=35)) cout<<"*"; else cout<<" ";
                 else if(i==20) if((j>=29)&&(j<=33)) cout<<"*"; else cout<<" ";
                 else if(i==21) if((j>=30)&&(j<=32)) cout<<"*"; else cout<<" ";
                 else if(i==22) if(j==31)  cout<<"\t\t\t      *"; 
              }
              cout<<"\n";
           }
           cout << "\nThanks :)\n"
				<< "EROR SQUAD\n";
}
void header()
{
   time_t now = time(0);
   char *dt = ctime(&now);
   
	cout << "\t___________________\n"
		 << "\t                   \n"
		 << "\tS I M P - T O O L S\n"
		 << "\t___________________\n\n";
	cout << "Time now : " << dt << "\n\n"
		 << "Hai will you marry me?\n"
		 << "[m] : \"mau\"\n"
		 << "[t] : \"Tidak Nolak\"\n\n"
		 << "> "; 
		 
}
