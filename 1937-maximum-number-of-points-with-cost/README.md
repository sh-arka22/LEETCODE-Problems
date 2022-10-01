<h2><a href="https://leetcode.com/problems/maximum-number-of-points-with-cost/">1937. Maximum Number of Points with Cost</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an <code style="user-select: auto;">m x n</code> integer matrix <code style="user-select: auto;">points</code> (<strong style="user-select: auto;">0-indexed</strong>). Starting with <code style="user-select: auto;">0</code> points, you want to <strong style="user-select: auto;">maximize</strong> the number of points you can get from the matrix.</p>

<p style="user-select: auto;">To gain points, you must pick one cell in <strong style="user-select: auto;">each row</strong>. Picking the cell at coordinates <code style="user-select: auto;">(r, c)</code> will <strong style="user-select: auto;">add</strong> <code style="user-select: auto;">points[r][c]</code> to your score.</p>

<p style="user-select: auto;">However, you will lose points if you pick a cell too far from the cell that you picked in the previous row. For every two adjacent rows <code style="user-select: auto;">r</code> and <code style="user-select: auto;">r + 1</code> (where <code style="user-select: auto;">0 &lt;= r &lt; m - 1</code>), picking cells at coordinates <code style="user-select: auto;">(r, c<sub style="user-select: auto;">1</sub>)</code> and <code style="user-select: auto;">(r + 1, c<sub style="user-select: auto;">2</sub>)</code> will <strong style="user-select: auto;">subtract</strong> <code style="user-select: auto;">abs(c<sub style="user-select: auto;">1</sub> - c<sub style="user-select: auto;">2</sub>)</code> from your score.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> number of points you can achieve</em>.</p>

<p style="user-select: auto;"><code style="user-select: auto;">abs(x)</code> is defined as:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">x</code> for <code style="user-select: auto;">x &gt;= 0</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-x</code> for <code style="user-select: auto;">x &lt; 0</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong><strong style="user-select: auto;"> </strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/12/screenshot-2021-07-12-at-13-40-26-diagram-drawio-diagrams-net.png" style="width: 300px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[1,2,3],[1,5,1],[3,1,1]]
<strong style="user-select: auto;">Output:</strong> 9
<strong style="user-select: auto;">Explanation:</strong>
The blue cells denote the optimal cells to pick, which have coordinates (0, 2), (1, 1), and (2, 0).
You add 3 + 5 + 3 = 11 to your score.
However, you must subtract abs(2 - 1) + abs(1 - 0) = 2 from your score.
Your final score is 11 - 2 = 9.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/12/screenshot-2021-07-12-at-13-42-14-diagram-drawio-diagrams-net.png" style="width: 200px; height: 299px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[1,5],[2,3],[4,2]]
<strong style="user-select: auto;">Output:</strong> 11
<strong style="user-select: auto;">Explanation:</strong>
The blue cells denote the optimal cells to pick, which have coordinates (0, 1), (1, 1), and (2, 0).
You add 5 + 3 + 4 = 12 to your score.
However, you must subtract abs(1 - 1) + abs(1 - 0) = 1 from your score.
Your final score is 12 - 1 = 11.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == points.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == points[r].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m * n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= points[r][c] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>