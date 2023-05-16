/**********************************************************************************************************************************************/
/*** Main File that Responsible to Run Telecome Billing System Application		                                                      		***/
/**********************************************************************************************************************************************/
/*** Creation Date 	  : 14 May 2023																								    		***/
/*** Author			  : Doaa Ismail 																										***/
/*** Version		  : 1													  																***/
/*** Description App  : Design Simple functions have been used in co-ordination with data structure and file handling. As the 				***
						project is relatively short, you can thoroughly go through the whole source code; this will help 					***
						you understand data structure and file handling if you know their fundamentals. The functions 						***
						and features used in this project are listed below: 																***
							1- Add new records: add new data into file with name, phone number and amount to be paid 						***
							2- View list of records – lists all telephone billing records 													***
							3- Modify records – edit the added records; name, phone number and/or amount of payment can be edited 			***
							4- View payment – shows amount to be paid 																		***
							5- Search records – search for added/updated records in file 													***
							6- Delete records – removes data permanently from file 															***/
/**********************************************************************************************************************************************/

//Include From LIB Functions_INTERFACE.h that Responsible to Include All Need Libraries and Custome Functions.
#include"LIB/Functions_INTERFACE.h"

// Start Main Function.
int main(){
	system("cls");					// Clear Window.
	// Print out Information for User Interface as Welcome Message 'Home Page' that will be able to use his App Now.
	printf("\n\n\n**************************************************************");
	printf("\n------WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM---------");
	printf("\n***************************************************************");
	Sleep(2000);					// Wait 2 Sec to give allowance for User to Read Welcome Message.
	getch();						// Function Used to pauses the Output Console until a key is pressed.
    system("cls");					// Clear Window.
	while (1)						// Start While Loop.
	{
		Fun_GetUser_Request();		// Our Main Custome Function that allow User to Select/Choise which Request- Operation he needs. 
	}
}
// End Main Function.

