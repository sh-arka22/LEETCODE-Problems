<h2><a href="https://leetcode.com/problems/maximum-split-of-positive-even-integers/">2178. Maximum Split of Positive Even Integers</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer <code style="user-select: auto;">finalSum</code>. Split it into a sum of a <strong style="user-select: auto;">maximum</strong> number of <strong style="user-select: auto;">unique</strong> positive even integers.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, given <code style="user-select: auto;">finalSum = 12</code>, the following splits are <strong style="user-select: auto;">valid</strong> (unique positive even integers summing up to <code style="user-select: auto;">finalSum</code>): <code style="user-select: auto;">(12)</code>, <code style="user-select: auto;">(2 + 10)</code>, <code style="user-select: auto;">(2 + 4 + 6)</code>, and <code style="user-select: auto;">(4 + 8)</code>. Among them, <code style="user-select: auto;">(2 + 4 + 6)</code> contains the maximum number of integers. Note that <code style="user-select: auto;">finalSum</code> cannot be split into <code style="user-select: auto;">(2 + 2 + 4 + 4)</code> as all the numbers should be unique.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">a list of integers that represent a valid split containing a <strong style="user-select: auto;">maximum</strong> number of integers</em>. If no valid split exists for <code style="user-select: auto;">finalSum</code>, return <em style="user-select: auto;">an <strong style="user-select: auto;">empty</strong> list</em>. You may return the integers in <strong style="user-select: auto;">any</strong> order.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> finalSum = 12
<strong style="user-select: auto;">Output:</strong> [2,4,6]
<strong style="user-select: auto;">Explanation:</strong> The following are valid splits: <code style="user-select: auto;">(12)</code>, <code style="user-select: auto;">(2 + 10)</code>, <code style="user-select: auto;">(2 + 4 + 6)</code>, and <code style="user-select: auto;">(4 + 8)</code>.
(2 + 4 + 6) has the maximum number of integers, which is 3. Thus, we return [2,4,6].
Note that [2,6,4], [6,2,4], etc. are also accepted.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> finalSum = 7
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explanation:</strong> There are no valid splits for the given finalSum.
Thus, we return an empty array.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> finalSum = 28
<strong style="user-select: auto;">Output:</strong> [6,8,2,12]
<strong style="user-select: auto;">Explanation:</strong> The following are valid splits: <code style="user-select: auto;">(2 + 26)</code>, <code style="user-select: auto;">(6 + 8 + 2 + 12)</code>, and <code style="user-select: auto;">(4 + 24)</code>. 
<code style="user-select: auto;">(6 + 8 + 2 + 12)</code> has the maximum number of integers, which is 4. Thus, we return [6,8,2,12].
Note that [10,2,4,12], [6,2,4,16], etc. are also accepted.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= finalSum &lt;= 10<sup style="user-select: auto;">10</sup></code></li>
</ul>
</div>