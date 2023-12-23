#ifndef DATAENTRY_H_INCLUDED
#define DATAENTRY_H_INCLUDED

#include "Graph.h"
#include "Sqlist.h"
#include "LinkQueue.h"
void ReadUser(SqList<User>& userList);
void ReadTrain(SqList<Train>& TrainList);
void ReadTrainNunmber(SqList<TrainNumber>& TrainNumberList);
void WriteUser(SqList<User>& UserList);
#endif // DATAENTRY_H_INCLUDED

