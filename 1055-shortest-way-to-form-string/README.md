<h2><a href="https://leetcode.com/problems/shortest-way-to-form-string/">1055. Shortest Way to Form String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">subsequence</strong> of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., <code style="user-select: auto;">"ace"</code> is a subsequence of <code style="user-select: auto;">"<u style="user-select: auto;">a</u>b<u style="user-select: auto;">c</u>d<u style="user-select: auto;">e</u>"</code> while <code style="user-select: auto;">"aec"</code> is not).</p>

<p style="user-select: auto;">Given two strings <code style="user-select: auto;">source</code> and <code style="user-select: auto;">target</code>, return <em style="user-select: auto;">the minimum number of <strong style="user-select: auto;">subsequences</strong> of </em><code style="user-select: auto;">source</code><em style="user-select: auto;"> such that their concatenation equals </em><code style="user-select: auto;">target</code>. If the task is impossible, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> source = "abc", target = "abcbc"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The target "abcbc" can be formed by "abc" and "bc", which are subsequences of source "abc".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> source = "abc", target = "acdbc"
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> The target string cannot be constructed from the subsequences of source string due to the character "d" in target string.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> source = "xyz", target = "xzyxz"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The target string can be constructed as follows "xz" + "y" + "xz".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= source.length, target.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">source</code> and <code style="user-select: auto;">target</code> consist of lowercase English letters.</li>
</ul>
</div>