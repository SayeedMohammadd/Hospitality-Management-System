///////////PRASAD KUMARASINGHE //////////////
///////////KG/HNDCSE/10/17///////////////////
///////ADMIN USERNAME : admin   ////////////////
///////ADMIN PASSWORD : admin   ////////////////


#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>

using namespace std;
int main()
{
	char fname[20];
	time_t rawtime;
	struct tm * timeinfo;
	
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	
	
	
	cout<<"\n-----------------------------------------------------\n\n\n";
	cout<<"\t\tWELCOME\n";
	cout<<"\n\t\t  TO\n";
	cout<<"\n";
	cout<<"\tELECTRICITY MANAGEMENT SYSTEM.\n\n\n";
	cout<<"\n-----------------------------------------------------\n\n\n";
	system("pause");
	system("cls");
	
	
	int i;
	int login();
	i=login();
	
	b:
	cout<<"\n\n\n\n  ELECTRICITY MANAGEMENT SYSTEM \n\n";	
	cout<<"\n\nPlease,  Select from the following Options: \n\n";
	cout<<" _________________________________________________________________\n";
	cout<<"|                                           	                     |\n";
	cout<<"|             1  >> Add New Patients Record                       |\n";
	cout<<"|             2  >> Add New Doctor Record                         |\n";
	cout<<"|             3  >> Add Diagnosis Information                     |\n";
	cout<<"|             4  >> Full History of the Patient                   |\n";
	cout<<"|             5  >> Full Details of the Doctor                    |\n";
	cout<<"|             6  >> Information About the Hospital                |\n";
	cout<<"|             7  >> Exit the Program                              |\n";
	cout<<"|_________________________________________________________________|\n\n";
	a:cout<<"Enter your choice: ";cin>>i;
	if(i>7||i<1){cout<<"\n\nInvalid Choice\n";cout<<"Try again...........\n\n";goto a;} //if inputed choice is other than given choice
	
	system("cls");
	
	//add parents senario
	if(i==1){
		  time_t rawtime;
		  struct tm * timeinfo;
		
		  time ( &rawtime );
		  timeinfo = localtime ( &rawtime );
		  cout<<"\n\n"<< asctime (timeinfo);
		  ofstream pat_file;
		  char fname[20];
		  cout<<"\n\n\n\nEnter the patient's file name : ";
		  cin.ignore();
		  gets(fname);
		  pat_file.open(fname);
		  		if(!fname)
				{
				cout<<"\nError while opening the file\n";goto b;
				}
				else
				{
		                        struct patient_info
		                        {
		                            char name[20];
		                            char address[100];
		                            char contact[10];
		                            char age[5];
		                            char sex[8];
		                            char blood_gp[5];
		                            char disease_past[50];
		                            char id[15];
		                        };
		
		            patient_info ak;
		            cout<<"\n****************************\n";pat_file<<"\n****************************\n\n";//fn1353 st
		            cout<<"\nName : ";pat_file<<"Name : ";gets(ak.name);pat_file<<ak.name<<"\n";
		            cout<<"\nAddress : ";pat_file<<"Address : ";gets(ak.address);pat_file<<ak.address<<"\n";
		            cout<<"\nContact Number : ";pat_file<<"Contact Number : ";gets(ak.contact);pat_file<<ak.contact<<"\n";
		            cout<<"\nAge : ";pat_file<<"Age : ";gets(ak.age);pat_file<<ak.age<<"\n";
		            cout<<"\nSex : ";pat_file<<"Sex : ";gets(ak.sex);pat_file<<ak.sex<<"\n";
		            cout<<"\nBlood Group : ";pat_file<<"Blood Group : ";gets(ak.blood_gp);pat_file<<ak.blood_gp<<"\n";
		            cout<<"\nAny Major disease suffered earlier : ";pat_file<<"Any Major disease suffered earlier : ";gets(ak.disease_past);pat_file<<ak.disease_past<<"\n";
		            cout<<"\nPatient ID : ";pat_file<<"Patient ID : ";gets(ak.id);pat_file<<ak.id<<"\n";
		            cout<<"\n****************************\n";pat_file<<"\n****************************\n\n";
		            cout<<"\nParent's 'Information Saved Successfully\n";
		            }
		  system("pause");
		  system("cls");
		  goto b;
	}
	
	//add docter's details
	if(i==2){
		time_t rawtime;
		  struct tm * timeinfo;
		
		  time ( &rawtime );
		  timeinfo = localtime ( &rawtime );
		  cout<<"\n\n"<< asctime (timeinfo);
		  ofstream doc_file;
		  char fname[20];
		  cout<<"\n\n\n\nEnter the Doctor's file name : ";
		  cin.ignore();
		  gets(fname);
		  doc_file.open(fname);
		  		if(!fname)
				{
				cout<<"\nError while opening the file\n";goto b;
				}
				else
				{
		                        struct doctor_info
		                        {
		                            char name[20];
		                            char specialization[20];
		                            char contact[10];
		                            char work_experience[5];
		                            char id[15];
		                        };
		
		            doctor_info ak;
		            cout<<"\n****************************\n";doc_file<<"\n****************************\n\n";//fn1353 st
		            cout<<"\nName : ";doc_file<<"Name : ";gets(ak.name);doc_file<<ak.name<<"\n";
		            cout<<"\nSpecialization : ";doc_file<<"Specialization : ";gets(ak.specialization);doc_file<<ak.specialization<<"\n";
		            cout<<"\nContact Number : ";doc_file<<"Contact Number : ";gets(ak.contact);doc_file<<ak.contact<<"\n";
		            cout<<"\nYears of Working Experience  : ";doc_file<<"Years of Working Experience  : ";gets(ak.work_experience);doc_file<<ak.work_experience<<"\n";
		            cout<<"\nDocter ID : ";doc_file<<"Docter ID : ";gets(ak.id);doc_file<<ak.id<<"\n";
		            cout<<"\n****************************\n";doc_file<<"\n****************************\n\n";
		            cout<<"\n Docter's 'Information Saved Successfully\n";
		            }
		  system("pause");
		  system("cls");
		  goto b;
	}
	
	if(i==3){
		fstream pat_file;
	    cout<<"\n\nEnter the patient's file name to be opened : ";
	    cin.ignore();
	    gets(fname);
	    system("cls");
		pat_file.open(fname, ios::in);
			if(!pat_file)
			{
			cout<<"\nError while opening the file\n";goto b;
			}
			else
			{
			    cout<<"\n\n\n\n.....................Information about "<<fname<<" .....................\n\n\n\n";
			    string info;
				while(pat_file.good())
				{
				getline(pat_file,info);
				cout<<info<<"\n";
				}
				cout<<"\n";
				pat_file.close();
				pat_file.open(fname, ios::out | ios::app);
	            cout<<"\n";
				cout<<"Adding more information in patient's file................on : "<<asctime (timeinfo);pat_file<<"Description of "<<asctime (timeinfo)<<"\n";
	                            struct app
	                            {
	                                char symptom[500];
	                                char diagnosis[500];
	                                char medicine[500];
	                                char addmission[30];
	                                char ward[15];
	                            };
	            app add;
	            cout<<"\nSymptoms : "; pat_file<<"Symptoms : ";gets(add.symptom); pat_file<<add.symptom<<"\n";
	            cout<<"\nDiagnosis : "; pat_file<<"Diagnosis : ";gets(add.diagnosis); pat_file<<add.diagnosis<<"\n";
	            cout<<"\nMedicines : "; pat_file<<"Medicines : ";gets(add.medicine); pat_file<<add.medicine<<"\n";
	            cout<<"\nAddmission Required? : "; pat_file<<"Addmission Required? : ";gets(add.addmission); pat_file<<add.addmission<<"\n";
	            cout<<"\nType of ward : "; pat_file<<"Type of ward : ";gets(add.ward); pat_file<<add.ward<<"\n";pat_file<<"\n******************************\n";
	            cout<<"\n\n"<<add.ward<<" ward is alloted Successfully\n";
				pat_file.close();
				cout<<"\n\n";
				system("pause");
	            system("cls");
				goto b;
			}
	}
	
	if(i==4){
		fstream pat_file;
	    cout<<"\n\nEnter the patient's file name to be opened : ";
	    cin.ignore();
	    gets(fname);
	    system("cls");
		pat_file.open(fname, ios::in);
			if(!pat_file)
			{
			cout<<"\nError while opening the file\n";goto b;
			}
			else
			{
			    cout<<"\n\n\n\n....................Full Medical History of "<<fname<<"....................\n\n\n\n";
			    string info;
				while(pat_file.good())
				{
				getline(pat_file,info);
				cout<<info<<"\n";
				}
				cout<<"\n";
	        }
	        system("pause");
	        system("cls");
	        goto b;
	}
	
	if(i==5){
		fstream doc_file;
	    cout<<"\n\nEnter the docter's file name to be opened : ";
	    cin.ignore();
	    gets(fname);
	    system("cls");
		doc_file.open(fname, ios::in);
			if(!doc_file)
			{
			cout<<"\nError while opening the file\n";goto b;
			}
			else
			{
			    cout<<"\n\n\n\n....................Full Medical History of "<<fname<<"....................\n\n\n\n";
			    string info;
				while(doc_file.good())
				{
				getline(doc_file,info);
				cout<<info<<"\n";
				}
				cout<<"\n";
	        }
	        system("pause");
	        system("cls");
	        goto b;
	}
	
	if(i==6){
		ifstream file;
		file.open("about.txt");
			if(!file)
			{
			cout<<"\nError while opening the file\n";goto b;
			}
			else
			{
			    cout<<"\t\t\n\n\n\n\n\n...........................Information about the Hospital.............................\n\n";
			    string line;
				while(file.good())
				{
				getline(file,line);
				cout<<line<<"\n\t";
				}
				cout<<"\n\n\t";
				system("pause");
	            system("cls");
				goto b;
			}
	}
	
	if(i==7){
		system("cls");
		cout<<"-------------------------------------------------------------\n";
		cout<<"--|                 THANK YOU FOR USING                   |--\n";
		cout<<"--|            HOSPITAL MANAGEMENT SYSTEM                 |--\n";
		cout<<"-------------------------------------------------------------\n\n\n\n";
	}
	
	
}
//login function
int login(){
	   string username ="";
	   string password ="";
	   char ch;
	   cout<<"\nELECTRICITY MANAGEMENT SYSTEM \n\n";
	   cout<<"------------------------------";
	   cout<<"\n-------------LOGIN------------\n";	
	   cout<<"------------------------------\n\n";	
	   cout << "Enter Username : ";
	   cin>>username;
	   cout << "Enter Password : ";
	   ch = _getch();
	   while(ch != 13){
	      password.push_back(ch);
	      cout << '*';
	      ch = _getch();
	   }
	   if(username=="admin"&&password == "admin"){
	      cout << "\n\nAccess Granted! \n";
	      system("PAUSE");
	      system ("CLS");
	      return 100;
	   }
	   else if(username=="user"&&password == "user"){
	   	  cout << "\n\nAccess Granted! \n";
	   	  system("PAUSE");
	      system ("CLS");
	      return 200;
	   }
	   else{
	      cout << "\n\nAccess Aborted...\ntPlease Try Again\n\n";
	      system("PAUSE");
	      system("CLS");
	      login();
	   }
	}
