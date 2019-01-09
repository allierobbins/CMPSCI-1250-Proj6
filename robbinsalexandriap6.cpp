/*
 * robbinsalexandriap6.cpp
 *
 *  Created on: Oct 5, 2016
 *      Author: Alexandria
 */

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
			/*ofstream outputFile;
			outputFile.open("p6.dat");
			outputFile << 10 << endl;
			outputFile << 20 << endl;
			outputFile << 30 << endl;
			outputFile << 40 << endl;
			outputFile << 50 << endl;
			outputFile << 60 << endl;
			outputFile << 70 << endl;
			outputFile << 80 << endl;
			outputFile << 90 << endl;
			outputFile << 100 << endl;
			outputFile << 110 << endl;
			outputFile << 120 << endl;
			outputFile.close();*/

	//opening file
	ifstream inputFile;
	inputFile.open("p6.dat");

		//checking file opened
		if (!inputFile)
			cout << "Error. File not found." << endl;
		else
			cout << "File opened successfully." << endl;

	//variables
	const int SIZE = 12;
	int numbers[SIZE];
	int count = 0;
	int data;
	int dataCount = 0;

	cout << "Reading values from file." << endl;

	cout << "Copying values to array." << endl;

	//input vales into array
	while (inputFile >> data)
	{	numbers[count] = data;
		dataCount++;
		count++;}

	//check for 12 values
	if (dataCount == 12)
		cout << "All values have been copied to array." << endl;
	else
		cout << "Error. Incorrect number of values." << endl;

	//calculate highest number
	int highest;
	highest = numbers[0];
	for (count = 1; count < SIZE; count++)
	{	if (numbers[count] > highest)
		highest = numbers[count];}

	//calculate lowest number
	int lowest;
	lowest = numbers[0];
	for (count = 1; count < SIZE; count++)
	{	if (numbers[count] < lowest)
		lowest = numbers[count];}

	//calculate average number
	int total;
	int average;
	for (count = 0; count < SIZE; count++)
		total += numbers[count];
	average = total / SIZE;

	//display highest/lowest/average
	cout << "The highest number is " << highest << endl;
	cout << "The lowest number is " << lowest << endl;
	cout << "The average number is " << average << endl;

	//close file
	inputFile.close();
	return 0;
}


