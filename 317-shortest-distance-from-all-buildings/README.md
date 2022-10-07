<h2><a href="https://leetcode.com/problems/shortest-distance-from-all-buildings/">317. Shortest Distance from All Buildings</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an <code style="user-select: auto;">m x n</code> grid <code style="user-select: auto;">grid</code> of values <code style="user-select: auto;">0</code>, <code style="user-select: auto;">1</code>, or <code style="user-select: auto;">2</code>, where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">each <code style="user-select: auto;">0</code> marks <strong style="user-select: auto;">an empty land</strong> that you can pass by freely,</li>
	<li style="user-select: auto;">each <code style="user-select: auto;">1</code> marks <strong style="user-select: auto;">a building</strong> that you cannot pass through, and</li>
	<li style="user-select: auto;">each <code style="user-select: auto;">2</code> marks <strong style="user-select: auto;">an obstacle</strong> that you cannot pass through.</li>
</ul>

<p style="user-select: auto;">You want to build a house on an empty land that reaches all buildings in the <strong style="user-select: auto;">shortest total travel</strong> distance. You can only move up, down, left, and right.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">shortest travel distance</strong> for such a house</em>. If it is not possible to build such a house according to the above rules, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">total travel distance</strong> is the sum of the distances between the houses of the friends and the meeting point.</p>

<p style="user-select: auto;">The distance is calculated using <a href="http://en.wikipedia.org/wiki/Taxicab_geometry" target="_blank" style="user-select: auto;">Manhattan Distance</a>, where <code style="user-select: auto;">distance(p1, p2) = |p2.x - p1.x| + |p2.y - p1.y|</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/14/buildings-grid.jpg" style="width: 413px; height: 253px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,0,2,0,1],[0,0,0,0,0],[0,0,1,0,0]]
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> Given three buildings at (0,0), (0,4), (2,2), and an obstacle at (0,2).The point (1,2) is an ideal empty land to build a house, as the total travel distance of 3+3+1=7 is minimal.So return 7.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,0]]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1]]
<strong style="user-select: auto;">Output:</strong> -1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[i][j]</code> is either <code style="user-select: auto;">0</code>, <code style="user-select: auto;">1</code>, or <code style="user-select: auto;">2</code>.</li>
	<li style="user-select: auto;">There will be <strong style="user-select: auto;">at least one</strong> building in the <code style="user-select: auto;">grid</code>.</li>
</ul>
</div>