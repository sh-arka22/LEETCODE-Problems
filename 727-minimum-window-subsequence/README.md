<h2><a href="https://leetcode.com/problems/minimum-window-subsequence/">727. Minimum Window Subsequence</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given strings <code style="user-select: auto;">s1</code> and <code style="user-select: auto;">s2</code>, return <em style="user-select: auto;">the minimum contiguous&nbsp;substring part of </em><code style="user-select: auto;">s1</code><em style="user-select: auto;">, so that </em><code style="user-select: auto;">s2</code><em style="user-select: auto;"> is a subsequence of the part</em>.</p>

<p style="user-select: auto;">If there is no such window in <code style="user-select: auto;">s1</code> that covers all characters in <code style="user-select: auto;">s2</code>, return the empty string <code style="user-select: auto;">""</code>. If there are multiple such minimum-length windows, return the one with the <strong style="user-select: auto;">left-most starting index</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s1 = "abcdebdde", s2 = "bde"
<strong style="user-select: auto;">Output:</strong> "bcde"
<strong style="user-select: auto;">Explanation:</strong> 
"bcde" is the answer because it occurs before "bdde" which has the same length.
"deb" is not a smaller window because the elements of s2 in the window must occur in order.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s1 = "jmeqksfrsdcmsiwvaovztaqenprpvnbstl", s2 = "u"
<strong style="user-select: auto;">Output:</strong> ""
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s1.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s2.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s1</code> and <code style="user-select: auto;">s2</code> consist of lowercase English letters.</li>
</ul>
</div>