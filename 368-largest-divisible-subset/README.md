<h2><a href="https://leetcode.com/problems/largest-divisible-subset/">368. Largest Divisible Subset</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a set of <strong style="user-select: auto;">distinct</strong> positive integers <code style="user-select: auto;">nums</code>, return the largest subset <code style="user-select: auto;">answer</code> such that every pair <code style="user-select: auto;">(answer[i], answer[j])</code> of elements in this subset satisfies:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">answer[i] % answer[j] == 0</code>, or</li>
	<li style="user-select: auto;"><code style="user-select: auto;">answer[j] % answer[i] == 0</code></li>
</ul>

<p style="user-select: auto;">If there are multiple solutions, return any of them.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3]
<strong style="user-select: auto;">Output:</strong> [1,2]
<strong style="user-select: auto;">Explanation:</strong> [1,3] is also accepted.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,4,8]
<strong style="user-select: auto;">Output:</strong> [1,2,4,8]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 2 * 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;">All the integers in <code style="user-select: auto;">nums</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>