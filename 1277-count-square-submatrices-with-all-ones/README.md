<h2><a href="https://leetcode.com/problems/count-square-submatrices-with-all-ones/">1277. Count Square Submatrices with All Ones</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a <code style="user-select: auto;">m * n</code> matrix of ones and zeros, return how many <strong style="user-select: auto;">square</strong> submatrices have all ones.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix =
[
&nbsp; [0,1,1,1],
&nbsp; [1,1,1,1],
&nbsp; [0,1,1,1]
]
<strong style="user-select: auto;">Output:</strong> 15
<strong style="user-select: auto;">Explanation:</strong> 
There are <strong style="user-select: auto;">10</strong> squares of side 1.
There are <strong style="user-select: auto;">4</strong> squares of side 2.
There is  <strong style="user-select: auto;">1</strong> square of side 3.
Total number of squares = 10 + 4 + 1 = <strong style="user-select: auto;">15</strong>.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matrix = 
[
  [1,0,1],
  [1,1,0],
  [1,1,0]
]
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> 
There are <b style="user-select: auto;">6</b> squares of side 1.  
There is <strong style="user-select: auto;">1</strong> square of side 2. 
Total number of squares = 6 + 1 = <b style="user-select: auto;">7</b>.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length&nbsp;&lt;= 300</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr[0].length&nbsp;&lt;= 300</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= arr[i][j] &lt;= 1</code></li>
</ul>
</div>