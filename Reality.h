#ifndef REALITY_H_INCLUDED
#define REALITY_H_INCLUDED

#include "Graph.h"
#include <string.h>
#include "Tree.h"

 typedef struct City
 {
   string name;
   VNode Station;
 };//Graph


 typedef struct Ticket
 {
   string train_number;
   City start;
   City end;
   int price;
   string seat;
 };//Linklist



 typedef struct User
 {
    string account;
    string password;
    string name;
    string sex;
    string id;
    string tickets;
    int authority;
 }User;//Sqlist



 typedef struct Train
 {
   string train_type;//车次类型（高铁/动车）
   string train_set;//车组(复兴/和谐)
   string seat_type;
 };//Sqlist


 typedef struct TrainNumber
 {
   string number;
   string begin;
   string end;
   int ticket_number;
   int distance;
   int train_distance;
   Tree carriage;
 };//Sqlist

#endif // REALITY_H_INCLUDED
