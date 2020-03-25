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

    recursion(Program, New_Program);
    
    return 0;
}

void recursion(Stack Program,Stack New_Program)
{
     if(!Program.IsEmpty())
    {
        New_Program.Push(Program.Top());
        Program.Pop();
        std::cout<<New_Program.Top()<<std::endl;
        
        if(!Program.IsEmpty())
        {
            recursion(Program,New_Program);
        }
    }
}
