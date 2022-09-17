<h2><a href="https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/">1283. Find the Smallest Divisor Given a Threshold</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of integers <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">threshold</code>, we will choose a positive integer <code style="user-select: auto;">divisor</code>, divide all the array by it, and sum the division's result. Find the <strong style="user-select: auto;">smallest</strong> <code style="user-select: auto;">divisor</code> such that the result mentioned above is less than or equal to <code style="user-select: auto;">threshold</code>.</p>

<p style="user-select: auto;">Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: <code style="user-select: auto;">7/3 = 3</code> and <code style="user-select: auto;">10/2 = 5</code>).</p>

<p style="user-select: auto;">The test cases are generated so&nbsp;that there will be an answer.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,5,9], threshold = 6
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> We can get a sum to 17 (1+2+5+9) if the divisor is 1. 
If the divisor is 4 we can get a sum of 7 (1+1+2+3) and if the divisor is 5 the sum will be 5 (1+1+1+2). 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [44,22,33,11,1], threshold = 5
<strong style="user-select: auto;">Output:</strong> 44
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length &lt;= threshold &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>