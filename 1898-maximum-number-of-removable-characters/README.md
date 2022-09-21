<h2><a href="https://leetcode.com/problems/maximum-number-of-removable-characters/">1898. Maximum Number of Removable Characters</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">p</code> where <code style="user-select: auto;">p</code> is a <strong style="user-select: auto;">subsequence </strong>of <code style="user-select: auto;">s</code>. You are also given a <strong style="user-select: auto;">distinct 0-indexed </strong>integer array <code style="user-select: auto;">removable</code> containing a subset of indices of <code style="user-select: auto;">s</code> (<code style="user-select: auto;">s</code> is also <strong style="user-select: auto;">0-indexed</strong>).</p>

<p style="user-select: auto;">You want to choose an integer <code style="user-select: auto;">k</code> (<code style="user-select: auto;">0 &lt;= k &lt;= removable.length</code>) such that, after removing <code style="user-select: auto;">k</code> characters from <code style="user-select: auto;">s</code> using the <strong style="user-select: auto;">first</strong> <code style="user-select: auto;">k</code> indices in <code style="user-select: auto;">removable</code>, <code style="user-select: auto;">p</code> is still a <strong style="user-select: auto;">subsequence</strong> of <code style="user-select: auto;">s</code>. More formally, you will mark the character at <code style="user-select: auto;">s[removable[i]]</code> for each <code style="user-select: auto;">0 &lt;= i &lt; k</code>, then remove all marked characters and check if <code style="user-select: auto;">p</code> is still a subsequence.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> </em><code style="user-select: auto;">k</code><em style="user-select: auto;"> you can choose such that </em><code style="user-select: auto;">p</code><em style="user-select: auto;"> is still a <strong style="user-select: auto;">subsequence</strong> of </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> after the removals</em>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subsequence</strong> of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcacb", p = "ab", removable = [3,1,0]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation</strong>: After removing the characters at indices 3 and 1, "a<s style="user-select: auto;"><strong style="user-select: auto;">b</strong></s>c<s style="user-select: auto;"><strong style="user-select: auto;">a</strong></s>cb" becomes "accb".
"ab" is a subsequence of "<strong style="user-select: auto;"><u style="user-select: auto;">a</u></strong>cc<strong style="user-select: auto;"><u style="user-select: auto;">b</u></strong>".
If we remove the characters at indices 3, 1, and 0, "<s style="user-select: auto;"><strong style="user-select: auto;">ab</strong></s>c<s style="user-select: auto;"><strong style="user-select: auto;">a</strong></s>cb" becomes "ccb", and "ab" is no longer a subsequence.
Hence, the maximum k is 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcbddddd", p = "abcd", removable = [3,2,1,4,5,6]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation</strong>: After removing the character at index 3, "abc<s style="user-select: auto;"><strong style="user-select: auto;">b</strong></s>ddddd" becomes "abcddddd".
"abcd" is a subsequence of "<u style="user-select: auto;"><strong style="user-select: auto;">abcd</strong></u>dddd".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcab", p = "abc", removable = [0,1,2,3,4]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation</strong>: If you remove the first index in the array removable, "abc" is no longer a subsequence.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= p.length &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= removable.length &lt; s.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= removable[i] &lt; s.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">p</code> is a <strong style="user-select: auto;">subsequence</strong> of <code style="user-select: auto;">s</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> and <code style="user-select: auto;">p</code> both consist of lowercase English letters.</li>
	<li style="user-select: auto;">The elements in <code style="user-select: auto;">removable</code> are <strong style="user-select: auto;">distinct</strong>.</li>
</ul>
</div>