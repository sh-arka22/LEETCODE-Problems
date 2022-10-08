<h2><a href="https://leetcode.com/problems/minimum-number-of-flips-to-convert-binary-matrix-to-zero-matrix/">1284. Minimum Number of Flips to Convert Binary Matrix to Zero Matrix</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a <code style="user-select: auto;">m x n</code> binary matrix <code style="user-select: auto;">mat</code>. In one step, you can choose one cell and flip it and all the four neighbors of it if they exist (Flip is changing <code style="user-select: auto;">1</code> to <code style="user-select: auto;">0</code> and <code style="user-select: auto;">0</code> to <code style="user-select: auto;">1</code>). A pair of cells are called neighbors if they share one edge.</p>

<p style="user-select: auto;">Return the <em style="user-select: auto;">minimum number of steps</em> required to convert <code style="user-select: auto;">mat</code> to a zero matrix or <code style="user-select: auto;">-1</code> if you cannot.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">binary matrix</strong> is a matrix with all cells equal to <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code> only.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">zero matrix</strong> is a matrix with all cells equal to <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/28/matrix.png" style="width: 409px; height: 86px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[0,0],[0,1]]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> One possible solution is to flip (1, 0) then (0, 1) and finally (1, 1) as shown.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[0]]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> Given matrix is a zero matrix. We do not need to change it.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[1,0,0],[1,0,0]]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> Given matrix cannot be a zero matrix.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == mat.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == mat[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">mat[i][j]</code> is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
</ul>
</div>