 #include <stdio.h>
 
 int main (void)
 {
 	int accNo, nic, searchAcc, tBal;
 	float bal, totBal = 0, finalTotBal = 0;
 	char name[10], tType;
 	int i, j;
 	
 	//open  and write account file and get and store user inputs
 	FILE * cfPtr;
 	
 	cfPtr = fopen ("account.txt", "a");
	if (cfPtr == NULL)
 	{
 		printf ("The account file is not found.");
		return -1 ;	
	}
 	
 	for (i = 0; i < 4; i++)
 	{
 		printf ("Enter the Account no : ");
		scanf ("%d", &accNo);
		printf ("Enter the NIC no : ");
		scanf ("%d", &nic);
		printf("Enter the Name : ");
		scanf ("%s", name);
		printf ("Enter the account Balance : ");
		scanf ("%f", &bal);
		
		fprintf (cfPtr,"%d\t\t%d\t\t%s\t\t%.2f\n", accNo, nic, name, bal);
		
		printf ("\n");
	}	

	fclose (cfPtr);
	//stop write in the account file 	
		
	printf ("------------------------------\n");	
	//store what account user need	
	printf ("What is your account number : ");
	scanf ("%d", &searchAcc);
	

	
	//open and read account file and transaction file
	cfPtr = fopen ("account.txt", "r");
	if (cfPtr == NULL)
	{
		printf ("The account file is not found.\n");
		return -1;
	}
	
	FILE * fp;
	
	fp = fopen ("transaction.txt", "r");
	if (fp == NULL)
	{
		printf ("The transaction file is not found.\n");
		return -1;
	}
	
	
	
	while (!feof (cfPtr))
	{
		fscanf (cfPtr, "%d %d %s %f", &accNo, &nic, name, &bal);

		if (accNo == searchAcc)
		{
			while (!feof (fp))
			{
				fscanf (fp, " %c %d", &tType, &tBal);
				
				if (tType == 'D')
				{
					bal = bal + tBal;
				}
				else if (tType == 'W')
				{
					bal = bal - tBal;		
				}
				else
				{
					printf ("The trasaction file error! type is not match with D and W.\n");
					return -1;
				}	
			}
			
			break;		
		}
	}
	fclose(fp);
	fclose (cfPtr);
	
	if (accNo != searchAcc)
	{
		printf ("The search account number is not in the account file.\n");
		return -1;
	}
	//stop read account and transaction file
	
	//final output
	printf ("\nAccount holder name : %s\nYou new account Balance is : %.2f", name, bal);
	
 	return 0;
 }
