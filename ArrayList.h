//
//  ArrayList.h
//  ArrayList
//
//  Created by 하윤 on 2021/08/16.
//

#ifndef ArrayList_h
#define ArrayList_h

#include "Point.h"
#include "NameCard.h"
#define TRUE    1
#define FALSE    0
#define LIST_LEN    100


typedef NameCard * LData;

typedef struct __ArrayList
{
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
} ArrayList;


typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);


#endif /* ArrayList_h */
