#include <iostream>
using namespace std;
int main() 
{
    int choice, subChoice;    
    do 
	{
        cout << "\nMain Menu:\n";
        cout << "1. Breakfast\n";
        cout << "2. Lunch\n";
        cout << "3. Dinner\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) 
		{
            case 1:
                cout << "\nBreakfast Menu:\n";
                cout << "1. Anda Paratha (RS.40)\n";
                cout << "2. Nan Channy (RS.60)\n";
                cout << "3. Siri Paye (RS.150)\n";
                cout << "4. Tea (RS.15)\n";
                cout << "Enter your choice: ";
                cin >> subChoice;
                cout << "Order placed successfully!\n";
                break;
            case 2:
                cout << "\nLunch Menu:\n";
                cout << "1. Chicken Karahi (RS.1050/KG)\n";
                cout << "2. Mutton Karahi (RS.1800/KG)\n";
                cout << "3. Egg Fried Rice (RS.450/plate)\n";
                cout << "4. BBQ (RS.1050/dozen)\n";
                cout << "Enter your choice: ";
                cin >> subChoice;
                cout << "Order placed successfully!\n";
                break;
            case 3:
                cout << "\nDinner Menu:\n";
                cout << "1. Chicken Karahi (RS.1050/KG)\n";
                cout << "2. Mutton Karahi (RS.1800/KG)\n";
                cout << "3. Egg Fried Rice (RS.450/plate)\n";
                cout << "4. BBQ (RS.1050/dozen)\n";
                cout << "5. Sajji (RS.800/KG)\n";
                cout << "Enter your choice: ";
                cin >> subChoice;
                cout << "Order placed successfully!\n";
                break;
            case 4:
                cout << "Exiting the program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
	 while (choice != 4);
    return 0;
}
