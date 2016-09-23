#include "data.h"


Data::Data(int len)
{
    //cout << "Object is being created, length = " << len << endl;
    length = len;
}


int Data::getLength(  )
{
    return length;
}
