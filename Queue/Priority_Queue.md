# Data Structure

## Priority Queue

- **Priority queue is data structure that high-priority data comes first.**

  (우선 순위 큐는 우선 순위가 높은 데이터가 먼저 나오는 자료구조.)

  > → **Priority queue는 비선형 자료구조. (Heap 구현)**
  >
  > > Queue는 선형 자료구조. (Array or List 구현)

* **Examples**

  > * Network traffic control.
  > * OS scheduler.
  > * Simulation system.

* **Implemented**

  * Array

    >`pros` : index를 통해 빠른 접근 가능.
    >
    >`cons` 
    >
    >	1. Priority를 비교하기 위해 모든 data들과 비교해야 한다.
    > 	2. Data의 insert & delete를 위해 모든 data를 이동시키는 overhead 발생.
    >
    >$$
    >O(N)
    >$$
    >
    >→ **Array 내부의 모든 data와 비교 연산 : `O(n)`**
    >
    >→ **Array 내부의 모든 data 이동 : `O(n)`**

  * List

    > `cons` : Priority를 비교하기 위해 list의 모든 node를 비교해야 한다.
    > $$
    > O(N)
    > $$
    > → **List의 처음 ~ 마지막node까지 비교 연산 : `O(n)`**

  * Heap

    > `pros` : Each level의 parent node만 비교하면 된다.
    >
    > `cons` : Array 와 List의 경우, data delete의 시간 복잡도는 `O(1)` 인 반면에, Heap은 재구성이 필요하기 때문에 `O(log N)`.
    > $$
    > O(log N)
    > $$
    > → **Complete binary tree의 높이만큼만 비교 연산 : `O(log N)`**

