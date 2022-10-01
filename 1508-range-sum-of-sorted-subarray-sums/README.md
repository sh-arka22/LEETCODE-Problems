<h2><a href="https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/">1508. Range Sum of Sorted Subarray Sums</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given the array <code style="user-select: auto;">nums</code> consisting of <code style="user-select: auto;">n</code> positive integers. You computed the sum of all non-empty continuous subarrays from the array and then sorted them in non-decreasing order, creating a new array of <code style="user-select: auto;">n * (n + 1) / 2</code> numbers.</p>

<p style="user-select: auto;"><em style="user-select: auto;">Return the sum of the numbers from index </em><code style="user-select: auto;">left</code><em style="user-select: auto;"> to index </em><code style="user-select: auto;">right</code> (<strong style="user-select: auto;">indexed from 1</strong>)<em style="user-select: auto;">, inclusive, in the new array. </em>Since the answer can be a huge number return it modulo <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4], n = 4, left = 1, right = 5
<strong style="user-select: auto;">Output:</strong> 13 
<strong style="user-select: auto;">Explanation:</strong> All subarray sums are 1, 3, 6, 10, 2, 5, 9, 3, 7, 4. After sorting them in non-decreasing order we have the new array [1, 2, 3, 3, 4, 5, 6, 7, 9, 10]. The sum of the numbers from index le = 1 to ri = 5 is 1 + 2 + 3 + 3 + 4 = 13. 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4], n = 4, left = 3, right = 4
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> The given array is the same as example 1. We have the new array [1, 2, 3, 3, 4, 5, 6, 7, 9, 10]. The sum of the numbers from index le = 3 to ri = 4 is 3 + 3 = 6.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4], n = 4, left = 1, right = 10
<strong style="user-select: auto;">Output:</strong> 50
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= left &lt;= right &lt;= n * (n + 1) / 2</code></li>
</ul>
</div>