<h2><a href="https://leetcode.com/problems/max-chunks-to-make-sorted/">769. Max Chunks To Make Sorted</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">arr</code> of length <code style="user-select: auto;">n</code> that represents a permutation of the integers in the range <code style="user-select: auto;">[0, n - 1]</code>.</p>

<p style="user-select: auto;">We split <code style="user-select: auto;">arr</code> into some number of <strong style="user-select: auto;">chunks</strong> (i.e., partitions), and individually sort each chunk. After concatenating them, the result should equal the sorted array.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the largest number of chunks we can make to sort the array</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [4,3,2,1,0]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong>
Splitting into two or more chunks will not return the required result.
For example, splitting into [4, 3], [2, 1, 0] will result in [3, 4, 0, 1, 2], which isn't sorted.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,0,2,3,4]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong>
We can split into two chunks, such as [1, 0], [2, 3, 4].
However, splitting into [1, 0], [2], [3], [4] is the highest number of chunks possible.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == arr.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= arr[i] &lt; n</code></li>
	<li style="user-select: auto;">All the elements of <code style="user-select: auto;">arr</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>