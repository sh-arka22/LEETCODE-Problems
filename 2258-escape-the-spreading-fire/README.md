<h2><a href="https://leetcode.com/problems/escape-the-spreading-fire/">2258. Escape the Spreading Fire</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> 2D integer array <code style="user-select: auto;">grid</code> of size <code style="user-select: auto;">m x n</code> which represents a field. Each cell has one of three values:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0</code> represents grass,</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1</code> represents fire,</li>
	<li style="user-select: auto;"><code style="user-select: auto;">2</code> represents a wall that you and fire cannot pass through.</li>
</ul>

<p style="user-select: auto;">You are situated in the top-left cell, <code style="user-select: auto;">(0, 0)</code>, and you want to travel to the safehouse at the bottom-right cell, <code style="user-select: auto;">(m - 1, n - 1)</code>. Every minute, you may move to an <strong style="user-select: auto;">adjacent</strong> grass cell. <strong style="user-select: auto;">After</strong> your move, every fire cell will spread to all <strong style="user-select: auto;">adjacent</strong> cells that are not walls.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> number of minutes that you can stay in your initial position before moving while still safely reaching the safehouse</em>. If this is impossible, return <code style="user-select: auto;">-1</code>. If you can <strong style="user-select: auto;">always</strong> reach the safehouse regardless of the minutes stayed, return <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup></code>.</p>

<p style="user-select: auto;">Note that even if the fire spreads to the safehouse immediately after you have reached it, it will be counted as safely reaching the safehouse.</p>

<p style="user-select: auto;">A cell is <strong style="user-select: auto;">adjacent</strong> to another cell if the former is directly north, east, south, or west of the latter (i.e., their sides are touching).</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/10/ex1new.jpg" style="width: 650px; height: 404px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[0,2,0,0,0,0,0],[0,0,0,2,2,1,0],[0,2,0,0,1,2,0],[0,0,2,2,2,0,2],[0,0,0,0,0,0,0]]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The figure above shows the scenario where you stay in the initial position for 3 minutes.
You will still be able to safely reach the safehouse.
Staying for more than 3 minutes will not allow you to safely reach the safehouse.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/10/ex2new2.jpg" style="width: 515px; height: 150px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[0,0,0,0],[0,1,2,0],[0,2,0,0]]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> The figure above shows the scenario where you immediately move towards the safehouse.
Fire will spread to any cell you move towards and it is impossible to safely reach the safehouse.
Thus, -1 is returned.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/10/ex3new.jpg" style="width: 174px; height: 150px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[0,0,0],[2,2,0],[1,2,0]]
<strong style="user-select: auto;">Output:</strong> 1000000000
<strong style="user-select: auto;">Explanation:</strong> The figure above shows the initial grid.
Notice that the fire is contained by walls and you will always be able to safely reach the safehouse.
Thus, 10<sup style="user-select: auto;">9</sup> is returned.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= m, n &lt;= 300</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">4 &lt;= m * n &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[i][j]</code> is either <code style="user-select: auto;">0</code>, <code style="user-select: auto;">1</code>, or <code style="user-select: auto;">2</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[0][0] == grid[m - 1][n - 1] == 0</code></li>
</ul>
</div>