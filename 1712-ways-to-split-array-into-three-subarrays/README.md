<h2><a href="https://leetcode.com/problems/ways-to-split-array-into-three-subarrays/">1712. Ways to Split Array Into Three Subarrays</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A split of an integer array is <strong style="user-select: auto;">good</strong> if:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The array is split into three <strong style="user-select: auto;">non-empty</strong> contiguous subarrays - named <code style="user-select: auto;">left</code>, <code style="user-select: auto;">mid</code>, <code style="user-select: auto;">right</code> respectively from left to right.</li>
	<li style="user-select: auto;">The sum of the elements in <code style="user-select: auto;">left</code> is less than or equal to the sum of the elements in <code style="user-select: auto;">mid</code>, and the sum of the elements in <code style="user-select: auto;">mid</code> is less than or equal to the sum of the elements in <code style="user-select: auto;">right</code>.</li>
</ul>

<p style="user-select: auto;">Given <code style="user-select: auto;">nums</code>, an array of <strong style="user-select: auto;">non-negative</strong> integers, return <em style="user-select: auto;">the number of <strong style="user-select: auto;">good</strong> ways to split</em> <code style="user-select: auto;">nums</code>. As the number may be too large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9 </sup>+ 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,1]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The only good way to split nums is [1] [1] [1].</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,2,2,5,0]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> There are three good ways of splitting nums:
[1] [2] [2,2,5,0]
[1] [2,2] [2,5,0]
[1,2] [2,2] [5,0]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,2,1]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There is no good way to split nums.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>