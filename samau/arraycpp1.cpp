#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int sumArray(int integerArray[], int sizeOfloatArray);
void displayArray(int integerArray[], int sizeOfArray);

int main()
{
    int nAccumulator = 0;
    cout << "eta proframma sum chisla, vvedene polzovatelem\n";
    cout << "cikl preruvanie kogda polzovatel vvodit otricatelnoe chislo";

    int inputValue[128];
    int numberOfValues = 0;
    for (numberOfValues = 0; numberOfValues < 128; numberOfValues++)
    {
        // vvod ocherednogo chisla
        int integerValue;
        cout << "vvedite sledueche chislo ";
        cin >> integerValue;
        // esli ono otricatelnoe
        if (integerValue < 0)
        {
            break;
        }
        inputValue[numberOfValues] = integerValue;
    }

    // teper vvuvodim znachenie i ix summu
    displayArray(inputValue, numberOfValues);
    cout << "summa vvedinux chisel ravna " << sumArray(inputValue, numberOfValues) << endl;
    system("PAUSE");
    return 0;
}

// displayArray -otobrazaet elementu masiva
void displayArray(int integerArray[], int sizeOfArray)
{
    cout << " v massiv xranytca sleduushie znachenia \n";
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout.width(3);
        cout << i << ": " << integerArray[i] << endl;
    }
    cout << endl;
}

// sumArray - vozvrochaet summu elementov celocchislennogo massiva

int sumArray(int integerArray[], int sizeOfArray)
{
    int accumulator = 0;
    for (int i = 0; i < sizeOfArray; i++)
    {
        accumulator += integerArray[i];
    }
    return accumulator;
}