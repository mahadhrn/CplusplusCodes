#include "myQueue.h"
int main()
{
	myQueue<int> q(5);
	// Existing Queue
	q.enqueue(15);
	q.enqueue(2);
	q.enqueue(80);

	while (1)
	{
		int select;
		cout << "\n\nSelect : \n1. Insert Value in Queue\n2. Delete Value from Queue\n3. Update Value in Queue\n4. Display All Value in Queue" << endl;
		cin >> select;

		// M E N U
		int value;
		if (select == 1){
			cout << "Enter Value to Insert : "; cin >> value;
			q.enqueue(value);
		}
            else if (select == 2){
			cout << "Deleted Value : " << q.dequeue() << endl;
		}
		else if (select == 3){
			cout << "Enter Value to Update : "; cin >> value;
			q.dequeue();
			q.enqueue(value);
		}
		else if (select == 4){
			cout << endl; q.display();
		}

	}
	return 0;
}

