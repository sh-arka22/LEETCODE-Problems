<h2><a href="https://leetcode.com/problems/minimum-addition-to-make-integer-beautiful/">2457. Minimum Addition to Make Integer Beautiful</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two positive integers <code style="user-select: auto;">n</code> and <code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">An integer is considered <strong style="user-select: auto;">beautiful</strong> if the sum of its digits is less than or equal to <code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">Return the <em style="user-select: auto;">minimum <strong style="user-select: auto;">non-negative</strong> integer </em><code style="user-select: auto;">x</code><em style="user-select: auto;"> such that </em><code style="user-select: auto;">n + x</code><em style="user-select: auto;"> is beautiful</em>. The input will be generated such that it is always possible to make <code style="user-select: auto;">n</code> beautiful.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 16, target = 6
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> Initially n is 16 and its digit sum is 1 + 6 = 7. After adding 4, n becomes 20 and digit sum becomes 2 + 0 = 2. It can be shown that we can not make n beautiful with adding non-negative integer less than 4.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 467, target = 6
<strong style="user-select: auto;">Output:</strong> 33
<strong style="user-select: auto;">Explanation:</strong> Initially n is 467 and its digit sum is 4 + 6 + 7 = 17. After adding 33, n becomes 500 and digit sum becomes 5 + 0 + 0 = 5. It can be shown that we can not make n beautiful with adding non-negative integer less than 33.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1, target = 1
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> Initially n is 1 and its digit sum is 1, which is already smaller than or equal to target.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">12</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target &lt;= 150</code></li>
	<li style="user-select: auto;">The input will be generated such that it is always possible to make <code style="user-select: auto;">n</code> beautiful.</li>
</ul>
</div>