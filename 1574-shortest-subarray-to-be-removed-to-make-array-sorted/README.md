<h2><a href="https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted/">1574. Shortest Subarray to be Removed to Make Array Sorted</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">arr</code>, remove a subarray (can be empty) from <code style="user-select: auto;">arr</code> such that the remaining elements in <code style="user-select: auto;">arr</code> are <strong style="user-select: auto;">non-decreasing</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the length of the shortest subarray to remove</em>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subarray</strong> is a contiguous subsequence of the array.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,2,3,10,4,2,3,5]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The shortest subarray we can remove is [10,4,2] of length 3. The remaining elements after that will be [1,2,3,3,5] which are sorted.
Another correct solution is to remove the subarray [3,10,4].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [5,4,3,2,1]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> Since the array is strictly decreasing, we can only keep a single element. Therefore we need to remove a subarray of length 4, either [5,4,3,2] or [4,3,2,1].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,2,3]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The array is already non-decreasing. We do not need to remove any elements.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>