<h2><a href="https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/">1541. Minimum Insertions to Balance a Parentheses String</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a parentheses string <code style="user-select: auto;">s</code> containing only the characters <code style="user-select: auto;">'('</code> and <code style="user-select: auto;">')'</code>. A parentheses string is <strong style="user-select: auto;">balanced</strong> if:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Any left parenthesis <code style="user-select: auto;">'('</code> must have a corresponding two consecutive right parenthesis <code style="user-select: auto;">'))'</code>.</li>
	<li style="user-select: auto;">Left parenthesis <code style="user-select: auto;">'('</code> must go before the corresponding two consecutive right parenthesis <code style="user-select: auto;">'))'</code>.</li>
</ul>

<p style="user-select: auto;">In other words, we treat <code style="user-select: auto;">'('</code> as an opening parenthesis and <code style="user-select: auto;">'))'</code> as a closing parenthesis.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">"())"</code>, <code style="user-select: auto;">"())(())))"</code> and <code style="user-select: auto;">"(())())))"</code> are balanced, <code style="user-select: auto;">")()"</code>, <code style="user-select: auto;">"()))"</code> and <code style="user-select: auto;">"(()))"</code> are not balanced.</li>
</ul>

<p style="user-select: auto;">You can insert the characters <code style="user-select: auto;">'('</code> and <code style="user-select: auto;">')'</code> at any position of the string to balance it if needed.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of insertions</em> needed to make <code style="user-select: auto;">s</code> balanced.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "(()))"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The second '(' has two matching '))', but the first '(' has only ')' matching. We need to add one more ')' at the end of the string to be "(())))" which is balanced.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "())"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The string is already balanced.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "))())("
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Add '(' to match the first '))', Add '))' to match the last '('.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of <code style="user-select: auto;">'('</code> and <code style="user-select: auto;">')'</code> only.</li>
</ul>
</div>