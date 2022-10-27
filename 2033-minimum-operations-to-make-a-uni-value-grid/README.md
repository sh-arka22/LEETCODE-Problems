<h2><a href="https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/">2033. Minimum Operations to Make a Uni-Value Grid</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a 2D integer <code style="user-select: auto;">grid</code> of size <code style="user-select: auto;">m x n</code> and an integer <code style="user-select: auto;">x</code>. In one operation, you can <strong style="user-select: auto;">add</strong> <code style="user-select: auto;">x</code> to or <strong style="user-select: auto;">subtract</strong> <code style="user-select: auto;">x</code> from any element in the <code style="user-select: auto;">grid</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">uni-value grid</strong> is a grid where all the elements of it are equal.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> number of operations to make the grid <strong style="user-select: auto;">uni-value</strong></em>. If it is not possible, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/09/21/gridtxt.png" style="width: 164px; height: 165px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[2,4],[6,8]], x = 2
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> We can make every element equal to 4 by doing the following: 
- Add x to 2 once.
- Subtract x from 6 once.
- Subtract x from 8 twice.
A total of 4 operations were used.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/09/21/gridtxt-1.png" style="width: 164px; height: 165px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,5],[2,3]], x = 1
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> We can make every element equal to 3.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/09/21/gridtxt-2.png" style="width: 164px; height: 165px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,2],[3,4]], x = 2
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> It is impossible to make every element equal.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m * n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= x, grid[i][j] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>