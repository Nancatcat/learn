//#define _CRT_SECURE_NO_WARNINGS 1
//#include"Stack.h"
////
////
////void StackInit(Stack* ps)
////{
////	assert(ps);
////	ps->capacity = ps->top = 0;
////	ps->data = NULL;
////}
////void StackDestroy(Stack* ps)
////{
////	assert(ps);
////	free(ps->data);
////	ps->capacity = ps->top = 0;
////	ps->data = NULL;
////}
////void StackPush(Stack* ps, SDataType x)
////{
////	assert(ps);
////	if (ps->top == ps->capacity)
////	{
////		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
////		SDataType* tmp = (SDataType*)realloc(ps->data, sizeof(SDataType) * newCapacity);
////		if (tmp == NULL)
////		{
////			perror("StackPush fail");
////			exit(-1);
////		}
////		ps->data = tmp;
////		ps->capacity = newCapacity;
////	}
////	ps->data[ps->top] = x;
////	ps->top++;
////}
////void StackPop(Stack* ps)
////{
////	assert(ps);
////	assert(ps->top > 0);
////	ps->top--;
////}
////SDataType StackTop(Stack* ps)
////{
////	assert(ps);
////	assert(ps->top > 0);
////	return ps->data[ps->top - 1];
////}
////bool StackEmpty(Stack* ps)
////{
////	assert(ps);
////	return ps->top == 0;
////}
////int StackSize(Stack* ps)
////{
////	assert(ps);
////	return ps->top;
////}typedef struct
////{
////    int* a;
////    int k;
////    int front;
////    int rear;
////} MyCircularQueue;
////
////bool myCircularQueueIsEmpty(MyCircularQueue* obj)
////{
////    assert(obj);
////    return obj->rear == obj->front;
////}
////
////bool myCircularQueueIsFull(MyCircularQueue* obj)
////{
////    assert(obj);
////    return ((obj->rear + 1) % (obj->k + 1)) == obj->front;
////}
////MyCircularQueue* myCircularQueueCreate(int k)
////{
////    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
////    obj->a = (int*)malloc(sizeof(int) * (k + 1));
////    obj->front = obj->rear = 0;
////    obj->k = k;
////    return obj;
////}
////
////bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
////{
////    assert(obj);
////    if (myCircularQueueIsFull(obj))
////        return false;
////    obj->a[obj->rear++] = value;
////    obj->rear %= (obj->k + 1);
////    return true;
////}
////
////bool myCircularQueueDeQueue(MyCircularQueue* obj)
////{
////    assert(obj);
////    if (myCircularQueueIsEmpty(obj))
////        return false;
////    obj->front++;
////    obj->front %= (obj->k + 1);
////    return true;
////}
////
////int myCircularQueueFront(MyCircularQueue* obj)
////{
////    assert(obj);
////    if (myCircularQueueIsEmpty(obj))
////        return -1;
////    else
////        return obj->a[obj->front];
////}
////
////int myCircularQueueRear(MyCircularQueue* obj)
////{
////    assert(obj);
////    if (myCircularQueueIsEmpty(obj))
////        return -1;
////    else
////        return obj->a[(obj->rear + obj->k) % (obj->k + 1)];
////}
////
////void myCircularQueueFree(MyCircularQueue* obj)
////{
////    free(obj->a);
////    free(obj);
////}
////bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
////
////}
////
////bool myCircularQueueIsFull(MyCircularQueue* obj) {
////
////}assert(obj);
////if (myCircularQueueIsEmpty(obj))
////return false;
////typedef int SDataType;
////
////typedef struct Stack
////{
////    SDataType* data;
////    int top;
////    int capacity;
////}Stack;
////
////void StackInit(Stack * ps);
////void StackDestroy(Stack * ps);
////void StackPush(Stack * ps, SDataType x);
////void StackPop(Stack * ps);
////SDataType StackTop(Stack * ps);
////bool StackEmpty(Stack * ps);
////int StackSize(Stack * ps);
////
////void StackInit(Stack * ps)
////{
////    assert(ps);
////    ps->capacity = ps->top = 0;
////    ps->data = NULL;
////}
////void StackDestroy(Stack * ps)
////{
////    assert(ps);
////    free(ps->data);
////    ps->capacity = ps->top = 0;
////    ps->data = NULL;
////}
////void StackPush(Stack * ps, SDataType x)
////{
////    assert(ps);
////    if (ps->top == ps->capacity)
////    {
////        int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
////        SDataType* tmp = (SDataType*)realloc(ps->data, sizeof(SDataType) * newCapacity);
////        if (tmp == NULL)
////        {
////            perror("StackPush fail");
////            exit(-1);
////        }
////        ps->data = tmp;
////        ps->capacity = newCapacity;
////    }
////    ps->data[ps->top] = x;
////    ps->top++;
////}
////void StackPop(Stack * ps)
////{
////    assert(ps);
////    assert(ps->top > 0);
////    ps->top--;
////}
////SDataType StackTop(Stack * ps)
////{
////    assert(ps);
////    assert(ps->top > 0);
////    return ps->data[ps->top - 1];
////}
////bool StackEmpty(Stack * ps)
////{
////    assert(ps);
////    return ps->top == 0;
////}
////int StackSize(Stack * ps)
////{
////    assert(ps);
////    return ps->top;
////}
////typedef struct
////{
////    Stack push;
////    Stack pop;
////} MyQueue;
////
////
////MyQueue* myQueueCreate()
////{
////    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
////    StackInit(&obj->push);
////    StackInit(&obj->pop);
////    return obj;
////}
////
////void myQueuePush(MyQueue * obj, int x)
////{
////    StackPush(&obj->push, x);
////}
////
////int myQueuePeek(MyQueue * obj)
////{
////    if (StackEmpty(&obj->pop))
////    {
////        while (!StackEmpty(&obj->push))
////        {
////            StackPush(&obj->pop, StackTop(&obj->push));
////            StackPop(&obj->push);
////        }
////    }
////    return StackTop(&obj->pop);
////}
////int myQueuePop(MyQueue * obj)
////{
////
////    if (StackEmpty(&obj->pop))
////    {
////        while (!StackEmpty(&obj->push))
////        {
////            StackPush(&obj->pop, StackTop(&obj->push));
////            StackPop(&obj->push);
////        }
////    }
////    int front = StackTop(&obj->pop);
////    StackPop(&obj->pop);
////    return front;
////}
////bool myQueueEmpty(MyQueue * obj)
////{
////    return StackEmpty(&obj->push) && StackEmpty(&obj->pop);
////}
////
////void myQueueFree(MyQueue * obj)
////{
////    StackDestroy(&obj->push);
////    StackDestroy(&obj->pop);
////    free(obj);
////
////}
////
/////**
//// * Your MyQueue struct will be instantiated and called as such:
//// * MyQueue* obj = myQueueCreate();
//// * myQueuePush(obj, x);
////
//// * int param_2 = myQueuePop(obj);
////
//// * int param_3 = myQueuePeek(obj);
////
//// * bool param_4 = myQueueEmpty(obj);
////
//// * myQueueFree(obj);
////*/
////
////typedef int SDataType;
////
////typedef struct Stack
////{
////    SDataType* data;
////    int top;
////    int capacity;
////}Stack;
////
////void StackInit(Stack* ps);
////void StackDestroy(Stack* ps);
////void StackPush(Stack* ps, SDataType x);
////void StackPop(Stack* ps);
////SDataType StackTop(Stack* ps);
////bool StackEmpty(Stack* ps);
////int StackSize(Stack* ps);
////
////#define _CRT_SECURE_NO_WARNINGS 1
////#include"Stack.h"
////
////
////void StackInit(Stack* ps)
////{
////    assert(ps);
////    ps->capacity = ps->top = 0;
////    ps->data = NULL;
////}
////void StackDestroy(Stack* ps)
////{
////    assert(ps);
////    free(ps->data);
////    ps->capacity = ps->top = 0;
////    ps->data = NULL;
////}
////void StackPush(Stack* ps, SDataType x)
////{
////    assert(ps);
////    if (ps->top == ps->capacity)
////    {
////        int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
////        SDataType* tmp = (SDataType*)realloc(ps->data, sizeof(SDataType) * newCapacity);
////        if (tmp == NULL)
////        {
////            perror("StackPush fail");
////            exit(-1);
////        }
////        ps->data = tmp;
////        ps->capacity = newCapacity;
////    }
////    ps->data[ps->top] = x;
////    ps->top++;
////}
////void StackPop(Stack* ps)
////{
////    assert(ps);
////    assert(ps->top > 0);
////    ps->top--;
////}
////SDataType StackTop(Stack* ps)
////{
////    assert(ps);
////    assert(ps->top > 0);
////    return ps->data[ps->top - 1];
////}
////bool StackEmpty(Stack* ps)
////{
////    assert(ps);
////    return ps->top == 0;
////}
////int StackSize(Stack* ps)
////{
////    assert(ps);
////    return ps->top;
////}typedef struct
////{
////    int* a;
////    int k;
////    int front;
////    int rear;
////} MyCircularQueue;
////
////bool myCircularQueueIsEmpty(MyCircularQueue* obj)
////{
////    assert(obj);
////    return obj->rear == obj->front;
////}
////
////bool myCircularQueueIsFull(MyCircularQueue* obj)
////{
////    assert(obj);
////    return ((obj->rear + 1) % (obj->k + 1)) == obj->front;
////}
////MyCircularQueue* myCircularQueueCreate(int k)
////{
////    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
////    obj->a = (int*)malloc(sizeof(int) * (k + 1));
////    obj->front = obj->rear = 0;
////    obj->k = k;
////    return obj;
////}
////
////bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
////{
////    assert(obj);
////    if (myCircularQueueIsFull(obj))
////        return false;
////    obj->a[obj->rear++] = value;
////    obj->rear %= (obj->k + 1);
////    return true;
////}
////
////bool myCircularQueueDeQueue(MyCircularQueue* obj)
////{
////    assert(obj);
////    if (myCircularQueueIsEmpty(obj))
////        return false;
////    obj->front++;
////    obj->front %= (obj->k + 1);
////    return true;
////}
////
////int myCircularQueueFront(MyCircularQueue* obj)
////{
////    assert(obj);
////    if (myCircularQueueIsEmpty(obj))
////        return -1;
////    else
////        return obj->a[obj->front];
////}
////
////int myCircularQueueRear(MyCircularQueue* obj)
////{
////    assert(obj);
////    if (myCircularQueueIsEmpty(obj))
////        return -1;
////    else
////        return obj->a[(obj->rear + obj->k) % (obj->k + 1)];
////}
////
////void myCircularQueueFree(MyCircularQueue* obj)
////{
////    free(obj->a);
////    free(obj);
////}
////bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
////
////}
////
////bool myCircularQueueIsFull(MyCircularQueue* obj) {
////
////}assert(obj);
////if (myCircularQueueIsEmpty(obj))
////return false;
////typedef int SDataType;
////
////typedef struct Stack
////{
////    SDataType* data;
////    int top;
////    int capacity;
////}Stack;
////
////void StackInit(Stack * ps);
////void StackDestroy(Stack * ps);
////void StackPush(Stack * ps, SDataType x);
////void StackPop(Stack * ps);
////SDataType StackTop(Stack * ps);
////bool StackEmpty(Stack * ps);
////int StackSize(Stack * ps);
////
////void StackInit(Stack * ps)
////{
////    assert(ps);
////    ps->capacity = ps->top = 0;
////    ps->data = NULL;
////}
////void StackDestroy(Stack * ps)
////{
////    assert(ps);
////    free(ps->data);
////    ps->capacity = ps->top = 0;
////    ps->data = NULL;
////}
////void StackPush(Stack * ps, SDataType x)
////{
////    assert(ps);
////    if (ps->top == ps->capacity)
////    {
////        int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
////        SDataType* tmp = (SDataType*)realloc(ps->data, sizeof(SDataType) * newCapacity);
////        if (tmp == NULL)
////        {
////            perror("StackPush fail");
////            exit(-1);
////        }
////        ps->data = tmp;
////        ps->capacity = newCapacity;
////    }
////    ps->data[ps->top] = x;
////    ps->top++;
////}
////void StackPop(Stack * ps)
////{
////    assert(ps);
////    assert(ps->top > 0);
////    ps->top--;
////}
////SDataType StackTop(Stack * ps)
////{
////    assert(ps);
////    assert(ps->top > 0);
////    return ps->data[ps->top - 1];
////}
////bool StackEmpty(Stack * ps)
////{
////    assert(ps);
////    return ps->top == 0;
////}
////int StackSize(Stack * ps)
////{
////    assert(ps);
////    return ps->top;
////}
////typedef struct
////{
////    Stack push;
////    Stack pop;
////} MyQueue;
////
////
////MyQueue* myQueueCreate()
////{
////    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
////    StackInit(&obj->push);
////    StackInit(&obj->pop);
////    return obj;
////}
////
////void myQueuePush(MyQueue * obj, int x)
////{
////    StackPush(&obj->push, x);
////}
////
////int myQueuePeek(MyQueue * obj)
////{
////    if (StackEmpty(&obj->pop))
////    {
////        while (!StackEmpty(&obj->push))
////        {
////            StackPush(&obj->pop, StackTop(&obj->push));
////            StackPop(&obj->push);
////        }
////    }
////    return StackTop(&obj->pop);
////}
////int myQueuePop(MyQueue * obj)
////{
////
////    if (StackEmpty(&obj->pop))
////    {
////        while (!StackEmpty(&obj->push))
////        {
////            StackPush(&obj->pop, StackTop(&obj->push));
////            StackPop(&obj->push);
////        }
////    }
////    int front = StackTop(&obj->pop);
////    StackPop(&obj->pop);
////    return front;
////}
////bool myQueueEmpty(MyQueue * obj)
////{
////    return StackEmpty(&obj->push) && StackEmpty(&obj->pop);
////}
////
////void myQueueFree(MyQueue * obj)
////{
////    StackDestroy(&obj->push);
////    StackDestroy(&obj->pop);
////    free(obj);
////
////}
////
/////**
//// * Your MyQueue struct will be instantiated and called as such:
//// * MyQueue* obj = myQueueCreate();
//// * myQueuePush(obj, x);
////
//// * int param_2 = myQueuePop(obj);
////
//// * int param_3 = myQueuePeek(obj);
////
//// * bool param_4 = myQueueEmpty(obj);
////
//// * myQueueFree(obj);
////*/
////
//int dominantIndex(int* nums, int numsSize)
//{
//    if (numsSize == 1)
//    {
//        return 0;
//    }
//    int max = 0;
//    int count = numsSize;
//    int retur = 0;
//    while (--count)
//    {
//        if (nums[count] > max)
//        {
//            max = nums[count];
//            retur = count;
//        }
//    }
//    count = numsSize;
//    while (--count)
//    {
//        if (nums[count] * 2 > max && nums[count] != max)
//            return -1;
//    }
//    return retur;
//}
//int main()
//{
//    int nums[] = { 2,0,0,1 };
//    int numsSize = sizeof(nums) / sizeog(nums[0]);
//    int ret = dominantIndex(nums, numsSize);
//    printf("%d", ret);
//    return 0;
//}