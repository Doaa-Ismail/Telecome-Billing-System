/**************************************************************************************************************************/
/*** File Responsible to Define and Assign Data of User                                                                 ***/
/*** Create Stucture for User Data With Phone Number and Name User and Amount to Paid:                                  ***/
/*** 1- Define/Init Array for Char Type for Phone Number as Input form User									            ***/
/*** 2- Define/Init Array for Char Type for Name as Input form User		     			                                ***/
/*** 3- Define/Init Float Number Type for Amount of Payment as Input form User				                            ***/
/**************************************************************************************************************************/

/**************************************************************************************************************************/


#ifndef DATA_REG_H_
#define DATA_REG_H_

// Define Structure and Declaration it to Subscriber With User Information : Phone Number, Name and Amount of payment.
struct Subscriber
{
	u8 PhoneNumber[20];		// Define Array From Char Type for 'PhoneNumber' as Unsigned Char Data Type.
	u8 Name[50];			// Define Array From Char Type for 'Name' as Unsigned Char Data Type.
	f32 Amount_Paid;		// Define 'Amount_Paid' variable as float Number Data Type.
}New_Subscriber;			// Create Structure Tag. 

#endif /* DATA_REG_H_ */
