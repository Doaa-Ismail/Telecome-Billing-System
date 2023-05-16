/**********************************************************************************************************************************************/
/*** Files Responsible to Implematation Function that Will Used in Application                                                        		***/
/**********************************************************************************************************************************************/
/*** Implematation Fun_Search_Records() that Responsible Search Data of User at Database File.									    		***/
/*** With User Information : Name, Phone Number and Amount of payment. 																		***/
/*** That Asking User to Enter His Phone Number to Search it at Database File  																***/
/*** Then Give Ability to Display His Data at Console																						***/
/**********************************************************************************************************************************************/


/*
	Start Implemation Fun_Search_Records():
	1- Accessing Files (ablity to read - write - append) operations by Using External Function fopen. 
		fopen allows you to open any file and edit or read or write on this file.
		1.1- For Read Operation from File use 'rb' Parameter at Function fopen. 
		1.2- For Write/Over Write Operation at File use 'wb+' Parameter at Function fopen.
		1.3- For Write/Append Operation at File Add New line for example use 'ab+' Parameter at Function fopen
	2- Using FILE Function to Define ptr Database_File as Variable.
	3- Asking User to Enter his Phone Number. 
		3.1- Check on his Phone Number if Exist/Found or No. 
	4- Once Find Phone Number will be Give him ability to Fatch all his Data from Database and Displayed it into Console.
*/

void Fun_Search_Records()
{
	FILE *Database_File;											// Use Function Files to Define file of Database to be able doing Read-Write-Append functions on File.
	u8 Input_phonenumber[20];										// Define Array of Char Type For User Input as Unsigned Char Data Type.
	u16 flag=1;														// Define 'flag' Variable as Unsigned Short Int Type.
	Database_File=fopen("Database/file.ojs","rb+");					// Check on Database_File is Found or No, If No: Back to Home Page.
	if(Database_File==0)											// Check on Database_File is Found or No, If No: Back to Home Page.
		exit(0);													// Back to Home Page.
	fflush(stdin);													// Functin fflush used to clear the stream/buffer. 
	system("cls");													// Clear Window.
	printf("Enter Phone Number to search in System: ");				// Print out Information for User Interface Asking him to Enter Phone Number for Searching Operation.	
	scanf("%s", Input_phonenumber);									// Get From User Input 'Phone Number' and Assign it into Input_phonenumber Array of Char Type.
	while(fread(&New_Subscriber,sizeof(New_Subscriber),1,Database_File)==1) // Check and looping on Database File to Fatch Data from Database.
	{
		if(strcmp(New_Subscriber.PhoneNumber,Input_phonenumber)==0)	// If New_Subscriber.PhoneNumber is the same User Input Phone Number that Find at Database.
		{	system("cls");											// Clear Window.
			printf(" Record Found ");								// Print out Information for User Interface told him that his input data is found.
			// Print out Information for User Interface: Frist Colume: User.Phone Number, Second Colume: User.Name, Third Colume: User.Amount_Paid.
			printf("\n\nPhonenumber: %s\nName: %s\nAmount/Credit: Rs.%0.2f\n",New_Subscriber.PhoneNumber,New_Subscriber.Name,New_Subscriber.Amount_Paid);
			flag=0;													// Set Flag Zero.
			break;													// Break While Loop.
		}
		else if(flag==1)											// Check If Flag One Meaning His Input Not Exist.
		{	system("cls");											// Clear Window.
			printf("Requested Phone Number Not found in our database");// Print out Information for User Interface told him that his inpyut data is not found.
		}
	}
	getch();														// Function Used to pauses the Output Console until a key is pressed.
	fclose(Database_File);											// Close Database_File File by Function fclose.
}
// End 'Fun_Search_Records' Function.