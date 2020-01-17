# Data Structure

## Circular Queue

- **Circular queue is data structure that it complement the problem of linear queue**

  (원형 큐는 선형 큐의 문제점을 보완하기 위한 자료구조.)

  > → **Rear이 queue의 마지막 index를 가리키고 있는 경우, dequeue를 통해 발생한 array의 빈 공간을 활용하지 못하는 문제점.**
  >
  > ![image](https://user-images.githubusercontent.com/23169707/72610915-09aff880-396c-11ea-8196-68e98120b7be.png)


- **Features**

  1. **Enqueue**

     > ```c++
     > void Enqueu(int key)
     > {
     > 	if((rear+1)%array_size == front)
     >         cout << "Queue is full" << endl;
     >     else
     > 	{
     >         if(rear == MAX-1)
     >             rear = 0;
     >         else
     >             rear += 1;
     >  		que[rear] = key;
     >  	}
     > }
     > ```
     >
     > → Queue가 Full인지 확인하기 위해 array의 1칸을 비워둔다.
     >
     > → Modular(%) 연산을 활용하기 때문에, array의 빈 공간을 활용 가능.
  
  2. **Dequeue**
  
     > ```c++
     > void Dequeue()
     > {
     >  if(rear == front)
     >      cout << "Queue is empty" << endl;
     >  else
     >  {
     >      if(front == MAX-1)
     >          front = 0;
     >      else
     >          front = 1;
     >  }
     > }
     > ```
     >
     > → `front`와 `rear`를 활용하여 queue의 empty와 full을 확인 가능.
  
  
  
  
  
