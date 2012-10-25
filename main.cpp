/*
GoF ��˵��Bridge ģʽʱ������ͼ��ָ��Bridge ģʽ�������󲿷�������ʵ�ֲ��ַ�
�룬ʹ�����ǿ��Զ����ر仯������仰�ܼ򵥣�����Ҳ�ܸ��ӣ���Bruce Ec ke l �����Ĵ���
��Thinking in Patterns����˵��Bridge ģʽ��GoF ����������ã�Poorly ��describe d ����ģ
ʽ�������˾���Ҳ������ˡ�ԭ�������GoF ���Ǿ仰�еġ�ʵ�֡�����ôȥ��⣺��ʵ�֡�
�ر��Ǻ͡����󡱷���һ���ʱ�����ǡ�Ĭ�ϡ�������ǡ�ʵ�֡����ǡ����󡱵ľ�������
��ʵ�֣���������GoF ��ν�ġ�ʵ�֡��ĺ��岻��ָ�������ľ�������Գ����������
�������ӿڣ���ʵ�֣��Ǻͼ̳н����һ��ġ�������ġ�ʵ�֡��ĺ���ָ������ôȥʵ��
�û������󣬲���ָ����ͨ����ϣ�ί�У��ķ�ʽʵ�ֵģ���������ʵ�ֲ���ָ�ļ̳л�
�ࡢʵ�ֻ���ӿڣ�����ָ����ͨ���������ʵ���û��������������һ��Ҳ�������
Bridge ģʽ�������Brid ge ģʽ�������ƾͻ����Elegant�ˡ� 

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
