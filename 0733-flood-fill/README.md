<h2><a href="https://leetcode.com/problems/flood-fill/">733. Flood Fill</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">An image is represented by an <code style="user-select: auto;">m x n</code> integer grid <code style="user-select: auto;">image</code> where <code style="user-select: auto;">image[i][j]</code> represents the pixel value of the image.</p>

<p style="user-select: auto;">You are also given three integers <code style="user-select: auto;">sr</code>, <code style="user-select: auto;">sc</code>, and <code style="user-select: auto;">color</code>. You should perform a <strong style="user-select: auto;">flood fill</strong> on the image starting from the pixel <code style="user-select: auto;">image[sr][sc]</code>.</p>

<p style="user-select: auto;">To perform a <strong style="user-select: auto;">flood fill</strong>, consider the starting pixel, plus any pixels connected <strong style="user-select: auto;">4-directionally</strong> to the starting pixel of the same color as the starting pixel, plus any pixels connected <strong style="user-select: auto;">4-directionally</strong> to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with <code style="user-select: auto;">color</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the modified image after performing the flood fill</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/01/flood1-grid.jpg" style="width: 613px; height: 253px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2
<strong style="user-select: auto;">Output:</strong> [[2,2,2],[2,2,0],[2,0,1]]
<strong style="user-select: auto;">Explanation:</strong> From the center of the image with position (sr, sc) = (1, 1) (i.e., the red pixel), all pixels connected by a path of the same color as the starting pixel (i.e., the blue pixels) are colored with the new color.
Note the bottom corner is not colored 2, because it is not 4-directionally connected to the starting pixel.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> image = [[0,0,0],[0,0,0]], sr = 0, sc = 0, color = 0
<strong style="user-select: auto;">Output:</strong> [[0,0,0],[0,0,0]]
<strong style="user-select: auto;">Explanation:</strong> The starting pixel is already colored 0, so no changes are made to the image.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == image.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == image[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= image[i][j], color &lt; 2<sup style="user-select: auto;">16</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= sr &lt; m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= sc &lt; n</code></li>
</ul>
</div>