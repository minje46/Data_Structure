# Data Structure

## Dynamic Array <Array List & Vector>	

- **Dynamic array is a data structure that implements the list using an internal array.**
  <br>

  (동적 배열은 내부적인 배열을 이용하여 리스트를 구현한 자료구조.)

  > <img width="505" alt="Dynamic_Array" src="https://user-images.githubusercontent.com/23169707/67666074-5b209b00-f9ae-11e9-8136-fe65c872bbf8.png">
  >
  > → **Array처럼 data를 하나의 연속적인 묶음으로 저장하고 있기 때문에, index를 이용하여 direct access 가능.**
  >
  > > ![image](https://user-images.githubusercontent.com/23169707/66317742-0d87b400-e955-11e9-8ec8-7099975a8677.png)
  >
  > → **List의 data structure를 가지고 있기 때문에 Insert와 Delete는 overhead.**
  >
  > > <img width="473" alt="Array_list" src="https://user-images.githubusercontent.com/23169707/66318458-4e33fd00-e956-11e9-99da-01af57b78b2b.png">
  >
  > * **Operation**
  >
  >   > → **List가 가지고 있는 functions(기능).**
  >   >
  >   > - Insert : 처음, 중간, 끝에 element를 insert.
  >   > - Delete : 처음, 중간, 끝에 있는 element를 delete.
  >   > - Search : List에 data가 있는지 check.
  >   > - Copy : temporary array에 data를 copy한다. (For insert)


- **Features**

  * Index

    > Pros : `Random access 가능하여, data 검색에 유리.`
    
  * Dynamic allocation
  
    > Pros : `Array와는 다르게 size를 dynamic allocation할 수 있다.`
    >
    > Cons : `Inefficient.`
  
- **Limits**

  * Insert & Delete

    > * `overhead` 
    >   1. 중간에 data를 insert할 경우, 순차적인 구조를 유지하기 위해 모든 data를 right shift 연산 필요.
    >   2. Array list는 순차적인 index  구조를 갖기 때문에, empty space를 제거하기 위해 left shift 연산이 필요. 
  


- **Time complexity.**

  > * Indexing
  >   $$
  >   O(1)
  >   $$
  >   → Index를 이용하여 direct access가 가능하기 때문.
  > * Insert & Delete *at beginning* & *in middle*
  >   $$
  >   O(N)
  >   $$
  >   → 기존의 data를 shift해야 하기 때문.
  >
  > * Insert & Delete *at end*
  >   $$
  >   O(1)
  >   $$
  >   → Data의 shift가 불필요하기 때문.