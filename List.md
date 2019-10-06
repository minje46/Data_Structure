# Data Structure

## List

- **List is data structure that manages sequentially without any gap between each others.**
  <br>

  (리스트는 데이터를 순차적으로 저장하고, 빈틈없이 데이터를 적재하는 장점을 취한 자료구조.)

  > → **List는 pointer를 사용해 sequential 저장하는 linear(선형) data structure.** (List에서 index는 **몇 번째의 data** 정도의 의미를 가진다.)
  >
  > > * Head : 처음 data를 가리키는 pointer.
  > > * next : 다음 list의 data를 가리키는 pointer.
  > > * Tail : 마지막 data를 가리키는 pointer.
  > >
  > > ![image](https://user-images.githubusercontent.com/23169707/66271184-106f9f80-e896-11e9-8d49-694187af74f3.png)
  >
  > * **Operation**
  >
  >   >→ **List가 가지고 있는 functions(기능).**
  >   >
  >   >- Insert : 처음, 중간, 끝에 element를 insert.
  >   >- Delete : 처음, 중간, 끝에 있는 element를 delete.
  >   >- Search : List에 data가 있는지 check.
  >   >- Access : List의 모든 data에 access.


- **Features**

  * Dynamic allocation

    > Pros : `Data를  동적으로 생성하고 관리할 수 있다.(Insert, delete가 easy.)`
    >
    > Cons : `Data의 갯수가 확실하게 정해져있고, 자주 사용된다면 array가 효율적.`
  
  * Unfixed size
  
    > Pros : `List는 unfixed size의 data를 관리하기 위해 사용한다. (Data structure의 size에 영향X.)`
    >
    > Cons : `Array에서 index가 value에 대한 유일무이한 식별자인 것과는 다르게, 순차성을 보장하지 못하기 때문에 spatial locality가  보장되지 않아 cache hit이 어렵다.`

  * **Memory utilization**

    > → **Empty element를 허용하지 않는다.**
  
- **Limits**

  * Low performance

    > * `Low speed`
    >   → Data search하는데 오랜 시간이 소요된다.				 
    >
    >   → Data의 갯수를 알기 위해서 N(data의 갯수)만큼 반복해서 count해야한다.
  
  * 


- **Time complexity.**

  > * Access & Search 
  >   $$
  >   O(N)
  >   $$
  >   → 연결된 pointer를 이용해서 data를 linear search해야 하기 때문.
  >