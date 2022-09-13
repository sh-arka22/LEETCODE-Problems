<h2><a href="https://leetcode.com/problems/shortest-common-supersequence/">1092. Shortest Common Supersequence </a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two strings <code style="user-select: auto;">str1</code> and <code style="user-select: auto;">str2</code>, return <em style="user-select: auto;">the shortest string that has both </em><code style="user-select: auto;">str1</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">str2</code><em style="user-select: auto;"> as <strong style="user-select: auto;">subsequences</strong></em>. If there are multiple valid strings, return <strong style="user-select: auto;">any</strong> of them.</p>

<p style="user-select: auto;">A string <code style="user-select: auto;">s</code> is a <strong style="user-select: auto;">subsequence</strong> of string <code style="user-select: auto;">t</code> if deleting some number of characters from <code style="user-select: auto;">t</code> (possibly <code style="user-select: auto;">0</code>) results in the string <code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> str1 = "abac", str2 = "cab"
<strong style="user-select: auto;">Output:</strong> "cabac"
<strong style="user-select: auto;">Explanation:</strong> 
str1 = "abac" is a subsequence of "cabac" because we can delete the first "c".
str2 = "cab" is a subsequence of "cabac" because we can delete the last "ac".
The answer provided is the shortest such string that satisfies these properties.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> str1 = "aaaaaaaa", str2 = "aaaaaaaa"
<strong style="user-select: auto;">Output:</strong> "aaaaaaaa"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= str1.length, str2.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">str1</code> and <code style="user-select: auto;">str2</code> consist of lowercase English letters.</li>
</ul>
</div>