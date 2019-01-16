//
//  main.cpp
//  Getting_back_into_it
//
//  Created by Sean on 1/8/19.
//  Copyright © 2019 Sean. All rights reserved.
//
//
//This program is designed to calculate semester gpa in a simplistic way
//
#include <iostream>

void gpacalc (float x, float y)
{
    std::cout << "Your semester gpa is: "<< x / y << std::endl;//total gradepoints divided by total attempted credit hours
}

int main()
{
    float classno;
    float creds;
    float grade;
    float totalcreds = 0;
    float gradepoints;
    int counter = 1;
    
    std::cout << "Hello, this program is desgined to calculate semester gpa" << std::endl;
    std::cout << " " << std::endl;

    std::cout << "How many classes are you taking this semester?" << std::endl;
    std::cin >> classno;
    
        std::cout << " " << std::endl;
    
    do
    {
        
        std::cout << "How many credits is this class worth" << std::endl;
            std::cin >> creds;
        
            std::cout << " " << std::endl;
        
        std::cout << "What grade did earn in this class" << std::endl;
            std::cin >> grade;
        
            std::cout << " " << std::endl;
        
        
        
        if((((creds <= 6) && (creds > 0) && (grade <= 4.0) && (grade >=0))))//will only execute if the provided numbers are good data
        {
            
        totalcreds += creds;
        
        gradepoints += grade * creds;
       	
            
        counter++;
        }
        
        else
        {
            std::cout << "please enter a valid number" << std::endl;
        }
        
    }while(counter <= classno);//the loop continues untill the correct amout of classes have been stored
    
    gpacalc(gradepoints, totalcreds);
    
}
