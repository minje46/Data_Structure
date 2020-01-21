# Data Structure

## Monotone Priority Queue

- **In computer science, a monotone priority queue is a variant of the priority queue abstract data type in which the priorities of extracted items are required to form a monotonic sequence. 
That is, for a priority queue in which each successively extracted item is the one with the minimum priority (a min-heap), the minimum priority should be monotonically increasing. 
  Conversely for a max-heap the maximum priority should be monotonically decreasing. 
The assumption of monotonicity arises naturally in several applications of priority queues, and can be used as a simplifying assumption to speed up certain types of priority queues.
  A necessary and sufficient condition on a monotone priority queue is that one never attempts to add an element with lower priority than the most recently extracted one.**
  
  > **Monotone priority queue는 priority queue에서 추출한 data가 monotonic sequence 형태를 갖도록하는 변형된 priority queue.**
  >
  > ​	→ **priority queue에서 연속적으로 추출한 data가 min heap일 경우, minimum priority(최소 우선순위)가 monotonically increase 해야 한다.**
  >
  > ​	→ **max heap의 경우, maximum priority가 monotonically decrease 해야한다.**
