/**********************************************************************************************************************************************/
/*** Files Responsible to Implematation Function that Will Used in Application                                                        		***/
/**********************************************************************************************************************************************/
/*** Implematation Fun_Payment_MountRecord() that Responsible Payment - Update Credit of User at Database File.					    		***/
/*** With User Information : Name, Phone Number and Amount of payment. 																		***/
/*** That Asking User to Enter His Phone Number to Search it at Database File  																***/
/*** Then Give Ability to Fill Update - New Data to be Paid from His Credit Than Saved Updated Value at Database File						***/
/**********************************************************************************************************************************************/


/*
	Start Implemation Fun_Payment_MountRecord():
	1- Accessing Files (ablity to read - write - append) operations by Using External Function fopen 
		fopen allows you to open any file and edit or read or write on this file
		1.1- For Read Operation from File use 'rb' Parameter at Function fopen 
		1.2- For Write/Over Write Operation at File use 'wb+' Parameter at Function fopen
		1.3- For Write/Append Operation at File Add New line for example use 'ab+' Parameter at Function fopen
	2- Using FILE Function to Define ptr Database_File as Variable.
	3- Asking User to Enter his Phone Number 
		3.1- Check on his Phone Number if Exist/Found or No 
	4- Once Find Phone Number will be Give him ability to Paid Amount From his Credit Data.
		4.1- Then Update Database File with New Credit Data.
*/

void Fun_Payment_MountRecord()
{
	FILE *Database_File;											// Use Function Files to Define file of Database to be able doing Read-Write-Append functions on File.
	u8 Input_phonenumber[20];										// Define Array of Char Type For User Input as Unsigned Char Data Type.
	u32 size=sizeof(New_Subscriber);								// Define 'size' variable From Unsigned Long Int Number and Assign Value Size of Struct to 'size' Variable
	f32 Input_AmountPayment;										// Define 'Input_AmountPayment' variable For User Input as float Number Data Type.
	u16 i;															// Define iteration Variable 'i' with type Usigned Short Int. 
	if((Database_File=fopen("Database/file.ojs","rb+"))==NULL)		// Check on Database_File is Found or No, If No: Back to Home Page.
		exit(0);													// Back to Home Page.
	system("cls");													// Clear Window.
	printf("Please Enter Phone Number of the Subscriber for Payment Process: "); // Print out Information for User Interface Asking him to Enter Phone Number for Payment Process.	
	scanf("%[^\n]",Input_phonenumber);								// Get From User Input 'Phone Number' and Assign it into Input_phonenumber Array of Char Type.
	fflush(stdin);													// Functin fflush used to clear the stream/buffer. 
	while(fread(&New_Subscriber,sizeof(New_Subscriber),1,Database_File)==1)		// Check and looping on Database File to Fatch Data from Database.
	{
		if(strcmp(New_Subscriber.PhoneNumber,Input_phonenumber)==0)	// If New_Subscriber.PhoneNumber is the same User Input Phone Number that Find at Database.
		{
			system("cls");											// Clear Window.
			printf("\n Phone No.: %s",New_Subscriber.PhoneNumber);	// Print out Information for User Interface that Display his Phone Number.
			printf("\n Name: %s",New_Subscriber.Name);				// Print out Information for User Interface that Display his Name.
			printf("\n Current Amount/Credit: %f",New_Subscriber.Amount_Paid);	// Print out Information for User Interface that Display his Current Credit.
			printf("\n");											// Print out New Line.
			for(i=0;i<79;i++)										// Create Loop Start from 0 to 79.
				printf("-");										// Print out (-) Symbol as line. 
			printf("\n\nPlease Enter amount of Payment : ");		// Print out Information for User Interface Asking him to Enter his Credit that want to paid.
			fflush(stdin);											// Functin fflush used to clear the stream/buffer. 
			scanf(" %f",&Input_AmountPayment);						// Get From User Input Amount to be Paid and Assign it into 'Input_AmountPayment' Vatiable.
			New_Subscriber.Amount_Paid=New_Subscriber.Amount_Paid - Input_AmountPayment; // Calculate Different Between New Value of Credit and Old Value of Credit. (After-before)Payment Process.
			fseek(Database_File,-size,SEEK_CUR);					// Function that Used to move or change the position of the file pointer which is being used to read the file, to a specified offset position.
			fwrite(&New_Subscriber,sizeof(New_Subscriber),1,Database_File);		// Use Function fwrite to Add these Input Data as 'struct' to File 'Database'
			break;													// Break While Loop.
		}
	}
	system("cls");													// Clear Window.
	printf("THANK YOU %s FOR YOUR TIMELY PAYMENTS",New_Subscriber.Name);	// Print out Information for User Interface that Finish Payment Process.
	getch();														// Function Used to pauses the Output Console until a key is pressed.
	fclose(Database_File);											// Close Database_File File by Function fclose.
}
// End 'Fun_Payment_MountRecord' Function.