# Data Structure

## Vector

- **Vector is data structure that allows data to be inserted and deleted back.**
  (벡터는 뒤로 자료를 삽입하고 삭제가 가능한 형태의 자료구조.)

  > → **vector는 dynamic array로 구현.**
  >
  > - `capacity()` : `vector`의 size를 확인할 수 있는 member function.
  >
  > ![image](https://user-images.githubusercontent.com/23169707/72664140-a8585a00-3a3d-11ea-8276-30a9007d86da.png)


- **Features**
  
2. Memory allocation
  
     > → **vector**는 fixed size의 array에 data를 저장하며, data가 지속적으로 추가되면 memory reallocation이 이루어진다.
     >
     > - Fixed size의 array를 할당.
     >
     > - Threshold 초과시, new_size의 array를 할당.
     >
     >   > new_size = previous_capacity + (previous_capacity / 2)
     >
     > - 기존의 array의 data를 new_array에 copy.
     >
     > - 기존의 array delete.
     
  2. Speed
  
     > `pros` : **vector**에 저장된 마지막 data에 access, insert, delete 속도가 빠르다.
     >
     > (Sequence container의 다른 자료구조들에 비해 가장 빠르다.)
     >
     > 
     >
     > `cons` : **vector**에 저장된 다른 위치의 data에 access, insert, delete 속도가 느리다.
  
  3. Random access
  
     > → **deque**는 sequence container이며, array 기반 container이다.
     > 그래서 **vector**와 유사한 특징을 가지며, random access iterator를 지원한다.
     >
     > <img width="209" alt="Random_access" src="https://user-images.githubusercontent.com/23169707/72624627-a71a2500-398a-11ea-9200-cc8f2981f6bc.png">
     >
     > `Random Access` : 특정 위치로 directly access 가능한 것을 말한다.
  
  4. Linear structure(선형구조)
  
     > → vector 에 저장된 data는 linear structure를 가진다.
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


- **Time complexity.**

  > $$
  > O(1)
  > $$
  > → **index**를 통해 direct access 가능하기 때문.
  >
