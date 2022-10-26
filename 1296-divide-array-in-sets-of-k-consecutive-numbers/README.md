<h2><a href="https://leetcode.com/problems/divide-array-in-sets-of-k-consecutive-numbers/">1296. Divide Array in Sets of K Consecutive Numbers</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of integers <code style="user-select: auto;">nums</code> and a positive integer <code style="user-select: auto;">k</code>, check whether it is possible to divide this array into sets of <code style="user-select: auto;">k</code> consecutive numbers.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if it is possible</em>.<strong style="user-select: auto;"> </strong>Otherwise, return <code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,3,4,4,5,6], k = 4
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> Array can be divided into [1,2,3,4] and [3,4,5,6].
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,2,1,2,3,4,3,4,5,9,10,11], k = 3
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> Array can be divided into [1,2,3] , [2,3,4] , [3,4,5] and [9,10,11].
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4], k = 3
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> Each array should be divided in subarrays of size 3.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<strong style="user-select: auto;">Note:</strong> This question is the same as&nbsp;846:&nbsp;<a href="https://leetcode.com/problems/hand-of-straights/" target="_blank" style="user-select: auto;">https://leetcode.com/problems/hand-of-straights/</a></div>