#ifndef DATACREATOR_H
#define DATACREATOR_H


class DataCreator
{
public:
    DataCreator();
    void createNow();
    void takeFromQueue();
    int queueChecker();
    int giveDataScale();
};

#endif // DATACREATOR_H
