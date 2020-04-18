# Data Structure

## Queue

- **Queue는 data를 차례대로 linear search하는 형태의 data structure.**
  
  > <img width="250" alt="Queue" src="https://user-images.githubusercontent.com/23169707/72507648-a187e680-3887-11ea-9d93-c883a4469610.png">
  >
  > Queue는 **FIFO(First In First Out)**으로 inserted 순서로 pop된다.


- **Features**

  1. **`FIFO`**

     > * **data access** : inserted 순서에 따라, `front`를 통해 data에 접근할 수  있다.
     > * **linear structure** : data는 선형구조로 저장된다.
  
  2. **`front, rear`**
  
     > `front`와 `rear` index를 통해 **enqueu**와 **dequeue**.
     >
     > * **front** : queue의 head 가리키며, dequeue 수행.
     > * **rear** : queue의 tail을 가리키며, enqueue 수행.
- **Examples**

  > 1. **bfs(breadth first search)**
  >    → node를 접근한 순서대로 처리할 수 있기 때문에, node의 리스트를 queue에 저장.
  > 2. **cache**
  > 3. **printer** / **process controller**


- **Implemented**

  * **`array`**

    > * **pros** : implemented easily. 
    >
    > * **cons** : memory waste.
    >
    >   > dequeue를 수행할 때, index만 조정하기 때문. 
    >   >
    >   > * solution : **`circular queue`**
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
    
  * **`list`**
  
    > * **pros** : memory dynamic allocation.
    >* **cons** : implement hard.
    > 
    >```c++
    > // Initialization
    > struct Node *front = rear = NULL;
    > 
    > // Empty condition
    > if(front == NULL)
    > ```
    > 
    >→ `front`는 dequeue 과정에서 `NULL`로 초기화 되기 때문에, `front` 값만 활용한다.
    > `rear`은 trash value가 저장될 수 있기때문에, access하지 않는다.


- **Time complexity.**

  > $$
  > O(1)
  > $$
  > → `front`와 `rear`를 통해 **enqueue, dequeue, empty, size** 모두 O(1)로 가능.
  > 
  >ex) **`size` = `rear` - `front`**