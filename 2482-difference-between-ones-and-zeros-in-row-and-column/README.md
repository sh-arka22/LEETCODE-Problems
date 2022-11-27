<h2><a href="https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/">2482. Difference Between Ones and Zeros in Row and Column</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> <code style="user-select: auto;">m x n</code> binary matrix <code style="user-select: auto;">grid</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">0-indexed</strong> <code style="user-select: auto;">m x n</code> difference matrix <code style="user-select: auto;">diff</code> is created with the following procedure:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Let the number of ones in the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> row be <code style="user-select: auto;">onesRow<sub style="user-select: auto;">i</sub></code>.</li>
	<li style="user-select: auto;">Let the number of ones in the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> column be <code style="user-select: auto;">onesCol<sub style="user-select: auto;">j</sub></code>.</li>
	<li style="user-select: auto;">Let the number of zeros in the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> row be <code style="user-select: auto;">zerosRow<sub style="user-select: auto;">i</sub></code>.</li>
	<li style="user-select: auto;">Let the number of zeros in the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> column be <code style="user-select: auto;">zerosCol<sub style="user-select: auto;">j</sub></code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">diff[i][j] = onesRow<sub style="user-select: auto;">i</sub> + onesCol<sub style="user-select: auto;">j</sub> - zerosRow<sub style="user-select: auto;">i</sub> - zerosCol<sub style="user-select: auto;">j</sub></code></li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the difference matrix </em><code style="user-select: auto;">diff</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2022/11/06/image-20221106171729-5.png" style="width: 400px; height: 208px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[0,1,1],[1,0,1],[0,0,1]]
<strong style="user-select: auto;">Output:</strong> [[0,0,4],[0,0,4],[-2,-2,2]]
<strong style="user-select: auto;">Explanation:</strong>
- diff[0][0] = <code style="user-select: auto;">onesRow<sub style="user-select: auto;">0</sub> + onesCol<sub style="user-select: auto;">0</sub> - zerosRow<sub style="user-select: auto;">0</sub> - zerosCol<sub style="user-select: auto;">0</sub></code> = 2 + 1 - 1 - 2 = 0 
- diff[0][1] = <code style="user-select: auto;">onesRow<sub style="user-select: auto;">0</sub> + onesCol<sub style="user-select: auto;">1</sub> - zerosRow<sub style="user-select: auto;">0</sub> - zerosCol<sub style="user-select: auto;">1</sub></code> = 2 + 1 - 1 - 2 = 0 
- diff[0][2] = <code style="user-select: auto;">onesRow<sub style="user-select: auto;">0</sub> + onesCol<sub style="user-select: auto;">2</sub> - zerosRow<sub style="user-select: auto;">0</sub> - zerosCol<sub style="user-select: auto;">2</sub></code> = 2 + 3 - 1 - 0 = 4 
- diff[1][0] = <code style="user-select: auto;">onesRow<sub style="user-select: auto;">1</sub> + onesCol<sub style="user-select: auto;">0</sub> - zerosRow<sub style="user-select: auto;">1</sub> - zerosCol<sub style="user-select: auto;">0</sub></code> = 2 + 1 - 1 - 2 = 0 
- diff[1][1] = <code style="user-select: auto;">onesRow<sub style="user-select: auto;">1</sub> + onesCol<sub style="user-select: auto;">1</sub> - zerosRow<sub style="user-select: auto;">1</sub> - zerosCol<sub style="user-select: auto;">1</sub></code> = 2 + 1 - 1 - 2 = 0 
- diff[1][2] = <code style="user-select: auto;">onesRow<sub style="user-select: auto;">1</sub> + onesCol<sub style="user-select: auto;">2</sub> - zerosRow<sub style="user-select: auto;">1</sub> - zerosCol<sub style="user-select: auto;">2</sub></code> = 2 + 3 - 1 - 0 = 4 
- diff[2][0] = <code style="user-select: auto;">onesRow<sub style="user-select: auto;">2</sub> + onesCol<sub style="user-select: auto;">0</sub> - zerosRow<sub style="user-select: auto;">2</sub> - zerosCol<sub style="user-select: auto;">0</sub></code> = 1 + 1 - 2 - 2 = -2
- diff[2][1] = <code style="user-select: auto;">onesRow<sub style="user-select: auto;">2</sub> + onesCol<sub style="user-select: auto;">1</sub> - zerosRow<sub style="user-select: auto;">2</sub> - zerosCol<sub style="user-select: auto;">1</sub></code> = 1 + 1 - 2 - 2 = -2
- diff[2][2] = <code style="user-select: auto;">onesRow<sub style="user-select: auto;">2</sub> + onesCol<sub style="user-select: auto;">2</sub> - zerosRow<sub style="user-select: auto;">2</sub> - zerosCol<sub style="user-select: auto;">2</sub></code> = 1 + 3 - 2 - 0 = 2
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img src="https://assets.leetcode.com/uploads/2022/11/06/image-20221106171747-6.png" style="width: 358px; height: 150px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,1,1],[1,1,1]]
<strong style="user-select: auto;">Output:</strong> [[5,5,5],[5,5,5]]
<strong style="user-select: auto;">Explanation:</strong>
- diff[0][0] = onesRow<sub style="user-select: auto;">0</sub> + onesCol<sub style="user-select: auto;">0</sub> - zerosRow<sub style="user-select: auto;">0</sub> - zerosCol<sub style="user-select: auto;">0</sub> = 3 + 2 - 0 - 0 = 5
- diff[0][1] = onesRow<sub style="user-select: auto;">0</sub> + onesCol<sub style="user-select: auto;">1</sub> - zerosRow<sub style="user-select: auto;">0</sub> - zerosCol<sub style="user-select: auto;">1</sub> = 3 + 2 - 0 - 0 = 5
- diff[0][2] = onesRow<sub style="user-select: auto;">0</sub> + onesCol<sub style="user-select: auto;">2</sub> - zerosRow<sub style="user-select: auto;">0</sub> - zerosCol<sub style="user-select: auto;">2</sub> = 3 + 2 - 0 - 0 = 5
- diff[1][0] = onesRow<sub style="user-select: auto;">1</sub> + onesCol<sub style="user-select: auto;">0</sub> - zerosRow<sub style="user-select: auto;">1</sub> - zerosCol<sub style="user-select: auto;">0</sub> = 3 + 2 - 0 - 0 = 5
- diff[1][1] = onesRow<sub style="user-select: auto;">1</sub> + onesCol<sub style="user-select: auto;">1</sub> - zerosRow<sub style="user-select: auto;">1</sub> - zerosCol<sub style="user-select: auto;">1</sub> = 3 + 2 - 0 - 0 = 5
- diff[1][2] = onesRow<sub style="user-select: auto;">1</sub> + onesCol<sub style="user-select: auto;">2</sub> - zerosRow<sub style="user-select: auto;">1</sub> - zerosCol<sub style="user-select: auto;">2</sub> = 3 + 2 - 0 - 0 = 5
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m * n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[i][j]</code> is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
</ul>
</div>