/*
GoF 在说明Bridge 模式时，在意图中指出Bridge 模式“将抽象部分与它的实现部分分
离，使得它们可以独立地变化”。这句话很简单，但是也很复杂，连Bruce Ec ke l 在他的大作
《Thinking in Patterns》中说“Bridge 模式是GoF 所讲述得最不好（Poorly －describe d ）的模
式”，个人觉得也正是如此。原因就在于GoF 的那句话中的“实现”该怎么去理解：“实现”
特别是和“抽象”放在一起的时候我们“默认”的理解是“实现”就是“抽象”的具体子类
的实现，但是这里GoF 所谓的“实现”的含义不是指抽象基类的具体子类对抽象基类中虚
函数（接口）的实现，是和继承结合在一起的。而这里的“实现”的含义指的是怎么去实现
用户的需求，并且指的是通过组合（委托）的方式实现的，因此这里的实现不是指的继承基
类、实现基类接口，而是指的是通过对象组合实现用户的需求。理解了这一点也就理解了
Bridge 模式，理解了Brid ge 模式，你的设计就会更加Elegant了。 

*/
//main.cpp  
#include "Abstraction.h" 
#include "AbstractionImp.h" 
#include <iostream>  
using namespace std; 
int main(int argc,char * argv[]) 
{ 
    AbstractionImp* imp = new  ConcreteAbstractionImpA(); 
    Abstraction* abs =  new RefinedAbstraction(imp) ; 
    abs->Operation(); 
    
    AbstractionImp* imp2 = new  ConcreteAbstractionImpB(); 
    Abstraction* abs2 =  new RefinedAbstraction(imp2) ; 
    abs2->Operation();
    
    
    return  0;  
}
