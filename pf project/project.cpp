#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int total_cus =1000;
    int index = 5;
    string custName[total_cus] = {"bilal", "hamza", "zara", "usman", "hira"};
    int custAge[total_cus] = {18, 22, 20, 25, 19};
    int pcNumber[total_cus] = {3, 7, 2, 5, 1};
    float hoursPlayed[total_cus] = {2.5, 1.0, 3.0, 4.0, 2.0};
    float amountPaid[total_cus] = {500, 200, 600, 800, 400};
    string gameType[total_cus] = {"pc", "ps5", "vr", "pc", "ps5"};

    while (true)
    {
        //main header of gcm
        system("cls");
        cout << "|----------------------------------|" << endl;
        cout << "|-- Gaming Cafe Management System--|" << endl;
        cout << "|----------------------------------|" << endl;
        cout << endl;
        cout<<"User menu"<<endl;
        cout << "1 Admin" << endl;
        cout << "2 Customer" << endl;
        cout << "3 to Exit" << endl;
        cout << "choose option : ";
        string userOption;
        cin >> userOption;
        cout<<"You choose" <<userOption<<endl;

        if (userOption == "1")
        {
            //admin code
            int countattemp = 0;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin menu :Login Attempt " << i + 1 << endl;
                cout << "Enter username : ";
                string username;
                cin >> username;
                cout << "Enter password : ";
                string pass;
                cin >> pass;

                if (username == "admin" && pass == "cafe123")
                {
                    cout << "Logined successfully!" << endl;
                    while (true)
                    {
                        system("cls");
                        cout << "1 Show all customers" << endl;
                        cout << "2 Search customer" << endl;
                        cout << "3 Update customer record" << endl;
                        cout << "4 Top spender list" << endl;
                        cout << "5 Delete customer record" << endl;
                        cout << "6 Logout" << endl;
                        cout << "Choose the option : ";
                        string adminoption;
                        cin >> adminoption;

                        if (adminoption == "1")
                        {
                            cout << "Name\tAge\tPC No\tHours\tAmount\tGame" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (custName[i] != "")
                                {
                                    cout << custName[i] << "\t" << custAge[i] << "\t" << pcNumber[i] << "\t" << hoursPlayed[i] << "\t" << amountPaid[i] << "\t" << gameType[i] << endl;
                                }
                            }
                        }
                        else if (adminoption == "2")
                        //find customer by name
                        {
                            cout << "Enter name you want to search : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (custName[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Customer not found" << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tPC No\tHours\tAmount\tGame" << endl;
                                cout << custName[foundindex] << "\t" << custAge[foundindex] << "\t" << pcNumber[foundindex] << "\t" << hoursPlayed[foundindex] << "\t" << amountPaid[foundindex] << "\t" << gameType[foundindex] << endl;
                            }
                        }
                        else if (adminoption == "3")
                        // update record
                        {
                            cout << "Enter name to update : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (custName[i] == name)
                                {
                                    found = true;
                                    foundindex = i;
                                }
                            }
                            if (found == true)
                            {
                                cout << "Enter new name : ";
                                string name;
                                cin >> name;
                                cout << "Enter new age : ";
                                int age;
                                cin >> age;
                                cout << "Enter new PC number : ";
                                int pc;
                                cin >> pc;
                                cout << "Enter hours played : ";
                                float hours;
                                cin >> hours;
                                cout << "Enter amount paid : ";
                                float amount;
                                cin >> amount;
                                cout << "Enter game type (pc/ps5/vr) : ";
                                string game;
                                cin >> game;

                                custName[foundindex] = name;
                                custAge[foundindex] = age;
                                pcNumber[foundindex] = pc;
                                hoursPlayed[foundindex] = hours;
                                amountPaid[foundindex] = amount;
                                gameType[foundindex] = game;
                                cout << "Record updated" << endl;
                            }
                            else
                            {
                                cout << "Record not found!" << endl;
                            }
                        }
                        else if (adminoption == "4")
                        {
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (amountPaid[i] < amountPaid[j])
                                    {
                                        //swapping of name
                                        string tempName = custName[i];
                                        custName[i] = custName[j];
                                        custName[j] = tempName;
                                        //swapping of age

                                        int tempAge = custAge[i];
                                        custAge[i] = custAge[j];
                                        custAge[j] = tempAge;
                                        //swapping of gametype

                                        int tempPc = pcNumber[i];
                                        pcNumber[i] = pcNumber[j];
                                        pcNumber[j] = tempPc;
                                        //swapping of time

                                        float tempHours = hoursPlayed[i];
                                        hoursPlayed[i] = hoursPlayed[j];
                                        hoursPlayed[j] = tempHours;
                                        //swapping of amount

                                        float tempAmount = amountPaid[i];
                                        amountPaid[i] = amountPaid[j];
                                        amountPaid[j] = tempAmount;
                                        //swapping of type

                                        string tempGame = gameType[i];
                                        gameType[i] = gameType[j];
                                        gameType[j] = tempGame;
                                    }
                                }
                            }
                            cout << "Name\tAmount Paid" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (custName[i] != "")
                                {
                                    cout << custName[i] << "\t" << amountPaid[i] << endl;
                                }
                            }
                        }
                        else if (adminoption == "5")
                        {
                            //delete record
                            cout << "Enter the name you want to delete : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (custName[i] == name)
                                {
                                    
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                custName[foundindex] = "";
                                custAge[foundindex] = 0;
                                pcNumber[foundindex] = 0;
                                hoursPlayed[foundindex] = 0;
                                amountPaid[foundindex] = 0;
                                gameType[foundindex] = "";
                                cout << "Record of" << name<<"deleted"<< endl;
                            }
                            else
                            {
                                cout << "record not found" << endl;
                            }
                        }
                        else if (adminoption== "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected" << endl;
                        }
                        cout << "Press any key to continue...";
                        getch();
                    }
                    break;
                }
                else
                {
                    cout << "Password or Username is invalid" << endl;
                }
                cout << "Press any key to continue...";
                getch();
            }
        }
        else if (userOption == "2")
        {
            //write here the customer record
            system("cls");
            cout << "Welcome to gms customer menu" << endl;
            cout << "Enter your name : "<<endl;
            string name;
            cin >> name;
            cout << "Enter your age : "<<endl;
            int age;
            cin >> age;
            cout << "Enter PC number you want : "<<endl;
            int pc;
            cin >> pc;
            cin.ignore();//
            cout << "Enter hours you want to play : "<<endl;
            float hours;
            cin >> hours;
            cout << "Enter amount you are paying : "<<endl;
            float amount;
            cin >> amount;
            cout << "Enter game type (pc/ps5/vr) : "<<endl;;
            string game;
            cin >> game;

            custName[index] = name;
            custAge[index] = age;
            pcNumber[index] = pc;
            hoursPlayed[index] = hours;
            amountPaid[index] = amount;
            gameType[index] = game;
            index = index + 1;

            cout << "Your data has been saved" << endl;
            cout << "Press any key to continue...";
            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "Wrong entered wrong option" << endl;
        }
    } //end of our main while loop

    cout << endl
         << "Thanks for using this software";
}