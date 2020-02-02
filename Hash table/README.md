# Data Structure

## Hash Table

- **Hash table is a data structure that stores pair of data and key mapped by hash function.** <br>(해쉬 테이블은 해쉬 함수로 만든 키와 데이터를 하나의 쌍으로 저장하는 자료구조.)

  > `hash function` : random size를 가진 data를 fixed size의 data로 변환시키는 것.
  >
  > `table(map)` : Data를 `key:value` type으로 저장하는 구조. (Key는 unique.) 
  >
  > <img width="353" alt="hs" src="https://user-images.githubusercontent.com/23169707/73607036-7f0ef200-4544-11ea-8f7b-9a0066846c7d.png">


- **Features**

  > `pros`  
  >
  > 1. 적은 resource로 많은 data를 효율적으로 관리.
  >2. `key:value` type으로 저장되어 있기 때문에, **unique key**를 통해 `O(1)` 속도로 data access.
  > 
  >`cons`
  > 
  >1. Hash function 의존도가 높다.
  > 2. 동일한 `key`를 가지는 **collision** 문제를 해결해야 한다.
  >
  > → **Open addressing : `linear probing` / `quadratic probing` / `double hashing`**
  >
  > → **Closed addressing : `chaining`**


- **Open addressing**

  > **Open addressing method는 collision이 발생하는 경우, 다른 자리에 대신 저장하는 방식.**
  >
  > `pros` : **저장공간을 추가할 필요가 없다.**
  >
  > `cons` : **Hash table state(`empty`, `delete`, `using`)을 저장해야 한다.**
  >
  > ​			→ collision 발생 후, data가 초기 hash key 값과 다른 위치에 저장되어 있는 것을 찾기 위함.
  >
  > **#1. `linear probing(선형 탐사)`**
  >
  > > → collision이 발생했을 때, 그 다음 위치의 empty space에 저장하는 방식.
  > >
  > > → Data가 clustering되어 있는 경우, 다음 empty space를 찾는 것이 overhead.
  > >
  > > ![image](https://user-images.githubusercontent.com/23169707/73607216-c0080600-4546-11ea-8333-cab14d582ca6.png)
  >
  > **#2. `quadratic probing(제곱 탐사)`**
  >
  > > → collision이 발생했을 때, 제곱 수의 폭으로 이동하여 empty space에 저장.
  > >
  > > → Data clustering의 문제가 완전히 해결되지 않는다.
  > >
  > > ![image](https://user-images.githubusercontent.com/23169707/73607218-ca2a0480-4546-11ea-962b-6cb26762f856.png)
  >
  > **#3. `double hashing`**
  >
  > > → collision이 발생했을 때, 불규칙한 hash를 통해 clustering을 방지하는 방식.
  > >
  > > → key를 mapping 하는`hash1(k) = key % N`에서 collision이 발생하면, `hash2(k) = 1 + (key % C)`을 통해 또 다른 key를 연산.

- **Closed addressing**

  > **Closed addressing method는 collision이 발생해도, 현재 위치에 저장하는 방식.**
  >
  > `pros` : **한정된 table을 효율적으로 사용 가능.**
  >
  > `cons` : **추가 저장 공간이 필요하며, 특정 hash 값에 쏠림 현상.**
  >
  > **`chaining`**
  >
  > > → collision이 발생했을 때, 추가로 memory를 생성하여 저장하는 방식.
  > >
  > > → 하나의 hash 값에 다수의 data를 저장할 수 있지만, data search를 위해 N개의 chaining을 모두 탐색해야한다.
  > >
  > > <img width="387" alt="ch" src="https://user-images.githubusercontent.com/23169707/73607447-6c4aec00-4549-11ea-97af-d1af57d5bef1.png">

* **Time complexity**

  > * Best case
  >   $$
  >   O(1)
  >   $$
  >   → **Hash key를 통해 data에 index access가 가능.**
  >
  > * Worst case
  >   $$
  >   O(N)
  >   $$
  >   → **collision 해결 방식에 따라, N개의 data를 탐색해야 할 수 도 있다.**