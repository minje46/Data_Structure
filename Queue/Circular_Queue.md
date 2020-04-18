# Data Structure

## Circular Queue

- **Circular queue(원형 큐)는 linear queue의 문제점을 보완하기 위한 data structure.**

  > <img width="250" alt="cq" src="https://user-images.githubusercontent.com/23169707/79638139-0290c480-81bf-11ea-9a3b-4cd955093a71.png">
>
  > Circular queue는 linear queue의 memory waste를 해결하기 위해 front와 rear를 circular 조정.


- **Implemented**

  * **`Enqueue`**

    > ```c++
    > void Enqueu(int key)
    > {
    > 	if((rear+1)%array_size == front)
    >      cout << "Queue is full" << endl;
    >  else
    > 	{
    >      if(rear == MAX-1)
    >          rear = 0;
    >      else
    >          rear += 1;
    > 		que[rear] = key;
    > 	}
    > }
    > ```
    >
    > → Queue가 Full인지 확인하기 위해 array의 1칸을 비워둔다.
    >
    > → Modular(%) 연산을 활용하기 때문에, array의 빈 공간을 활용 가능.
  
  * **`Dequeue`**
  
    > ```c++
    > void Dequeue()
    > {
    > if(rear == front)
    >   cout << "Queue is empty" << endl;
    > else
    > {
    >   if(front == MAX-1)
    >       front = 0;
    >   else
    >       front = 1;
    > }
    > }
    > ```
    >
    > → `front`와 `rear`를 활용하여 queue의 empty와 full을 확인 가능.
  
  
  
