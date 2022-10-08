<h2><a href="https://leetcode.com/problems/remove-all-ones-with-row-and-column-flips-ii/">2174. Remove All Ones With Row and Column Flips II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> <code style="user-select: auto;">m x n</code> <strong style="user-select: auto;">binary</strong> matrix <code style="user-select: auto;">grid</code>.</p>

<p style="user-select: auto;">In one operation, you can choose any <code style="user-select: auto;">i</code> and <code style="user-select: auto;">j</code> that meet the following conditions:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= i &lt; m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= j &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[i][j] == 1</code></li>
</ul>

<p style="user-select: auto;">and change the values of <strong style="user-select: auto;">all</strong> cells in row <code style="user-select: auto;">i</code> and column <code style="user-select: auto;">j</code> to zero.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> number of operations needed to remove all </em><code style="user-select: auto;">1</code><em style="user-select: auto;">'s from </em><code style="user-select: auto;">grid</code><em style="user-select: auto;">.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2022/02/13/image-20220213162716-1.png" style="width: 709px; height: 200px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,1,1],[1,1,1],[0,1,0]]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
In the first operation, change all cell values of row 1 and column 1 to zero.
In the second operation, change all cell values of row 0 and column 0 to zero.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img src="https://assets.leetcode.com/uploads/2022/02/13/image-20220213162737-2.png" style="width: 734px; height: 200px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[0,1,0],[1,0,1],[0,1,0]]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
In the first operation, change all cell values of row 1 and column 0 to zero.
In the second operation, change all cell values of row 2 and column 1 to zero.
Note that we cannot perform an operation using row 1 and column 1 because grid[1][1] != 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img src="https://assets.leetcode.com/uploads/2022/02/13/image-20220213162752-3.png" style="width: 156px; height: 150px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[0,0],[0,0]]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>
There are no 1's to remove so return 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 15</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m * n &lt;= 15</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[i][j]</code> is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
</ul>
</div>