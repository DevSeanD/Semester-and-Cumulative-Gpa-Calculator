//
//  main.cpp
//  Small_Projects
// 	
//
//  Created by Sean on 1/8/19.
//  Copyright © 2019 Sean. All rights reserved.
//
//
//This program is designed to calculate semester gpa and cumulative gpa in a simplistic way
//
#include <iostream>

float gpacalc (float x, float y)
{
	return x / y;//gradepoints / totalcredits
}

float cumcalc (float x, float y)
{
	return x / y;//total semseter gpa / total semesters
}
int main()
{
	int typecalc;
	
	do
	{
		std::cout << "How would you like to calculate gpa?" << std::endl;
			std::cout << " " << std::endl;
		std::cout << "For Semester gpa enter (1)" << std::endl;
		std::cout << "============================" << std::endl;
		std::cout << "For Cumulative gpa enter (2)" << std::endl;
			std::cin >> typecalc;
	
	}while((typecalc > 2) || (typecalc < 1));//will loop if values are not 1 or 2
	
	if(typecalc == 1)
	{
		float classno;//how many classes of the semester
		float creds;//how many credits each class is worth
		float grade;// what grade the earned
		float totalcreds = 0;//total credits
		float gradepoints = 0;//total gradepoints
		int counter = 1;//starts with 1 
		
		std::cout << " " <<std::endl; 
		std::cout << "===================" << std::endl;
		std::cout << "Semester Calculator" << std::endl;
		std::cout << "===================" << std::endl;
		
		do
		{
			std::cout << "How many classes are you taking this semester?" << std::endl;
				std::cin >> classno;
			std::cout << " " << std::endl;
			
		}while((classno <= 0) || (classno >= 10));
			
	
		do
		{
        
			do
			{
				std::cout << "How many credits is class " << counter <<" worth" << std::endl;
				std::cin >> creds;
				
			}while((creds <= 0) || (creds >= 6));
        
				std::cout << " " << std::endl;
				std::cout << " " << std::endl;
				
				std::cout << "To enter the number to the right of the letter grade" << std::endl;
				std::cout << " " << std::endl;
				do
				{
					std::cout << "What grade did earn in this class?" << std::endl;
					std::cout << "+------------------------+" << std::endl;
					std::cout << "| A+(1)   A(2)    A-(3)  |" << std::endl;
					std::cout << "|                        |" << std::endl;
					std::cout << "| B+(4)   B(5)    B-(6)  |" << std::endl;
					std::cout << "|                        |" << std::endl;
					std::cout << "| C+(7)   C(8)    C-(9)  |" << std::endl;
					std::cout << "|                        |" << std::endl;
					std::cout << "| D+(10)  D(11)   D-(12) |" << std::endl;
					std::cout << "|                        |" << std::endl;
					std::cout << "|         F(13)          |" << std::endl;
					std::cout << "+------------------------+" << std::endl;
					std::cout << "                         "<< std::endl;
						std::cin >> grade;
					std::cout << " " << std::endl;
				}while((grade <= 0) || (grade > 13));
				
				if (grade == 1){ // changes the input from the menu to a gpa value
					grade = 4.3;
				}
				if (grade == 2){
					grade = 4.0;
				}
				if (grade == 3){
					grade = 3.7;
				}
				if (grade == 4){
					grade = 3.3;
				}
				if (grade == 5){
					grade = 3.0;
				}
				if (grade == 6){
					grade = 2.7;
				}
				if (grade == 7){
					grade = 2.3;
				}
				if (grade == 8){
					grade = 2.0;
				}
				if (grade == 9){
					grade = 1.7;
				}
				if (grade== 10){
					grade = 1.3;
				}
				if (grade == 11){
					grade= 1.0;
				}
				if (grade == 12){
					grade = .07;
				}
				if (grade == 13){
					grade = 0.0;
				}
		
			if((((creds <= 6) && (creds > 0) && (grade <= 4.4) && (grade >= 0))))//will only execute if the provided numbers are good data
			{
            
			totalcreds += creds;
        
			gradepoints += grade * creds;
       	
            
			counter++;
			}
        
			else
				std::cout << "please enter a valid number" << std::endl;
		
        
		}while(counter <= classno);//the loop continues untill the correct amout of classes have been stored
	
			std::cout << " " << std::endl;
			
			std::cout << "============================" << std::endl;
			std::cout << "Your Semester Gpa is : " << gpacalc(gradepoints,totalcreds) << std::endl;//calls upon the gpacalc function to determin and print out the gpa 
			std::cout << "============================" << std::endl;
	}
	if(typecalc == 2)
	{
		float totalsemesters;//total amount of semesters
		float counter = 1;// counter starts at one and represents the number of semesters
		float semgpa = 0;// gpa for semester
		float totalsemgpa = 0;
		
		std::cout << " " <<std::endl;
		std::cout << "=====================" << std::endl;
		std::cout << "Cumulative Calculator" << std::endl;
		std::cout << "=====================" << std::endl;
		do
		{
			std::cout << "How many semesters have you taken" << std::endl;
				std::cin >> totalsemesters; 
			std::cout << " " << std::endl;
				
		}while((totalsemesters < 0)||(totalsemesters > 15));//will loop if the number of semesters is less than zero or more than 15
		
		do
		{
			std::cout << "What was gpa from semester " << counter << std::endl;
				std::cin >> semgpa;
			std::cout << " " << std::endl;
 
			if((semgpa <= 4.0) && (semgpa >= 0.0))//only allows values from 0 to 4
			{
				totalsemgpa += semgpa;//adds gpa to total semseter gpa
				counter++;
			}
			else 
				std::cout << "Please enter a value between 0.0 and 4.0" << std::endl; 
				
		}while(totalsemesters >= counter);//loops untill all the semester grades have been entered
		std::cout << "============================" << std::endl;
		std::cout << "Your Cumulative gpa is " << cumcalc(totalsemgpa,totalsemesters) << std::endl;
		std::cout << "============================" << std::endl;
	}
	int a;// Stalls program after it has finished on some mechines without this snippet
	std::cin >> a; 
}
