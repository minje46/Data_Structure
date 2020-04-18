# Data Structure

## List

- **List는 data를 순차적이고 빈틈없이 저장하기 위한 data structure.**
  
> <img width="312" alt="ls" src="https://user-images.githubusercontent.com/23169707/79630287-09054900-818b-11ea-8159-19971a45e427.png">
  >
> List는 **data:pointer** 형태를 가지며, pointer를 사용하여 **data를 sequential** 저장한다. 


- **Features**

  1. **`Pointer`**

     > * **sequential access** : pointer를 이용하여, 다음 data를 저장하기 때문에 data insert&delete가 쉽다.
     >
     > * **memory utilization** : empty element를 허용하지 않기 때문에, memory waste를 줄일 수 있다.
  
  2. **`Unfixed size`**
  
     > * **dynamic allocation** : memory를 동적으로 할당하여, data를 저장할 수 있다.
  
- **Limits**

  1. **`Pointer`**

     > * **memory waste** : data:pointer 구조를 가지고 있기 때문에, 다음 data를 저장하는 pointer라는 memory waste가 발생한다.
     > * **low speed** : data access를 하기 위해서 항상 linear search를 해야한다.
  
  2. **`cache hit`**
  
     > * **low performance** : data의 spatial locality를 보장하지 못하기 때문에, cache hit의 가능성이 낮다.


- **Time complexity.**

  > * **Data access & search**
  >   $$
  >   O(N)
  >   $$
  >   → 연결된 pointer를 이용해서 data를 linear search해야 하기 때문.
  >