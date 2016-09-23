#include "accesspoint.h"
#include<iostream>
AccessPoint::AccessPoint()
{

}

void AccessPoint::sendCTS(){
std::cout<<"sending CTS...\n";
}
void AccessPoint::sendACK(){
std::cout<<"sending ACK...\n";
}
