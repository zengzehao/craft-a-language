/*
与自定义类有关的内置函数
*/

#include "class.h"
#include "mem.h"

//创建指定元素个数的数组
PlayObject* object_create_by_length(size_t length){
    //申请内存
    size_t size = sizeof(Object) + sizeof(double)*length;

    PlayObject * pobj =  (PlayObject*)PlayAlloc(size);

    //设置对象头
    Object * obj = (Object *)pobj;
    obj ->flags = 0;  

    return pobj;
}

