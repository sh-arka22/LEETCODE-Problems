<h2><a href="https://leetcode.com/problems/making-a-large-island/">827. Making A Large Island</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an <code style="user-select: auto;">n x n</code> binary matrix <code style="user-select: auto;">grid</code>. You are allowed to change <strong style="user-select: auto;">at most one</strong> <code style="user-select: auto;">0</code> to be <code style="user-select: auto;">1</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the size of the largest <strong style="user-select: auto;">island</strong> in</em> <code style="user-select: auto;">grid</code> <em style="user-select: auto;">after applying this operation</em>.</p>

<p style="user-select: auto;">An <strong style="user-select: auto;">island</strong> is a 4-directionally connected group of <code style="user-select: auto;">1</code>s.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,0],[0,1]]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Change one 0 to 1 and connect two 1s, then we get an island with area = 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,1],[1,0]]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation: </strong>Change the 0 to 1 and make the island bigger, only one island with area = 4.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,1],[1,1]]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> Can't change any 0 to 1, only one island with area = 4.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[i][j]</code> is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
</ul></div>