<h2><a href="https://leetcode.com/problems/max-chunks-to-make-sorted-ii/">768. Max Chunks To Make Sorted II</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">arr</code>.</p>

<p style="user-select: auto;">We split <code style="user-select: auto;">arr</code> into some number of <strong style="user-select: auto;">chunks</strong> (i.e., partitions), and individually sort each chunk. After concatenating them, the result should equal the sorted array.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the largest number of chunks we can make to sort the array</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [5,4,3,2,1]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong>
Splitting into two or more chunks will not return the required result.
For example, splitting into [5, 4], [3, 2, 1] will result in [4, 5, 1, 2, 3], which isn't sorted.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [2,1,3,4,4]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong>
We can split into two chunks, such as [2, 1], [3, 4, 4].
However, splitting into [2, 1], [3], [4], [4] is the highest number of chunks possible.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length &lt;= 2000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">8</sup></code></li>
</ul>
</div>