//
//  main.cpp
//  FizzBuzz Interview Question
//  Description: print every number from 1 to 100, but for every multiple of 3
//      print "Fizz", for every multiple of 5 print "Buzz", and if the number is
//      a multiple of both 3 and 5, print "FizzBuzz". This solution will be make the
//      problem easy to change in case the requirements need to be changed futher down the road.
//  Created by Jeremy Brachle on 8/6/17.
//  Copyright © 2017 Jeremy Brachle. All rights reserved.
//

//include the iostream for input/output
#include <iostream>
//include string library
#include <string.h>

//use the standard namespace
using namespace std;

//set up the functions:
//better way of solving it, as it is easier to "fix" in case the requirements change
void changeableFizzBuzz();
//normal Fizz Buzz function for how most people would solve it
void normalFizzBuzz();

//main function
int main(int argc, const char * argv[])
{
    //start the program
    cout<<"Begin Fizz-Buzz Program:\n";
    //call the changeable Fizz Buzz function
    changeableFizzBuzz();
    
    //end the program
    return 0;
}

//better implementation of fizz-buzz:
void changeableFizzBuzz()
{
    //start by making a string to hold output
    string message;
    
    //now loop through 1-100
    for (int i = 1; i <= 100; i ++)
    {
        //instantiate message to be empty for each iteration
        message = "";
        
        //check if divisible by 3 and concatenate "Fizz" to the message
        if (i % 3 == 0) { message += "Fizz"; }
        
        //check if divisible by 5 and concatenate "Buzz" (note that it is NOT an else-if statement)
        if (i % 5 == 0) { message += "Buzz"; }
        
        //in case the requirements change and you need to output a different message for a new number:
        //if (i % 7 == 0) { message += "Bizz"; }
        //if (i % 9 == 0) { message += "Fuzz"; }
        
        //now check if the message has be concatenated yet
        if (message == "") { message = to_string(i); }//just set the message to the counter
        
        //now all the program has to do is output the message
        cout<<message<<endl;
    }
}

//summary: in case the requirements change and the program should print "Buzz" if the number
//  is a multiple of 6 instead of 5, then only one number needs to be changed. Also, if another
//  message needs to be printed for a third number, then only one extra line of code is needed

//now here is the normal implementation of the fizz-buz program which is not as easy to change
void normalFizzBuzz()
{
    //loop through 1-100
    for (int i = 1; i <= 100; i ++)
    {
        //check if the number is divisible by both 3 and 5
        if (i % 3 == 0 && i % 5 == 0) { cout<<"FizzBuzz\n"; }
        
        //if the number is ony divisible by 3
        else if (i % 3 == 0) { cout<<"Fizz\n"; }
        
        //if the number is only divisible by 5
        else if (i % 5 == 0) { cout<<"Buzz\n"; }
        
        //for all other numbers, just print i
        else { cout<<i<<endl; }
    }
}
