<h2><a href="https://leetcode.com/problems/maximum-value-at-a-given-index-in-a-bounded-array/">1802. Maximum Value at a Given Index in a Bounded Array</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given three positive integers:&nbsp;<code style="user-select: auto;">n</code>, <code style="user-select: auto;">index</code>, and <code style="user-select: auto;">maxSum</code>. You want to construct an array <code style="user-select: auto;">nums</code> (<strong style="user-select: auto;">0-indexed</strong>)<strong style="user-select: auto;"> </strong>that satisfies the following conditions:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i]</code> is a <strong style="user-select: auto;">positive</strong> integer where <code style="user-select: auto;">0 &lt;= i &lt; n</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">abs(nums[i] - nums[i+1]) &lt;= 1</code> where <code style="user-select: auto;">0 &lt;= i &lt; n-1</code>.</li>
	<li style="user-select: auto;">The sum of all the elements of <code style="user-select: auto;">nums</code> does not exceed <code style="user-select: auto;">maxSum</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[index]</code> is <strong style="user-select: auto;">maximized</strong>.</li>
</ul>

<p style="user-select: auto;">Return <code style="user-select: auto;">nums[index]</code><em style="user-select: auto;"> of the constructed array</em>.</p>

<p style="user-select: auto;">Note that <code style="user-select: auto;">abs(x)</code> equals <code style="user-select: auto;">x</code> if <code style="user-select: auto;">x &gt;= 0</code>, and <code style="user-select: auto;">-x</code> otherwise.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, index = 2,  maxSum = 6
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> nums = [1,2,<u style="user-select: auto;"><strong style="user-select: auto;">2</strong></u>,1] is one array that satisfies all the conditions.
There are no arrays that satisfy all the conditions and have nums[2] == 3, so 2 is the maximum nums[2].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 6, index = 1,  maxSum = 10
<strong style="user-select: auto;">Output:</strong> 3
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= maxSum &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= index &lt; n</code></li>
</ul>
</div>