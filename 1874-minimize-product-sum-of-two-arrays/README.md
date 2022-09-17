<h2><a href="https://leetcode.com/problems/minimize-product-sum-of-two-arrays/">1874. Minimize Product Sum of Two Arrays</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The <b style="user-select: auto;">product sum </b>of two equal-length arrays <code style="user-select: auto;">a</code> and <code style="user-select: auto;">b</code> is equal to the sum of <code style="user-select: auto;">a[i] * b[i]</code> for all <code style="user-select: auto;">0 &lt;= i &lt; a.length</code> (<strong style="user-select: auto;">0-indexed</strong>).</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if <code style="user-select: auto;">a = [1,2,3,4]</code> and <code style="user-select: auto;">b = [5,2,3,1]</code>, the <strong style="user-select: auto;">product sum</strong> would be <code style="user-select: auto;">1*5 + 2*2 + 3*3 + 4*1 = 22</code>.</li>
</ul>

<p style="user-select: auto;">Given two arrays <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code> of length <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum product sum</strong> if you are allowed to <strong style="user-select: auto;">rearrange</strong> the <strong style="user-select: auto;">order</strong> of the elements in </em><code style="user-select: auto;">nums1</code>.&nbsp;</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [5,3,4,2], nums2 = [4,2,2,5]
<strong style="user-select: auto;">Output:</strong> 40
<strong style="user-select: auto;">Explanation:</strong>&nbsp;We can rearrange nums1 to become [3,5,4,2]. The product sum of [3,5,4,2] and [4,2,2,5] is 3*4 + 5*2 + 4*2 + 2*5 = 40.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [2,1,4,5,7], nums2 = [3,2,4,8,6]
<strong style="user-select: auto;">Output:</strong> 65
<strong style="user-select: auto;">Explanation: </strong>We can rearrange nums1 to become [5,7,4,1,2]. The product sum of [5,7,4,1,2] and [3,2,4,8,6] is 5*3 + 7*2 + 4*4 + 1*8 + 2*6 = 65.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums1.length == nums2.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1[i], nums2[i] &lt;= 100</code></li>
</ul></div>