// CGPA Calculator

#include <iostream>
using namespace std;
int main()
{
	cout << "\t  YOU HAVE ONLY FOLLOWING GRADES\n";
	cout << "\t( A  A-  B+  B  C+  C  D+  D  E  )\n";
	int A = 4.0;
	int A_minus = 3.6;
	int B_plus = 3.3;
	int B = 3.0;
	int C_plus = 2.5;
	int C = 2.0;
	int D_plus = 1.5;
	int D = 1.0;
	int E = 0.0;
	string grade;
	float credit, total_credit = 0, time, total_time = 0, option, final_GPA;
	for (;;)
	{
		cout << "\nSubject:\nEnter Grade : "; cin >> grade;
		cout << "Credit Hours: "; cin >> credit;
		if (grade == "a" || grade == "A")
			time = credit*A;
		else if (grade == "a-" || grade == "A-")
			time = credit*A_minus;
		else if (grade == "b+" || grade == "B+")
			time = credit*B_plus;
		else if (grade == "b" || grade == "B")
			time = credit*B;
		else if (grade == "c+" || grade == "C+")
			time = credit*C_plus;
		else if (grade == "c" || grade == "C")
			time = credit*C;
		else if (grade == "d+" || grade == "D+")
			time = credit*D_plus;
		else if (grade == "d" || grade == "D+")
			time = credit*D;
		else if (grade == "e" || grade == "E")
			time = credit*E;
		else
			cout << "INVALID CHOICE... TRY AGAIN!\n";
		total_credit = total_credit + credit;
		total_time = total_time + time;
		cout << "\nDo you want to enter another grade of subject (1 for YES , 2 for NO) : "; cin >> option;
		if (option == 1)
		{
			continue;
		}
		else
		{
			break;
		}
	}
	final_GPA = total_time/total_credit;
	cout << "\t ----> Student's GPA is : " << final_GPA << endl;
	return 0;
}
