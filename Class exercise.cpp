// Class exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Yo it's me Issa

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

//declaration of constants
int array[];
const int ROWS = 3;
const int COLS = 4;
//function prototypes
void getValues(int populateArray[][4], int rows, int cols);
void display(int populateArray[][4], int rows, int cols);
void calcAvgRow(int populateArray[][4], int rows, int cols, int aveRow[]);
void findHighRow(int populateArray[][4], int rows, int cols, int highRow[]);
void countOdds(int populateArray[][4], int rows, int cols, int odds[]);
void calcSumEven(int populateArray[][4], int rows, int cols, int evens[]);
bool checkEven(int num);
bool determineOdd(int num);

//Creating a procedural C++ program that will perform various transactions on a two-dimensional array. These transactions are performed by non-member functions
int main()
{
    //declaration of variables
    int values[ROWS][COLS];
    int value = 0;
    int array[ROWS];
    int arrays[COLS];

    cout << setprecision(2) << endl;
    //call functions
    getValues(values, ROWS, COLS);
    display(values, ROWS, COLS);
    calcAvgRow(values, ROWS, COLS, array);
    findHighRow(values, ROWS, COLS, array);
    countOdds(values, ROWS, COLS, array);
    calcSumEven(values, ROWS, COLS, array);
    checkEven(value);
    determineOdd(value);

    _getch();
    return 0;
}

//first function
void getValues(int populateArray[][4], int rows, int cols)
{
    //introduction of nested for-loop
    for (int q = 0;q < rows;q++)
    {
        //introduction of inner loop
        for (int k = 0;k < cols;k++)
        {
        //allow user to enter values
            cout << "Enter values for[" << q << "][" << k << "] ";
            cin >> populateArray[q][k];
        }
    }
}
//second function
void display(int populateArray[][4], int rows, int cols)
{
    //display using nested for-loops
    for (int q = 0;q < rows;q++)
    {
        for (int k = 0;k < cols;k++)
        {
            cout << populateArray[q][k] <<""<<"\t";
        }
        cout << endl;
    }
}
//third function
void calcAvgRow(int populateArray[][4], int rows, int cols, int aveRow[])
{
    //introduction of nested for-loop
    for (int q = 0;q < rows;q++)
    {
        //declaration of variables
        int total = 0;
        double average = 0.0;
        int count = 0;
        //introduction of inner loop
        for (int k = 0;k < cols;k++)
        {
            //calculation of total and average
            total = total+ populateArray[q][k];
            count++;
            average = total /count;
            aveRow[q] = count;

        }
        //display average
        cout << "Average for each row : "<<average << endl;
        //reset values
        count = 0;
        total = 0;
        average = 0.0;

    }
}
//fourth function
void findHighRow(int populateArray[][4], int rows, int cols, int highRow[])
{
    //introduction of nested for-loop
    for (int q = 0;q < rows;q++)
    {
        //declaration of variables
        int array[1];
        int highest = populateArray[0][0];;
        int count = 0;
        //introduction of inner loop
        for (int k = 0;k < cols;k++)
        {
            //checking for highest number per row
            //introduction of if statement
            if (populateArray[q][k] > highest)
            {
                //store highest into array
                highest = populateArray[q][k];
                count++;
                highRow[q] = count;
              
            }
        }
        //reset highest
        highest = 0;
        count = 0;
        //display highest
        cout << "Highest value in this row : " << highest << endl;

    }
}
//sixth function 
void countOdds(int populateArray[][4], int rows, int cols, int odds[])
{

    //declaration of variables
    int odd = 0;
    int count = 0;

    //using for-loop count odd numbers in each column
    //introduction of nested for-loop
    for (int k = 0;k < cols;k++)
    {
        //introduction of inner loop
        for (int q = 0;q < rows;q++)
        {
        //introduction of if-statement
            if (populateArray[q][k] % 2 != 0)
            {
                odd = populateArray[k][q];
                odds[k] = count;
                count++;
            }

        }
        //reset count
        count = 0;
        //display total number of odd numbers
        cout << "Total number of odd numbers in each column : " << count << endl;

    }
}
//seventh function
void calcSumEven(int populateArray[][4], int rows, int cols, int evens[])
{

    //declaration of variables
    int odd = 0;
    int count = 0;
    int sum = 0;
    //using nested for-loops to calculate sum of even numbers in each row
    //introduction of nested for-loop
    for (int q = 0;q < rows;q++)
    {
        //introduction of inner loop
        for (int k = 0;k < cols;k++)
        {
        //introduction of if-statement to calculate sumEven
            if (populateArray[q][k] % 2 == 0)
            {
            //add value to array and sum
                sum = sum + populateArray[q][k];
                count++;
                evens[q] = count;
            }
        }
        //display sumEven
        cout << "The sum of even numbers in each row : " << sum << endl;
        sum = 0;
        count = 0;

    }
}
//eight function
bool checkEven(int num)
{
    //declaration of variables
    bool isFound = false;

    //allow user to enter values
    cout << "Enter an integral value : ";
    cin >> num;

    //introduction of if-else statement
    if (num % 2 == 0)
    {
        isFound = true;
        //display status of value entered
        cout << "Value entered is even.\n";
    }
    else
    {
        isFound = false;
        //display status of value entered
        cout << "Value entered is not even.\n";
    }

    return isFound;
}
//ninth function
bool determineOdd(int num)
{

    //declaration of variables
    bool isFound = false;

    //allow user to enter values
    cout << "Enter an integral value : ";
    cin >> num;

    //introduction of if-else statement
    if (num % 2 != 0)
    {
        isFound = true;
        //display status of value entered
        cout << "Value entered is odd.\n";
    }
    else
    {
        isFound = false;
        //display status of value entered
        cout << "Value entered is not odd.\n";
    }

    return isFound;
}
