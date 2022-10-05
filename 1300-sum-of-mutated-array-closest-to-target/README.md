<h2><a href="https://leetcode.com/problems/sum-of-mutated-array-closest-to-target/">1300. Sum of Mutated Array Closest to Target</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">arr</code> and a target value <code style="user-select: auto;">target</code>, return the integer <code style="user-select: auto;">value</code> such that when we change all the integers larger than <code style="user-select: auto;">value</code> in the given array to be equal to <code style="user-select: auto;">value</code>, the sum of the array gets as close as possible (in absolute difference) to <code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">In case of a tie, return the minimum such integer.</p>

<p style="user-select: auto;">Notice that the answer is not neccesarilly a number from <code style="user-select: auto;">arr</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [4,9,3], target = 10
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> When using 3 arr converts to [3, 3, 3] which sums 9 and that's the optimal answer.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [2,3,5], target = 10
<strong style="user-select: auto;">Output:</strong> 5
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [60864,25176,27249,21296,20204], target = 56803
<strong style="user-select: auto;">Output:</strong> 11361
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr[i], target &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>