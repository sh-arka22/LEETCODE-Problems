<h2><a href="https://leetcode.com/problems/find-a-peak-element-ii/">1901. Find a Peak Element II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">peak</strong> element in a 2D grid is an element that is <strong style="user-select: auto;">strictly greater</strong> than all of its <strong style="user-select: auto;">adjacent </strong>neighbors to the left, right, top, and bottom.</p>

<p style="user-select: auto;">Given a <strong style="user-select: auto;">0-indexed</strong> <code style="user-select: auto;">m x n</code> matrix <code style="user-select: auto;">mat</code> where <strong style="user-select: auto;">no two adjacent cells are equal</strong>, find <strong style="user-select: auto;">any</strong> peak element <code style="user-select: auto;">mat[i][j]</code> and return <em style="user-select: auto;">the length 2 array </em><code style="user-select: auto;">[i,j]</code>.</p>

<p style="user-select: auto;">You may assume that the entire matrix is surrounded by an <strong style="user-select: auto;">outer perimeter</strong> with the value <code style="user-select: auto;">-1</code> in each cell.</p>

<p style="user-select: auto;">You must write an algorithm that runs in <code style="user-select: auto;">O(m log(n))</code> or <code style="user-select: auto;">O(n log(m))</code> time.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2021/06/08/1.png" style="width: 206px; height: 209px; user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[1,4],[3,2]]
<strong style="user-select: auto;">Output:</strong> [0,1]
<strong style="user-select: auto;">Explanation:</strong>&nbsp;Both 3 and 4 are peak elements so [1,0] and [0,1] are both acceptable answers.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2021/06/07/3.png" style="width: 254px; height: 257px; user-select: auto;"></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> mat = [[10,20,15],[21,30,14],[7,16,32]]
<strong style="user-select: auto;">Output:</strong> [1,1]
<strong style="user-select: auto;">Explanation:</strong>&nbsp;Both 30 and 32 are peak elements so [1,1] and [2,2] are both acceptable answers.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == mat.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == mat[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= mat[i][j] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;">No two adjacent cells are equal.</li>
</ul>
</div>