<h2><a href="https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/">462. Minimum Moves to Equal Array Elements II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> of size <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">the minimum number of moves required to make all array elements equal</em>.</p>

<p style="user-select: auto;">In one move, you can increment or decrement an element of the array by <code style="user-select: auto;">1</code>.</p>

<p style="user-select: auto;">Test cases are designed so that the answer will fit in a <strong style="user-select: auto;">32-bit</strong> integer.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
Only two moves are needed (remember each move increments or decrements one element):
[<u style="user-select: auto;">1</u>,2,3]  =&gt;  [2,2,<u style="user-select: auto;">3</u>]  =&gt;  [2,2,2]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,10,2,9]
<strong style="user-select: auto;">Output:</strong> 16
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">9</sup> &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>