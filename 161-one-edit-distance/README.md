<h2><a href="https://leetcode.com/problems/one-edit-distance/">161. One Edit Distance</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code>, return <code style="user-select: auto;">true</code> if they are both one edit distance apart, otherwise return <code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">A string <code style="user-select: auto;">s</code> is said to be one distance apart from a string <code style="user-select: auto;">t</code> if you can:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Insert <strong style="user-select: auto;">exactly one</strong> character into <code style="user-select: auto;">s</code> to get <code style="user-select: auto;">t</code>.</li>
	<li style="user-select: auto;">Delete <strong style="user-select: auto;">exactly one</strong> character from <code style="user-select: auto;">s</code> to get <code style="user-select: auto;">t</code>.</li>
	<li style="user-select: auto;">Replace <strong style="user-select: auto;">exactly one</strong> character of <code style="user-select: auto;">s</code> with <strong style="user-select: auto;">a different character</strong> to get <code style="user-select: auto;">t</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "ab", t = "acb"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> We can insert 'c' into s&nbsp;to get&nbsp;t.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "", t = ""
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> We cannot get t from s by only one step.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= s.length, t.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code> consist of lowercase letters, uppercase letters, and digits.</li>
</ul>
</div>