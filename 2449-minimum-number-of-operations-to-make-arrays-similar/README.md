<h2><a href="https://leetcode.com/problems/minimum-number-of-operations-to-make-arrays-similar/">2449. Minimum Number of Operations to Make Arrays Similar</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two positive integer arrays <code style="user-select: auto;">nums</code> and <code style="user-select: auto;">target</code>, of the same length.</p>

<p style="user-select: auto;">In one operation, you can choose any two <strong style="user-select: auto;">distinct</strong> indices <code style="user-select: auto;">i</code> and <code style="user-select: auto;">j</code> where <code style="user-select: auto;">0 &lt;= i, j &lt; nums.length</code> and:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">set <code style="user-select: auto;">nums[i] = nums[i] + 2</code> and</li>
	<li style="user-select: auto;">set <code style="user-select: auto;">nums[j] = nums[j] - 2</code>.</li>
</ul>

<p style="user-select: auto;">Two arrays are considered to be <strong style="user-select: auto;">similar</strong> if the frequency of each element is the same.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of operations required to make </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> similar to </em><code style="user-select: auto;">target</code>. The test cases are generated such that <code style="user-select: auto;">nums</code> can always be similar to <code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [8,12,6], target = [2,14,10]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> It is possible to make nums similar to target in two operations:
- Choose i = 0 and j = 2, nums = [10,12,4].
- Choose i = 1 and j = 2, nums = [10,14,2].
It can be shown that 2 is the minimum number of operations needed.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,5], target = [4,1,3]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> We can make nums similar to target in one operation:
- Choose i = 1 and j = 2, nums = [1,4,3].
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,1,1,1], target = [1,1,1,1,1]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The array nums is already similiar to target.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length == target.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i], target[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;">It is possible to make <code style="user-select: auto;">nums</code> similar to <code style="user-select: auto;">target</code>.</li>
</ul>
</div>