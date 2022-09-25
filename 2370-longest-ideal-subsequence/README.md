<h2><a href="https://leetcode.com/problems/longest-ideal-subsequence/">2370. Longest Ideal Subsequence</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> consisting of lowercase letters and an integer <code style="user-select: auto;">k</code>. We call a string <code style="user-select: auto;">t</code> <strong style="user-select: auto;">ideal</strong> if the following conditions are satisfied:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">t</code> is a <strong style="user-select: auto;">subsequence</strong> of the string <code style="user-select: auto;">s</code>.</li>
	<li style="user-select: auto;">The absolute difference in the alphabet order of every two <strong style="user-select: auto;">adjacent</strong> letters in <code style="user-select: auto;">t</code> is less than or equal to <code style="user-select: auto;">k</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the length of the <strong style="user-select: auto;">longest</strong> ideal string</em>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subsequence</strong> is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong> that the alphabet order is not cyclic. For example, the absolute difference in the alphabet order of <code style="user-select: auto;">'a'</code> and <code style="user-select: auto;">'z'</code> is <code style="user-select: auto;">25</code>, not <code style="user-select: auto;">1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "acfgbd", k = 2
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The longest ideal string is "acbd". The length of this string is 4, so 4 is returned.
Note that "acfgbd" is not ideal because 'c' and 'f' have a difference of 3 in alphabet order.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcd", k = 3
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The longest ideal string is "abcd". The length of this string is 4, so 4 is returned.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k &lt;= 25</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters.</li>
</ul>
</div>