#include<iostream>
using namespace std;
#include"helloclass.h"

HelloClass::HelloClass()
{
       cout<<"constructing"<<endl;
}

void  HelloClass::sayhello()
{
       cout<<"hello"<<endl;
}

HelloClass::~HelloClass()
{
      cout<<"destructing"<<endl;
}
