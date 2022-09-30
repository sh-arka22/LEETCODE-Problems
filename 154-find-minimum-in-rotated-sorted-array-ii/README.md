<h2><a href="https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/">154. Find Minimum in Rotated Sorted Array II</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Suppose an array of length <code style="user-select: auto;">n</code> sorted in ascending order is <strong style="user-select: auto;">rotated</strong> between <code style="user-select: auto;">1</code> and <code style="user-select: auto;">n</code> times. For example, the array <code style="user-select: auto;">nums = [0,1,4,4,5,6,7]</code> might become:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">[4,5,6,7,0,1,4]</code> if it was rotated <code style="user-select: auto;">4</code> times.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">[0,1,4,4,5,6,7]</code> if it was rotated <code style="user-select: auto;">7</code> times.</li>
</ul>

<p style="user-select: auto;">Notice that <strong style="user-select: auto;">rotating</strong> an array <code style="user-select: auto;">[a[0], a[1], a[2], ..., a[n-1]]</code> 1 time results in the array <code style="user-select: auto;">[a[n-1], a[0], a[1], a[2], ..., a[n-2]]</code>.</p>

<p style="user-select: auto;">Given the sorted rotated array <code style="user-select: auto;">nums</code> that may contain <strong style="user-select: auto;">duplicates</strong>, return <em style="user-select: auto;">the minimum element of this array</em>.</p>

<p style="user-select: auto;">You must decrease the overall operation steps as much as possible.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,3,5]
<strong style="user-select: auto;">Output:</strong> 1
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,2,2,0,1]
<strong style="user-select: auto;">Output:</strong> 0
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 5000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-5000 &lt;= nums[i] &lt;= 5000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums</code> is sorted and rotated between <code style="user-select: auto;">1</code> and <code style="user-select: auto;">n</code> times.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow up:</strong> This problem is similar to&nbsp;<a href="https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/" target="_blank" style="user-select: auto;">Find Minimum in Rotated Sorted Array</a>, but&nbsp;<code style="user-select: auto;">nums</code> may contain <strong style="user-select: auto;">duplicates</strong>. Would this affect the runtime complexity? How and why?</p>

<p style="user-select: auto;">&nbsp;</p>
</div>