<h2><a href="https://leetcode.com/problems/smallest-rectangle-enclosing-black-pixels/">302. Smallest Rectangle Enclosing Black Pixels</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an <code style="user-select: auto;">m x n</code> binary matrix <code style="user-select: auto;">image</code> where <code style="user-select: auto;">0</code> represents a white pixel and <code style="user-select: auto;">1</code> represents a black pixel.</p>

<p style="user-select: auto;">The black pixels are connected (i.e., there is only one black region). Pixels are connected horizontally and vertically.</p>

<p style="user-select: auto;">Given two integers <code style="user-select: auto;">x</code> and <code style="user-select: auto;">y</code> that represents the location of one of the black pixels, return <em style="user-select: auto;">the area of the smallest (axis-aligned) rectangle that encloses all black pixels</em>.</p>

<p style="user-select: auto;">You must write an algorithm with less than <code style="user-select: auto;">O(mn)</code> runtime complexity</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/14/pixel-grid.jpg" style="width: 333px; height: 253px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> image = [["0","0","1","0"],["0","1","1","0"],["0","1","0","0"]], x = 0, y = 2
<strong style="user-select: auto;">Output:</strong> 6
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> image = [["1"]], x = 0, y = 0
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == image.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == image[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">image[i][j]</code> is either <code style="user-select: auto;">'0'</code> or <code style="user-select: auto;">'1'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= x &lt; m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= y &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">image[x][y] == '1'.</code></li>
	<li style="user-select: auto;">The black pixels in the <code style="user-select: auto;">image</code> only form <strong style="user-select: auto;">one component</strong>.</li>
</ul>
</div>