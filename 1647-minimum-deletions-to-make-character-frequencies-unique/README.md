<h2><a href="https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/">1647. Minimum Deletions to Make Character Frequencies Unique</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A string <code style="user-select: auto;">s</code> is called <strong style="user-select: auto;">good</strong> if there are no two different characters in <code style="user-select: auto;">s</code> that have the same <strong style="user-select: auto;">frequency</strong>.</p>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code>, return<em style="user-select: auto;"> the <strong style="user-select: auto;">minimum</strong> number of characters you need to delete to make </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> <strong style="user-select: auto;">good</strong>.</em></p>

<p style="user-select: auto;">The <strong style="user-select: auto;">frequency</strong> of a character in a string is the number of times it appears in the string. For example, in the string <code style="user-select: auto;">"aab"</code>, the <strong style="user-select: auto;">frequency</strong> of <code style="user-select: auto;">'a'</code> is <code style="user-select: auto;">2</code>, while the <strong style="user-select: auto;">frequency</strong> of <code style="user-select: auto;">'b'</code> is <code style="user-select: auto;">1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aab"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> <code style="user-select: auto;">s</code> is already good.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aaabbbcc"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> You can delete two 'b's resulting in the good string "aaabcc".
Another way it to delete one 'b' and one 'c' resulting in the good string "aaabbc".</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "ceabaacb"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> You can delete both 'c's resulting in the good string "eabaab".
Note that we only care about characters that are still in the string at the end (i.e. frequency of 0 is ignored).
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code>&nbsp;contains only lowercase English letters.</li>
</ul>
</div>