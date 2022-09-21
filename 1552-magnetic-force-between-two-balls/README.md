<h2><a href="https://leetcode.com/problems/magnetic-force-between-two-balls/">1552. Magnetic Force Between Two Balls</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his new invented basket. Rick has <code style="user-select: auto;">n</code> empty baskets, the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> basket is at <code style="user-select: auto;">position[i]</code>, Morty has <code style="user-select: auto;">m</code> balls and needs to distribute the balls into the baskets such that the <strong style="user-select: auto;">minimum magnetic force</strong> between any two balls is <strong style="user-select: auto;">maximum</strong>.</p>

<p style="user-select: auto;">Rick stated that magnetic force between two different balls at positions <code style="user-select: auto;">x</code> and <code style="user-select: auto;">y</code> is <code style="user-select: auto;">|x - y|</code>.</p>

<p style="user-select: auto;">Given the integer array <code style="user-select: auto;">position</code> and the integer <code style="user-select: auto;">m</code>. Return <em style="user-select: auto;">the required force</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/11/q3v1.jpg" style="width: 562px; height: 195px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> position = [1,2,3,4,7], m = 3
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Distributing the 3 balls into baskets 1, 4 and 7 will make the magnetic force between ball pairs [3, 3, 6]. The minimum magnetic force is 3. We cannot achieve a larger minimum magnetic force than 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> position = [5,4,3,2,1,1000000000], m = 2
<strong style="user-select: auto;">Output:</strong> 999999999
<strong style="user-select: auto;">Explanation:</strong> We can use baskets 1 and 1000000000.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == position.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= position[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;">All integers in <code style="user-select: auto;">position</code> are <strong style="user-select: auto;">distinct</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= m &lt;= position.length</code></li>
</ul>
</div>