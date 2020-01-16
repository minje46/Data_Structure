# Data Structure

## Queue

- **Queue is data structure that data is queued like a line.**
  

<br>

(큐는 줄을 서서 차례를 기다리는 형태의 자료구조.)

  > → **Queue는 FIFO(First In First Out) 형식으로 삽입된 순서대로 자료가 꺼내진다.**
  >
  > * Front : Queue의 맨 앞의 위치를 가리킨다.
  > * Rear : Queue의 맨 뒤의 위치를 가리킨다.
  > * Enqueue : Queue의 rear위치에 data를 저장한다.
  > * Dequeue : Queue에서 Front가 가리키는 data를 삭제한다.
  >
  > <img width="431" alt="Queue" src="https://user-images.githubusercontent.com/23169707/72507648-a187e680-3887-11ea-9d93-c883a4469610.png">


- **Features**

  1. FIFO(First In First Out)

     > → FIFO(First In First Out) 형식으로 삽입된 자료의 순서대로 꺼내진다.
     >
     > * Queue에 저장된 중간의 data는 알 수 없다.
     >
     >   > → Data search가 불가능.
     >   >
     
  2. Front & Rear
  
     > → Front와 Rear 2개의 index가 enqueue와 dequeue로 control되는 점을 유의.
     >
     > - Front
     >
     >   >→ Queue의 맨 앞 위치를 가리키며, dequeue가 이루어진다.
     >   >
     >   >`Queue underflow` : Queue가 empty라서 dequeue 불가능.
     >
     > - Rear
     >
     >   >→ Queue의 맨 뒤 위치를 가리키며, enqueue가 이루어진다.
     >   >
     >   >`Queue overflow` : Queue가 full이라서 enqueue 불가능.
  
  3. Linear structure(선형구조)
  
     > → Queue에 저장된 data는 linear structure를 가진다.
     >
     > * Linear structure
     >
     >   > → 자료 간의 관계가 1 : 1 관계를 가진다.
     >   > ex) array, list, stack, queue
     >
     > * Nonlinear structure
     >
     >   > → 자료 간의 관계가 1 : N의 관계를 가진다.
     >   > ex) Tree
- **Examples**

  > * BFS (Breadth First Search)
  >
  >   > → node를 접근한 순서대로 처리할 수 있기 때문에, node의 리스트를 queue에 저장.
  >
  > * Cache
  >
  > * Printer (프린터의 출력 처리)
  >
  > * Process controller (프로세스 관리)


- **Implemented**

  * Array

    > `Pros` : Implemented easily. (Front와 Rear의 index만 조정해주면 된다.)
    >
    > `Cons` : Memory waste. (Front에서 dequeue를 하면서 index가 조정되기 때문에, `rear==n-1` 일 때, queue가 full이 아닐 수 도 있다.)
    >
    > > Solution : **`circular queue`**
    >
    > ```c++
    > // Initialization
    > int front = rear = -1;
    > 
    > // Empty condition
    > if(front == -1 || front > rear)
    > ```
    >
    > → `front == rear`의 경우, `queue` 안에는 data가 존재할 수 있기 때문에, 
    > **`stack` 과는 다르게 index를 유의.**
    
  * List
  
    > `Pros` : Memory dynamic allocation. (저장소를 동적으로 할당.)
    >
    > `Cons` : Implement hard.
    >
    > ```c++
    > // Initialization
    > struct Node *front = rear = NULL;
    > 
    > // Empty condition
    > if(front == NULL)
    > ```
    >
    > → `front`는 dequeue 과정에서 `NULL`로 초기화 되기 때문에, `front` 값만 활용한다.
    > `rear`은 trash value가 저장될 수 있기때문에, access하지 않는다.


- **Time complexity.**

  > $$
  > O(1)
  > $$
  > → `front`와 `rear`를 통해 **enqueue, dequeue, empty, size** 모두 O(1)로 가능.
  > 
  >ex) **`size` = `rear` - `front`**