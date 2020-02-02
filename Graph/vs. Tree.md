# Data Structure

## vs. Tree

<img width="422" alt="gr" src="https://user-images.githubusercontent.com/23169707/73608895-8a792080-460b-11ea-8adb-8fefde1a6c4d.png">

- **`graph`**
  
  > **`Definition`** : graph는 vertex와 edge를 통해 데이터(객체간의 관계)를 표현하는 자료구조.
  >
  > **`Direction(방향성)`** : `directed` / `undirected` 모두 존재.
  >
  > **`Cycle`** : `cycle` / `Acycle` 모두 존재.
  >
  > **`Root node`** : Root node라는 개념 X.
  >
  > **`Parent-Child`** : Parent-children node의 개념 X.
  >
  > **`Model`** : `Network model`.  
  >
  > **`Traverse`** : `DFS` / `BFS`
  >
  > **`Edges`** : Graph에 따라 edge의 수가 다르다. (Edge가 없을 수도 있다.)
  >
  > **`Examples`** :  map, subway path, highway.
- **`tree`**

  > **`Definition`** : tree는 계층적 관계를 표현하는 비선형 자료구조. (DAG 의 한 종류)
  >
  > **`Direction(방향성)`** : `directed` 
  >
  > **`Cycle`** : `Acycle` 모두 존재.
  >
  > **`Root node`** : 한 개의 root node 존재.
  >
  > **`Parent-Child`** : `top-bottom` 관계.
  >
  > **`Model`** : `Hierarchical model`.  
  >
  > **`Traverse`** : `Pre-order` / `In-order` / `Post-order`
  >
  > **`Edges`** : `N-1` 개의 간선. (N개의 node.)
  >
  > **`Examples`** :  binary tree, AVL tree, Heap.
