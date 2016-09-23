#include "datacreator.h"
#include"data.h"
#include <stdlib.h>
#include <QList>
#include<iostream>
#include <stdexcept>
DataCreator::DataCreator()
{

}
QList<Data*> dataList;

void DataCreator::createNow(){
Data* d = new Data(rand()%30);
dataList.append(d);
}
int DataCreator::giveDataScale(){
    int temp= dataList.at(0)->getLength();
    return temp;
}

void DataCreator::takeFromQueue(){
     if(!dataList.isEmpty()){
dataList.removeAt(0);
}
}
int DataCreator::queueChecker(){
    if(dataList.isEmpty()){

        return 0;
    }
    else
        return 1;


}

