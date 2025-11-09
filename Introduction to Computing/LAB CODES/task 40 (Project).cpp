#include<iostream>
using namespace std;
int main()
{

	// Arrays Partially Initialized with 50 Values.

	int Option;
	int NextStudent = 51;
	int RollNumber[100] = { 835, 322, 413, 655, 746, 90, 36, 78, 58, 23, 277, 394, 878, 144, 426, 931, 36, 701, 438, 870, 18, 622, 620, 317, 644, 205, 224, 148, 5, 521, 820, 933, 618, 203, 896, 503, 498, 773, 444, 45, 688, 697, 701, 384, 977, 330, 613, 244, 499, 500 };
	float MidTermMarks[100] = { 21, 22, 23, 24, 25, 50, 27, 28, 29, 30, 5, 35, 45, 8, 5, 11, 18, 30, 44, 9, 8, 12, 15, 19, 20, 25, 30, 35, 30, 0, 50, 44, 38, 10, 15, 41.5, 30.5, 15.3, 20.5, 5.5, 40.8, 49.5, 33, 20.9, 50, 40, 0, 32, 38, 11 };
	float FinalTermMarks[100] = { 72, 82, 23, 34, 25, 100, 27, 79, 69, 30, 5, 35, 45, 80.5, 50.6, 68.5, 68.8, 30, 44, 69.5, 80, 92, 15, 19, 20, 25, 30, 79, 69, 60, 87, 69, 38, 99, 60.6, 88.5, 77.5, 60.3, 29.5, 50.5, 40.8, 60.6, 33.8, 20.9, 50.5, 80, 0, 90, 60, 50 };
	int Class[100] = { 1, 5, 4, 6, 3, 8, 7, 9, 10, 2, 5, 4, 6, 3, 8, 7, 9, 10, 2, 1, 5, 4, 6, 3, 8, 7, 9, 10, 2, 1, 5, 4, 6, 3, 8, 7, 9, 10, 2, 1, 5, 4, 6, 3, 8, 7, 9, 10, 2 };




	char Grade[100];

	// Calculating... Grades based on Final Term Marks. //

	for (int i = 0; i < 100; i++)
	{
		if (FinalTermMarks[i] < 50) {
			Grade[i] = 'F';
		}
		else if (FinalTermMarks[i] <= 59) {
			Grade[i] = 'D';
		}
		else if (FinalTermMarks[i] <= 72) {
			Grade[i] = 'C';
		}
		else if (FinalTermMarks[i] <= 85) {
			Grade[i] = 'B';
		}
		else if (FinalTermMarks[i] <= 100) {
			Grade[i] = 'A';
		}
	}


	do {
		system("cls");
		cout << "________________________________________________________ LAB PROJECT ________________________________________________________" << endl;

		cout << "\n[ Sort By: ] \n";
		cout << "---------------------------------\n";
		cout << "1. Roll Number (Lowest)\n";
		cout << "2. Roll Number (Highest)\n";
		cout << "3. Mid Term (Lowest)\n";
		cout << "4. Mid Term (Highest)\n";
		cout << "5. Final Term (Lowest)\n";
		cout << "6. Final Term (Highest)\n";
		cout << "7. Grades (Lowest)\n";
		cout << "8. Grades (Highest)\n";
		cout << "---------------------------------\n";
		cout << "9.  Add New Student \n";
		cout << "10. Delete a Student Student Record on the Bases of Roll Number\n";
		cout << "---------------------------------\n\n";

		cout << "[ Display Record of all Students: ]\n";
		cout << "---------------------------------\n";
		cout << "11. Greater than X Marks in Final(Ascending order)\n";
		cout << "12. Greater than X Marks in Final(Decending order)\n";
		cout << "13. Less than X Marks in Final(Ascending order)\n";
		cout << "14. Less than X Marks in Final(Decending order)\n";
		cout << "15. Greater than X Grade(Ascending order)\n";
		cout << "16. Greater than X Grade(Decending order)\n";
		cout << "17. Less than X Grade(Ascending order)\n";
		cout << "18. Less than X Grade(Decending order)\n";
		cout << "0.  Exit\n\n";
		cout << "=> Enter Your Option : ";
		cin >> Option;
		cout << "\n";

		// Variables decalred. //
		float Marks;
		bool a = 1;
		int i, j, temp;
		char grade;


		// -------- MENU ---------- //

// 1)
		if (Option == 1) {
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (RollNumber[j] < RollNumber[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];                                        // ->  Prints " RollNumber in Ascending Order "
						Grade[j] = grade;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\t\tRoll Number \t";
			cout << "\t\tMid Term \t";
			cout << "\t\tFinal Term \t";
			cout << "\t\tClass \t";
			cout << "\t\tGrade \n";
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";

			for (i = 0; i < NextStudent - 1; i++) {
				cout << "\t\t" << RollNumber[i] << "\t\t  ";
				cout << "\t\t" << MidTermMarks[i] << "\t\t ";
				cout << "\t\t" << FinalTermMarks[i] << "\t\t  ";
				cout << "\t\t" << Class[i] << "\t\t";
				cout << "\t" << Grade[i] << "\n";
			}
		}


		// 2)
		else if (Option == 2) {
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent; j++) {
					if (RollNumber[j] > RollNumber[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\t\tRoll Number \t";
			cout << "\t\tMid Term \t";
			cout << "\t\tFinal Term \t";
			cout << "\t\tClass \t";
			cout << "\t\tGrade \n";
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";

			for (i = 0; i < NextStudent - 1; i++) {
				cout << "\t\t" << RollNumber[i] << "\t\t  ";
				cout << "\t\t" << MidTermMarks[i] << "\t\t ";
				cout << "\t\t" << FinalTermMarks[i] << "\t\t  ";
				cout << "\t\t" << Class[i] << "\t\t";
				cout << "\t" << Grade[i] << "\n";
			}
		}

		// 3)
		else if (Option == 3) {
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (MidTermMarks[j] < MidTermMarks[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\t\tRoll Number \t";
			cout << "\t\tMid Term \t";
			cout << "\t\tFinal Term \t";
			cout << "\t\tClass \t";
			cout << "\t\tGrade \n";
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";

			for (i = 0; i < NextStudent - 1; i++) {
				cout << "\t\t" << RollNumber[i] << "\t\t  ";
				cout << "\t\t" << MidTermMarks[i] << "\t\t ";
				cout << "\t\t" << FinalTermMarks[i] << "\t\t  ";
				cout << "\t\t" << Class[i] << "\t\t";
				cout << "\t" << Grade[i] << "\n";
			}
		}

		// 4)
		else if (Option == 4) {
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (MidTermMarks[j] > MidTermMarks[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\t\tRoll Number \t";
			cout << "\t\tMid Term \t";
			cout << "\t\tFinal Term \t";
			cout << "\t\tClass \t";
			cout << "\t\tGrade \n";
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";

			for (i = 0; i < NextStudent - 1; i++) {
				cout << "\t\t" << RollNumber[i] << "\t\t  ";
				cout << "\t\t" << MidTermMarks[i] << "\t\t ";
				cout << "\t\t" << FinalTermMarks[i] << "\t\t  ";
				cout << "\t\t" << Class[i] << "\t\t";
				cout << "\t" << Grade[i] << "\n";
			}
		}

		// 5)
		else if (Option == 5) {
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (FinalTermMarks[j] < FinalTermMarks[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\t\tRoll Number \t";
			cout << "\t\tMid Term \t";
			cout << "\t\tFinal Term \t";
			cout << "\t\tClass \t";
			cout << "\t\tGrade \n";
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";

			for (i = 0; i < NextStudent - 1; i++) {
				cout << "\t\t" << RollNumber[i] << "\t\t  ";
				cout << "\t\t" << MidTermMarks[i] << "\t\t ";
				cout << "\t\t" << FinalTermMarks[i] << "\t\t  ";
				cout << "\t\t" << Class[i] << "\t\t";
				cout << "\t" << Grade[i] << "\n";
			}
		}

		// 6)		
		else if (Option == 6) {
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (FinalTermMarks[j] > FinalTermMarks[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\t\tRoll Number \t";
			cout << "\t\tMid Term \t";
			cout << "\t\tFinal Term \t";
			cout << "\t\tClass \t";
			cout << "\t\tGrade \n";
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";

			for (i = 0; i < NextStudent - 1; i++) {
				cout << "\t\t" << RollNumber[i] << "\t\t  ";
				cout << "\t\t" << MidTermMarks[i] << "\t\t ";
				cout << "\t\t" << FinalTermMarks[i] << "\t\t  ";
				cout << "\t\t" << Class[i] << "\t\t";
				cout << "\t" << Grade[i] << "\n";
			}
		}

		// 7)		
		else if (Option == 7) {
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (Grade[j] > Grade[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\t\tRoll Number \t";
			cout << "\t\tMid Term \t";
			cout << "\t\tFinal Term \t";
			cout << "\t\tClass \t";
			cout << "\t\tGrade \n";
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";

			for (i = 0; i < NextStudent - 1; i++) {
				cout << "\t\t" << RollNumber[i] << "\t\t  ";
				cout << "\t\t" << MidTermMarks[i] << "\t\t ";
				cout << "\t\t" << FinalTermMarks[i] << "\t\t  ";
				cout << "\t\t" << Class[i] << "\t\t";
				cout << "\t" << Grade[i] << "\n";
			}
		}

		//8) 		
		else if (Option == 8) {
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (Grade[j] < Grade[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";
			cout << "\t\tRoll Number \t";
			cout << "\t\tMid Term \t";
			cout << "\t\tFinal Term \t";
			cout << "\t\tClass \t";
			cout << "\t\tGrade \n";
			cout << "\t\t-----------------------------------------------------------------------------------------------------------------------------\n";

			for (i = 0; i < NextStudent - 1; i++) {
				cout << "\t\t" << RollNumber[i] << "\t\t  ";
				cout << "\t\t" << MidTermMarks[i] << "\t\t ";
				cout << "\t\t" << FinalTermMarks[i] << "\t\t  ";
				cout << "\t\t" << Class[i] << "\t\t";
				cout << "\t" << Grade[i] << "\n";
			}
		}

		// 9)		
		else if (Option == 9) {
			do {
				if ((NextStudent - 1) > 100) {
					cout << "You can't add record any more because students be 100";
				}
				else {
					cout << "Enter Roll Number : ";
					cin >> temp;
					for (i = 0; i < NextStudent - 1 && a == 1; i++) {
						if (RollNumber[i] == temp) {
							cout << "This Student Record already Exist! \n";
							a = 0;
						}
					}
					if (a)
					{
						RollNumber[NextStudent - 1] = temp;
						cout << "Enter Class : ";
						cin >> Class[NextStudent - 1];
						cout << "Enter Mid Term Marks : ";
						cin >> MidTermMarks[NextStudent - 1];
						cout << "Enter Final Term Marks : ";
						cin >> FinalTermMarks[NextStudent - 1];
						if (FinalTermMarks[NextStudent - 1] < 50) {
							Grade[NextStudent - 1] = 'F';
						}
						else if (FinalTermMarks[NextStudent - 1] <= 59) {
							Grade[NextStudent - 1] = 'D';
						}
						else if (FinalTermMarks[NextStudent - 1] <= 72) {
							Grade[NextStudent - 1] = 'C';
						}
						else if (FinalTermMarks[NextStudent - 1] <= 85) {
							Grade[NextStudent - 1] = 'B';
						}
						else if (FinalTermMarks[NextStudent - 1] <= 100) {
							Grade[NextStudent - 1] = 'A';
						}
						cout << "\n\n---------- Record Successfully Added. ----------\n\n";
						++NextStudent;
					}
					cout << "Do you want to Enter more Record ? \t (1.Yes/ 0.No):  ";
					cin >> Option;
				}
			} while (Option);
		}

		// 10)
		else if (Option == 10)
		{
			cout << "Enter Roll Number To Delete Record : ";
			cin >> temp;
			for (i = 0; i < NextStudent - 1; i++) {
				if (RollNumber[i] == temp) {
					for (j = i; j < NextStudent - 1; j++) {
						RollNumber[j] = RollNumber[j + 1];
						Class[j] = Class[j + 1];
						MidTermMarks[j] = MidTermMarks[j + 1];
						FinalTermMarks[j] = FinalTermMarks[j + 1];
						Grade[j] = Grade[j + 1];
					}
					a = 1;
				}
			}
			--NextStudent;
			if (a) {
				cout << "\n\n---------- Record SuccessFully Deleted. ----------\n";
			}
			else {
				cout << "This Record is Not Found.......\n";
			}
		}

		// 11)
		else if (Option == 11)
		{
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (FinalTermMarks[j] < FinalTermMarks[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "(Ascending) Final Term Marks greater than: ";
			cin >> Marks;
			cout << "Roll Number\t";
			cout << "Class\t";
			cout << "Grade\t";
			cout << "Mid Marks\t";
			cout << "Final Marks\n";

			for (i = 0; i < NextStudent - 1; i++) {
				if (FinalTermMarks[i] > Marks) {
					cout << RollNumber[i] << "\t\t  ";
					cout << Class[i] << "\t  ";
					cout << Grade[i] << "\t  ";
					cout << MidTermMarks[i] << "\t\t   ";
					cout << FinalTermMarks[i] << "\n";
				}
			}
		}

		// 12)
		else if (Option == 12)
		{
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (FinalTermMarks[j] > FinalTermMarks[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "(Descending) Final Term Marks greater than: ";
			cin >> Marks;
			cout << "Roll Number\t";
			cout << "Class\t";
			cout << "Grade\t";
			cout << "Mid Marks\t";
			cout << "Final Marks\n";

			for (i = 0; i < NextStudent - 1; i++) {
				if (FinalTermMarks[i] > Marks) {
					cout << RollNumber[i] << "\t\t  ";
					cout << Class[i] << "\t  ";
					cout << Grade[i] << "\t  ";
					cout << MidTermMarks[i] << "\t\t   ";
					cout << FinalTermMarks[i] << "\n";
				}
			}
		}

		// 13)		
		else if (Option == 13)
		{
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (FinalTermMarks[j] < FinalTermMarks[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "(Ascending) Final Term Marks Less than: ";
			cin >> Marks;
			cout << "Roll Number\t";
			cout << "Class\t";
			cout << "Grade\t";
			cout << "Mid Marks\t";
			cout << "Final Marks\n";

			for (i = 0; i < NextStudent - 1; i++) {
				if (FinalTermMarks[i] < Marks) {
					cout << RollNumber[i] << "\t\t  ";
					cout << Class[i] << "\t  ";
					cout << Grade[i] << "\t  ";
					cout << MidTermMarks[i] << "\t\t   ";
					cout << FinalTermMarks[i] << "\n";
				}
			}
		}

		// 14)		
		else if (Option == 14)
		{
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (FinalTermMarks[j] > FinalTermMarks[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "(Descending) Final Term Marks Less than: ";
			cin >> Marks;
			cout << "Roll Number\t";
			cout << "Class\t";
			cout << "Grade\t";
			cout << "Mid Marks\t";
			cout << "Final Marks\n";

			for (i = 0; i < NextStudent - 1; i++) {
				if (FinalTermMarks[i] < Marks) {
					cout << RollNumber[i] << "\t\t  ";
					cout << Class[i] << "\t  ";
					cout << Grade[i] << "\t  ";
					cout << MidTermMarks[i] << "\t\t   ";
					cout << FinalTermMarks[i] << "\n";
				}
			}
		}

		// 15)		
		else if (Option == 15) {
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (Grade[j] > Grade[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "(Ascending) Grades Greater than: ";
			cin >> grade;
			if (grade >= 'a' && grade <= 'z') {
				grade -= 32;
			}
			cout << "Roll Number\t";
			cout << "Class\t";
			cout << "Grade\t";
			cout << "Mid Marks\t";
			cout << "Final Marks\n";

			for (i = 0; i < NextStudent - 1; i++) {
				if (Grade[i] < grade) {
					cout << RollNumber[i] << "\t\t  ";
					cout << Class[i] << "\t  ";
					cout << Grade[i] << "\t  ";
					cout << MidTermMarks[i] << "\t\t   ";
					cout << FinalTermMarks[i] << "\n";
				}
			}
		}

		// 16)		
		else if (Option == 16) {
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (Grade[j] < Grade[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "(Descending) Grades Greater than: ";
			cin >> grade;
			if (grade >= 'a' && grade <= 'z') {
				grade -= 32;
			}
			cout << "Roll Number\t";
			cout << "Class\t";
			cout << "Grade\t";
			cout << "Mid Marks\t";
			cout << "Final Marks\n";

			for (i = 0; i < NextStudent - 1; i++) {
				if (Grade[i] < grade) {
					cout << RollNumber[i] << "\t\t  ";
					cout << Class[i] << "\t  ";
					cout << Grade[i] << "\t  ";
					cout << MidTermMarks[i] << "\t\t   ";
					cout << FinalTermMarks[i] << "\n";
				}
			}
		}

		// 17)		
		else if (Option == 17) {
			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (Grade[j] > Grade[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "(Ascending) Grades Less than:  ";
			cin >> grade;
			if (grade >= 'a' && grade <= 'z') {
				grade -= 32;
			}
			cout << "Roll Number\t";
			cout << "Class\t";
			cout << "Grade\t";
			cout << "Mid Marks\t";
			cout << "Final Marks\n";

			for (i = 0; i < NextStudent - 1; i++) {
				if (Grade[i] > grade) {
					cout << RollNumber[i] << "\t\t  ";
					cout << Class[i] << "\t  ";
					cout << Grade[i] << "\t  ";
					cout << MidTermMarks[i] << "\t\t   ";
					cout << FinalTermMarks[i] << "\n";
				}
			}
		}

		// 18)
		else if (Option == 18) {

			for (i = 0; i < NextStudent - 1; i++) {
				for (j = i + 1; j < NextStudent - 1; j++) {
					if (Grade[j] < Grade[i]) {
						temp = RollNumber[i];
						RollNumber[i] = RollNumber[j];
						RollNumber[j] = temp;

						temp = Class[i];
						Class[i] = Class[j];
						Class[j] = temp;

						Marks = MidTermMarks[i];
						MidTermMarks[i] = MidTermMarks[j];
						MidTermMarks[j] = Marks;

						Marks = FinalTermMarks[i];
						FinalTermMarks[i] = FinalTermMarks[j];
						FinalTermMarks[j] = Marks;

						grade = Grade[i];
						Grade[i] = Grade[j];
						Grade[j] = grade;
					}
				}
			}
			cout << "(Descending) Grades Less than:  ";
			cin >> grade;
			if (grade >= 'a' && grade <= 'z') {
				grade -= 32;
			}
			cout << "Roll Number\t";
			cout << "Class\t";
			cout << "Grade\t";
			cout << "Mid Marks\t";
			cout << "Final Marks\n";

			for (i = 0; i < NextStudent - 1; i++) {
				if (Grade[i] > grade) {
					cout << RollNumber[i] << "\t\t  ";
					cout << Class[i] << "\t  ";
					cout << Grade[i] << "\t  ";
					cout << MidTermMarks[i] << "\t\t   ";
					cout << FinalTermMarks[i] << "\n";
				}
			}
		}

		// EXIT:
		else if (Option == 0) {
			break;
		}
		system("pause");
	} while (1);
	return 0;
}