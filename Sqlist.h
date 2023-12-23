#ifndef SQLIST_H_INCLUDED
#define SQLIST_H_INCLUDED
#include "Reality.h"
 // c2-1.h 线性表的动态分配顺序存储结构
 #define LIST_INIT_SIZE 10 // 线性表存储空间的初始分配量
 #define LISTINCREMENT 2 // 线性表存储空间的分配增量
 typedef int ElemType;
// 实现SqList的存储定义
typedef struct SqList
{
    User elem;
    int length;
    int listsize;

}SqListUser;

#endif // SQLIST_H_INCLUDED
