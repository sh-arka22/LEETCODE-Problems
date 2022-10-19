<h2><a href="https://leetcode.com/problems/find-all-good-indices/">2420. Find All Good Indices</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code> of size <code style="user-select: auto;">n</code> and a positive integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">We call an index <code style="user-select: auto;">i</code> in the range <code style="user-select: auto;">k &lt;= i &lt; n - k</code> <strong style="user-select: auto;">good</strong> if the following conditions are satisfied:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The <code style="user-select: auto;">k</code> elements that are just <strong style="user-select: auto;">before</strong> the index <code style="user-select: auto;">i</code> are in <strong style="user-select: auto;">non-increasing</strong> order.</li>
	<li style="user-select: auto;">The <code style="user-select: auto;">k</code> elements that are just <strong style="user-select: auto;">after</strong> the index <code style="user-select: auto;">i</code> are in <strong style="user-select: auto;">non-decreasing</strong> order.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">an array of all good indices sorted in <strong style="user-select: auto;">increasing</strong> order</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,1,1,1,3,4,1], k = 2
<strong style="user-select: auto;">Output:</strong> [2,3]
<strong style="user-select: auto;">Explanation:</strong> There are two good indices in the array:
- Index 2. The subarray [2,1] is in non-increasing order, and the subarray [1,3] is in non-decreasing order.
- Index 3. The subarray [1,1] is in non-increasing order, and the subarray [3,4] is in non-decreasing order.
Note that the index 4 is not good because [4,1] is not non-decreasing.</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,1,1,2], k = 2
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explanation:</strong> There are no good indices in this array.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= n / 2</code></li>
</ul>
</div>