
#ifndef Recursion_h
#define Recursion_h



typedef int Itemtype;
// defines Itemtype to int and can be changed as needed

struct Nodetype;
//struct Nodetype is used to make nodes

class Stack
{
public:
    Stack();
    ~Stack();
    
    
    bool IsEmpty();
    bool IsFull();
    
    
    void Push(Itemtype item);
    void Pop();
    
    
    Itemtype Top();
private:
    Nodetype* p_top;
};

#endif /* Recursion_hpp */
