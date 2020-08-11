//
//  main.c
//  数组列表
//
//  Created by edz on 2020/8/11.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int* head;
    int length;
    int capacity;
} SeqList;

// 初始化顺序表
SeqList* initSeqList(int cap) {
    SeqList* pl = (SeqList*)malloc(sizeof(SeqList));
    pl->capacity = cap;
    pl->head = (int *)malloc(sizeof(int) * cap);
    pl->length = 0;
    return pl;
}

// 增加数据
void add(SeqList* pl, int value, int pos) {
    if (pl->length < pl->capacity) {
        pl->head[pl->length] = value;
        pl->length++;
    } else {
        printf("容量已满\n");
    }
    if (pos > pl->length  || pos < 0) {
        printf("插入位置有误\n");
        return ;
    }
    if (pl->length == pl->capacity) {
        int *temp = (int *)realloc(pl->head, (pl->capacity + 1) * sizeof(int));
        
        if (!temp) {
            printf("内存分配失败！\n");
            return ;
        }
        pl->head = temp;
        pl->capacity += 1;
    }
    for (int i = pl->length - 1; i >= pos ; i--) {
        pl->head[i + 1] = pl->head[i];
    }
    
    pl->head[pos] = value;
    
    pl->length++;
    return ;
}


// 删除数据
void delete(SeqList* pl) {
    if (pl->length != 0)
        pl->length--;
    else
        printf("空顺序表，无法删除\n");
}

void print(SeqList* pl) {
    for (int i = 0; i < pl->length; i++) {
        printf("%4d", pl->head[i]);
    }
    printf("\n");
}

int main() {
    SeqList* pl = initSeqList(10);
    for (int i = 0; i < 20; i++) {
        add(pl , i * 100, 10);
        print(pl);
    }
    
    for (int i = 0; i < 20; i++) {
        delete(pl);
        print(pl);
    }
    
    
    return 0;
}
