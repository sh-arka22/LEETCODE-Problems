<h2><a href="https://leetcode.com/problems/largest-component-size-by-common-factor/">952. Largest Component Size by Common Factor</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array of unique positive integers <code style="user-select: auto;">nums</code>. Consider the following graph:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">There are <code style="user-select: auto;">nums.length</code> nodes, labeled <code style="user-select: auto;">nums[0]</code> to <code style="user-select: auto;">nums[nums.length - 1]</code>,</li>
	<li style="user-select: auto;">There is an undirected edge between <code style="user-select: auto;">nums[i]</code> and <code style="user-select: auto;">nums[j]</code> if <code style="user-select: auto;">nums[i]</code> and <code style="user-select: auto;">nums[j]</code> share a common factor greater than <code style="user-select: auto;">1</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the size of the largest connected component in the graph</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/01/ex1.png" style="width: 500px; height: 97px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4,6,15,35]
<strong style="user-select: auto;">Output:</strong> 4
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/01/ex2.png" style="width: 500px; height: 85px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [20,50,9,63]
<strong style="user-select: auto;">Output:</strong> 2
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/01/ex3.png" style="width: 500px; height: 260px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,3,6,7,4,12,21,39]
<strong style="user-select: auto;">Output:</strong> 8
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">nums</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>