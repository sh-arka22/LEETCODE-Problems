<h2><a href="https://leetcode.com/problems/paths-in-maze-that-lead-to-same-room/">2077. Paths in Maze That Lead to Same Room</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A maze consists of <code style="user-select: auto;">n</code> rooms numbered from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>, and some rooms are connected by corridors. You are given a 2D integer array <code style="user-select: auto;">corridors</code> where <code style="user-select: auto;">corridors[i] = [room1<sub style="user-select: auto;">i</sub>, room2<sub style="user-select: auto;">i</sub>]</code> indicates that there is a corridor connecting <code style="user-select: auto;">room1<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">room2<sub style="user-select: auto;">i</sub></code>, allowing a person in the maze to go from <code style="user-select: auto;">room1<sub style="user-select: auto;">i</sub></code> to <code style="user-select: auto;">room2<sub style="user-select: auto;">i</sub></code> <strong style="user-select: auto;">and vice versa</strong>.</p>

<p style="user-select: auto;">The designer of the maze wants to know how confusing the maze is. The <strong style="user-select: auto;">confusion</strong> <strong style="user-select: auto;">score</strong> of the maze is the number of different cycles of <strong style="user-select: auto;">length 3</strong>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">1 → 2 → 3 → 1</code> is a cycle of length 3, but <code style="user-select: auto;">1 → 2 → 3 → 4</code> and <code style="user-select: auto;">1 → 2 → 3 → 2 → 1</code> are not.</li>
</ul>

<p style="user-select: auto;">Two cycles are considered to be <strong style="user-select: auto;">different</strong> if one or more of the rooms visited in the first cycle is <strong style="user-select: auto;">not</strong> in the second cycle.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the</em> <em style="user-select: auto;"><strong style="user-select: auto;">confusion</strong><strong style="user-select: auto;"> score</strong> of the maze.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2021/11/14/image-20211114164827-1.png" style="width: 440px; height: 350px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5, corridors = [[1,2],[5,2],[4,1],[2,4],[3,1],[3,4]]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
One cycle of length 3 is 4 → 1 → 3 → 4, denoted in red.
Note that this is the same cycle as 3 → 4 → 1 → 3 or 1 → 3 → 4 → 1 because the rooms are the same.
Another cycle of length 3 is 1 → 2 → 4 → 1, denoted in blue.
Thus, there are two different cycles of length 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img src="https://assets.leetcode.com/uploads/2021/11/14/image-20211114164851-2.png" style="width: 329px; height: 250px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, corridors = [[1,2],[3,4]]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>
There are no cycles of length 3.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= corridors.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">corridors[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= room1<sub style="user-select: auto;">i</sub>, room2<sub style="user-select: auto;">i</sub> &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">room1<sub style="user-select: auto;">i</sub> != room2<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;">There are no duplicate corridors.</li>
</ul>
</div>