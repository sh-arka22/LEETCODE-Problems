<h2><a href="https://leetcode.com/problems/minimum-knight-moves/">1197. Minimum Knight Moves</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">In an <strong style="user-select: auto;">infinite</strong> chess board with coordinates from <code style="user-select: auto;">-infinity</code> to <code style="user-select: auto;">+infinity</code>, you have a <strong style="user-select: auto;">knight</strong> at square <code style="user-select: auto;">[0, 0]</code>.</p>

<p style="user-select: auto;">A knight has 8 possible moves it can make, as illustrated below. Each move is two squares in a cardinal direction, then one square in an orthogonal direction.</p>
<img src="https://assets.leetcode.com/uploads/2018/10/12/knight.png" style="height: 250px; width: 250px; user-select: auto;">
<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of steps needed to move the knight to the square</em> <code style="user-select: auto;">[x, y]</code>. It is guaranteed the answer exists.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> x = 2, y = 1
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation: </strong>[0, 0] → [2, 1]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> x = 5, y = 5
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation: </strong>[0, 0] → [2, 1] → [4, 2] → [3, 4] → [5, 5]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">-300 &lt;= x, y &lt;= 300</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= |x| + |y| &lt;= 300</code></li>
</ul>
</div>