<h2><a href="https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/">2419. Longest Subarray With Maximum Bitwise AND</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> of size <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">Consider a <strong style="user-select: auto;">non-empty</strong> subarray from <code style="user-select: auto;">nums</code> that has the <strong style="user-select: auto;">maximum</strong> possible <strong style="user-select: auto;">bitwise AND</strong>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">In other words, let <code style="user-select: auto;">k</code> be the maximum value of the bitwise AND of <strong style="user-select: auto;">any</strong> subarray of <code style="user-select: auto;">nums</code>. Then, only subarrays with a bitwise AND equal to <code style="user-select: auto;">k</code> should be considered.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the length of the <strong style="user-select: auto;">longest</strong> such subarray</em>.</p>

<p style="user-select: auto;">The bitwise AND of an array is the bitwise AND of all the numbers in it.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subarray</strong> is a contiguous sequence of elements within an array.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,3,2,2]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
The maximum possible bitwise AND of a subarray is 3.
The longest subarray with that value is [3,3], so we return 2.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong>
The maximum possible bitwise AND of a subarray is 4.
The longest subarray with that value is [4], so we return 1.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>