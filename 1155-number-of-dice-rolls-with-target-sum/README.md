<h2><a href="https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/">1155. Number of Dice Rolls With Target Sum</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have <code style="user-select: auto;">n</code> dice and each die has <code style="user-select: auto;">k</code> faces numbered from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">Given three integers <code style="user-select: auto;">n</code>, <code style="user-select: auto;">k</code>, and <code style="user-select: auto;">target</code>, return <em style="user-select: auto;">the number of possible ways (out of the </em><code style="user-select: auto;">k<sup style="user-select: auto;">n</sup></code><em style="user-select: auto;"> total ways) </em><em style="user-select: auto;">to roll the dice so the sum of the face-up numbers equals </em><code style="user-select: auto;">target</code>. Since the answer may be too large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1, k = 6, target = 3
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> You throw one die with 6 faces.
There is only one way to get a sum of 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2, k = 6, target = 7
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> You throw two dice, each with 6 faces.
There are 6 ways to get a sum of 7: 1+6, 2+5, 3+4, 4+3, 5+2, 6+1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 30, k = 30, target = 500
<strong style="user-select: auto;">Output:</strong> 222616187
<strong style="user-select: auto;">Explanation:</strong> The answer must be returned modulo 10<sup style="user-select: auto;">9</sup> + 7.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n, k &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target &lt;= 1000</code></li>
</ul>
</div>