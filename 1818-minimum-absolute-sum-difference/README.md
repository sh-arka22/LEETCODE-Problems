<h2><a href="https://leetcode.com/problems/minimum-absolute-sum-difference/">1818. Minimum Absolute Sum Difference</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two positive integer arrays <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code>, both of length <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">absolute sum difference</strong> of arrays <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code> is defined as the <strong style="user-select: auto;">sum</strong> of <code style="user-select: auto;">|nums1[i] - nums2[i]|</code> for each <code style="user-select: auto;">0 &lt;= i &lt; n</code> (<strong style="user-select: auto;">0-indexed</strong>).</p>

<p style="user-select: auto;">You can replace <strong style="user-select: auto;">at most one</strong> element of <code style="user-select: auto;">nums1</code> with <strong style="user-select: auto;">any</strong> other element in <code style="user-select: auto;">nums1</code> to <strong style="user-select: auto;">minimize</strong> the absolute sum difference.</p>

<p style="user-select: auto;">Return the <em style="user-select: auto;">minimum absolute sum difference <strong style="user-select: auto;">after</strong> replacing at most one<strong style="user-select: auto;"> </strong>element in the array <code style="user-select: auto;">nums1</code>.</em> Since the answer may be large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;"><code style="user-select: auto;">|x|</code> is defined as:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">x</code> if <code style="user-select: auto;">x &gt;= 0</code>, or</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-x</code> if <code style="user-select: auto;">x &lt; 0</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,7,5], nums2 = [2,3,5]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation: </strong>There are two possible optimal solutions:
- Replace the second element with the first: [1,<u style="user-select: auto;"><strong style="user-select: auto;">7</strong></u>,5] =&gt; [1,<u style="user-select: auto;"><strong style="user-select: auto;">1</strong></u>,5], or
- Replace the second element with the third: [1,<u style="user-select: auto;"><strong style="user-select: auto;">7</strong></u>,5] =&gt; [1,<u style="user-select: auto;"><strong style="user-select: auto;">5</strong></u>,5].
Both will yield an absolute sum difference of <code style="user-select: auto;">|1-2| + (|1-3| or |5-3|) + |5-5| = </code>3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [2,4,6,8,10], nums2 = [2,4,6,8,10]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation: </strong>nums1 is equal to nums2 so no replacement is needed. This will result in an 
absolute sum difference of 0.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [1,10,4,4,2,7], nums2 = [9,3,5,1,7,4]
<strong style="user-select: auto;">Output:</strong> 20
<strong style="user-select: auto;">Explanation: </strong>Replace the first element with the second: [<u style="user-select: auto;"><strong style="user-select: auto;">1</strong></u>,10,4,4,2,7] =&gt; [<u style="user-select: auto;"><strong style="user-select: auto;">10</strong></u>,10,4,4,2,7].
This yields an absolute sum difference of <code style="user-select: auto;">|10-9| + |10-3| + |4-5| + |4-1| + |2-7| + |7-4| = 20</code>
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums1.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums2.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1[i], nums2[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>