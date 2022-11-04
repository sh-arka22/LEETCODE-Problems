<h2><a href="https://leetcode.com/problems/maximum-score-of-spliced-array/">2321. Maximum Score Of Spliced Array</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two <strong style="user-select: auto;">0-indexed</strong> integer arrays <code style="user-select: auto;">nums1</code> and <code style="user-select: auto;">nums2</code>, both of length <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">You can choose two integers <code style="user-select: auto;">left</code> and <code style="user-select: auto;">right</code> where <code style="user-select: auto;">0 &lt;= left &lt;= right &lt; n</code> and <strong style="user-select: auto;">swap</strong> the subarray <code style="user-select: auto;">nums1[left...right]</code> with the subarray <code style="user-select: auto;">nums2[left...right]</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if <code style="user-select: auto;">nums1 = [1,2,3,4,5]</code> and <code style="user-select: auto;">nums2 = [11,12,13,14,15]</code> and you choose <code style="user-select: auto;">left = 1</code> and <code style="user-select: auto;">right = 2</code>, <code style="user-select: auto;">nums1</code> becomes <code style="user-select: auto;">[1,<strong style="user-select: auto;"><u style="user-select: auto;">12,13</u></strong>,4,5]</code> and <code style="user-select: auto;">nums2</code> becomes <code style="user-select: auto;">[11,<strong style="user-select: auto;"><u style="user-select: auto;">2,3</u></strong>,14,15]</code>.</li>
</ul>

<p style="user-select: auto;">You may choose to apply the mentioned operation <strong style="user-select: auto;">once</strong> or not do anything.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">score</strong> of the arrays is the <strong style="user-select: auto;">maximum</strong> of <code style="user-select: auto;">sum(nums1)</code> and <code style="user-select: auto;">sum(nums2)</code>, where <code style="user-select: auto;">sum(arr)</code> is the sum of all the elements in the array <code style="user-select: auto;">arr</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum possible score</strong></em>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subarray</strong> is a contiguous sequence of elements within an array. <code style="user-select: auto;">arr[left...right]</code> denotes the subarray that contains the elements of <code style="user-select: auto;">nums</code> between indices <code style="user-select: auto;">left</code> and <code style="user-select: auto;">right</code> (<strong style="user-select: auto;">inclusive</strong>).</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [60,60,60], nums2 = [10,90,10]
<strong style="user-select: auto;">Output:</strong> 210
<strong style="user-select: auto;">Explanation:</strong> Choosing left = 1 and right = 1, we have nums1 = [60,<u style="user-select: auto;"><strong style="user-select: auto;">90</strong></u>,60] and nums2 = [10,<u style="user-select: auto;"><strong style="user-select: auto;">60</strong></u>,10].
The score is max(sum(nums1), sum(nums2)) = max(210, 80) = 210.</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [20,40,20,70,30], nums2 = [50,20,50,40,20]
<strong style="user-select: auto;">Output:</strong> 220
<strong style="user-select: auto;">Explanation:</strong> Choosing left = 3, right = 4, we have nums1 = [20,40,20,<u style="user-select: auto;"><strong style="user-select: auto;">40,20</strong></u>] and nums2 = [50,20,50,<u style="user-select: auto;"><strong style="user-select: auto;">70,30</strong></u>].
The score is max(sum(nums1), sum(nums2)) = max(140, 220) = 220.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums1 = [7,11,13], nums2 = [1,1,1]
<strong style="user-select: auto;">Output:</strong> 31
<strong style="user-select: auto;">Explanation:</strong> We choose not to swap any subarray.
The score is max(sum(nums1), sum(nums2)) = max(31, 3) = 31.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums1.length == nums2.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums1[i], nums2[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>