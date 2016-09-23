#include "iscreating.h"
#include <stdlib.h>
iscreating::iscreating()
{

}
int iscreating::iscreatingnow(){

int temp = rand()%5;
if(temp>3){
           return 1;
}
else
    return 0;
}
