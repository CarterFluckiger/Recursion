/*
 Carter Fluckiger
 Data Structure Spring 2020
 Due: March 26, 2020
 Lab: Write a program that will reverse the order of a stack. For this lab, you will use your stack class and you’re not allowed to use any C++ loops.
*/
#include "Recursion.h"

#include <iostream>

void recursion(Stack Program , Stack New_Program);

int main()
{
    //
    // Just some code to test the code
    // The code is arbitrary and can be changed
    //
    
    Stack Program;
    Stack New_Program;
    
    if(Program.IsFull())
    {
        std::cout<<"Full"<<std::endl;
    }
    if(Program.IsEmpty())
    {
        std::cout<<"Empty"<<std::endl;
    }
    Program.Push(4);
    Program.Push(34);
    Program.Push(99);
    Program.Pop();
    Program.Push(98);

    recursion(Program, New_Program);

    return 0;
}

void recursion(Stack Program,Stack New_Program)
{
    //Checks to see if it is empty so it can skip it if it is
     if(!Program.IsEmpty())
    {
        //Puts top item of Program and pushes onto New Program
        New_Program.Push(Program.Top());
        // Pops that number
        Program.Pop();
        //Couts this number
        std::cout<<New_Program.Top()<<std::endl;
        //Checks to see if original program is empty
        // Enters another recrusion if not empty
        if(!Program.IsEmpty())
        {
            recursion(Program,New_Program);
        }
    }
}
