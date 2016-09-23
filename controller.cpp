#include "controller.h"
#include<QList>
#include<iostream>
#include"accessdevice.h"
#include"accesspoint.h"
#include"iscreating.h"
#include"datacreator.h"
#include"data.h"
#include<iostream>
controller::controller()
{

}
void controller::control()
{
    AccessDevice A;
    AccessPoint M;
    iscreating askiscreating;
    DataCreator datacrt;

    for(int slot=0;slot<1000;slot++){

        if(askiscreating.iscreatingnow()==1){
        datacrt.createNow();
        std::cout<<"creating new data\n";
     }
        if(datacrt.queueChecker()==1){

            A.sendRTS();
            slot++;
            M.sendCTS();
            slot++;
            std::cout<<"sending Data...please wait"<<"data scale is:"<<datacrt.giveDataScale()<<"\n";
            slot+= datacrt.giveDataScale();
            datacrt.takeFromQueue();
            M.sendACK();
            slot+=2;
            std::cout<<"data has been sent... current slot is :"<<slot<<"\n";








}
        else {

        }
}
}
