//Program for Parking Operator

#include<iostream>
using namespace std;

int amount = 0,total = 0, totalVeh = 0, totalCar = 0, totalBike = 0, totalBicycle = 0, carCapacity = 4, bikeCapacity = 3, bicycleCapacity = 4 ;
string exitStatus;
void entryCar()
{
    if(totalCar < carCapacity)
    {
        amount = amount + 15;
        total++;
        totalCar++;
        cout<< "Car parked successfully\n";
    }
    else
        cout<< "Parking for cars is full now!!\n";
}

void entryBike()
{
    if(totalBike < bikeCapacity)
    {
        amount = amount + 10;
        total++;
        totalBike++;
        cout<< "Bike parked successfully\n";
    }
    else
        cout<< "Parking for scooters/bikes is full now!!\n";
}
void entryBicycle()
{
    if(totalBicycle < bicycleCapacity)
    {
        amount = amount + 5;
        total++;
        totalBicycle++;
        cout<< "Bicycle parked successfully\n";
    }
    else
        cout<< "Parking for bicycles is full now!!\n";
}

void exitCar()
{
    if(totalCar>0)   // if vehicle not in parking then how can it be exit.
    {
        total--;
        totalCar--;
        cout<< "Car exit successfully\n";
    }
    else cout<< "No Car is Parked..\n";
}
void exitBike()
{
    if(totalBike>0)
    {
        total--;
        totalBike--;
        cout<< "Bike exit successfully\n";
    }
    else cout<< "No Scooter/Bike is Parked..\n";
}
void exitBicycle()
{
    if(totalBicycle>0)
    {
        total--;
        totalBicycle--;
        cout<< "Bicycle exit successfully\n";
    }
    else cout<< "No Bicycle is Parked..\n";
}


int main(void)
{
    int vehicle=5;
    while( true )
    {
        system("cls");
        cout<< "\n\t\t\t~~~~~~~~~~ Welcome To PARKING MANAGEMENT SYSTEM ~~~~~~~~~~";
        cout<< "\n\n Rates for the vehicles are given below: \n\n Car -> 15/- \n Scooter/Bike -> 10/- \n Bicycle -> 5/-";
        cout<< " \n\n\t\t---- Select which type of Vehicle do you want to park ----- \n\n";
        cout<< " 1.) Car \n 2.) Bike/Scooter \n 3.) Bicycle \n\t\t\t\t OR ";
        cout<< " \n\n\t\t----Select which type of Vehicle do you want to exit ----- \n\n";
        cout<< " 4.) Car \n 5.) Bike/Scooter \n 6.) Bicycle \n\t\t\t\t OR \n\n";
        cout<<"\t\t---- Select option for Data Information ----\n\n  7.) Total Cars \n  8.) Total Bikes/Scooter \n  9.) Total Bicycles \n 10.) Total Vehicles \n 11.) Total Collection \n 12.) Exit \n\n";
        cout<<"Select Option: ";
flag1:
        cin>> vehicle;
        if(vehicle >= 7 && vehicle < 12)
        {
            string Password;
pass1:
            cout<< " To know these Details , Enter Password : ";
            cin.sync();
            getline(cin, Password);
            if(Password != "Madhav")
            {
                cout<< "ERROR!! Wrong Password\n";
                goto pass1;
            }
        }
        switch(vehicle)
        {
        case 1:
            entryCar();
            break;
        case 2:
            entryBike();
            break;
        case 3:
            entryBicycle();
            break;
        case 4:
            exitCar();
            break;
        case 5:
            exitBike();
            break;
        case 6:
            exitBicycle();
            break;
        case 7:
            cout<< "Total Cars in Parking are : "<<totalCar<<endl;
            break;
        case 8:
            cout<< "Total Scooters/Bikes in Parking are : "<<totalBike<<endl;
            break;
        case 9:
            cout<< "Total Bicycles in Parking are : "<<totalBicycle<<endl;
            break;
        case 10:
            cout<< "Total Vehicles in Parking are : "<<total<<endl;
            break;
        case 11:
            cout<< "Total amount collected from Vehicles is : "<<amount<<endl;
            break;
        case 12:
            cout<< "Are you sure want to Exit!! .Press y/n: ";
            cin>> exitStatus;
            if(exitStatus == "y")
            exit(0);
            else
                continue;
        default :
            cout<< "Wrong Choice... Try again";
            goto flag1;
            break;
        }
        system("pause");
    }
    return 0;
}
