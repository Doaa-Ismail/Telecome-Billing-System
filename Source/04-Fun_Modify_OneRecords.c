/**********************************************************************************************************************************************/
/*** Files Responsible to Implematation Function that Will Used in Application                                                        		***/
/**********************************************************************************************************************************************/
/*** Implematation Fun_Modify_OneRecords() that Responsible Modify- Update Data of User at Database File.						    		***/
/*** With User Information : Name, Phone Number and Amount of payment. 																		***/
/*** That Asking User to Enter His Phone Number to Search it at Database File  																***/
/*** Then Give Ability to Fill Update - New Data to be Saved at Database File																***/
/**********************************************************************************************************************************************/


/*
	Start Implemation Fun_Modify_OneRecords():
	1- Accessing Files (ablity to read - write - append) operations by Using External Function fopen 
		fopen allows you to open any file and edit or read or write on this file
		1.1- For Read Operation from File use 'rb' Parameter at Function fopen 
		1.2- For Write/Over Write Operation at File use 'wb+' Parameter at Function fopen
		1.3- For Write/Append Operation at File Add New line for example use 'ab+' Parameter at Function fopen
	2- Using FILE Function to Define ptr Database_File as Variable.
	3- Asking User to Enter his Phone Number 
		3.1- Check on his Phone Number if Exist/Found or No 
	4- Once Find Phone Number will be Give him ability to Change his Data from Database file then Update Database File with New Data
*/

void Fun_Modify_OneRecords()
{
	FILE *Database_File;										// Use Function Files to Define file of Database to be able doing Read-Write-Append functions on File.
	u8 Input_phonenumber[20];									// Define Array of Char Type For User Input as Unsigned Char Data Type.
	u32 size=sizeof(New_Subscriber);							// Define 'size' variable From Unsigned Long Int Number and Assign Value Size of Struct to 'size' Variable
	if((Database_File=fopen("Database/file.ojs","rb+"))==NULL)	// Check on Database_File is Found or No, If No: Back to Home Page.
		exit(0);												// Back to Home Page.
	system("cls");												// Clear Window.
	printf("Please Enter Phone Number of the Subscriber to be Modify Data: ");	// Print out Information for User Interface Asking him to Enter Phone Number for Modify Process.
	scanf("%[^\n]",Input_phonenumber);							// Get From User Input 'Phone Number' and Assign it into Input_phonenumber Array of Char Type.
	fflush(stdin);												// Functin fflush used to clear the stream/buffer. 
	while(fread(&New_Subscriber,sizeof(New_Subscriber),1,Database_File)==1) 	// Check and looping on Database File to Fatch Data from Database.
	{
		if(strcmp(New_Subscriber.PhoneNumber,Input_phonenumber)==0)	// If New_Subscriber.PhoneNumber is the same User Input Phone Number that Find at Database.
		{
			system("cls");										// Clear Window.
			printf("\n Please Enter Phone Number: ");			// Print out Information for User Interface Asking him to Enter Phone Number.
			scanf("%s",&New_Subscriber.PhoneNumber);			// Get From User Input 'PhoneNumber' and Assign it into Structure 'New_Subscriber'.
			printf("\n Please Enter Name: ");					// Print out Information for User Interface Asking him to Enter Name.
			fflush(stdin);										// Functin fflush used to clear the stream/buffer. 
			scanf("%[^\n]",&New_Subscriber.Name);				// Get From User Input 'Name' and Assign it into Structure 'New_Subscriber'.
			printf("\n Please Enter Amount of Payment: ");		// Print out Information for User Interface Asking him to Enter Amount for Payment.
			scanf("%f",&New_Subscriber.Amount_Paid);			// Get From User Input 'Amount_Paid' and Assign it into Structure 'New_Subscriber'.
			fseek(Database_File,-size,SEEK_CUR);				// Function that Used to move or change the position of the file pointer which is being used to read the file, to a specified offset position.
			fwrite(&New_Subscriber,sizeof(New_Subscriber),1,Database_File);		// Use Function fwrite to Add these Input Data as 'struct' to File 'Database'
			break;												// Break While Loop.
		}
	}
	fclose(Database_File);										// Close Database_File File by Function fclose.
}
// End 'Fun_Modify_OneRecords' Function.