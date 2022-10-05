<h2><a href="https://leetcode.com/problems/sell-diminishing-valued-colored-balls/">1648. Sell Diminishing-Valued Colored Balls</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have an <code style="user-select: auto;">inventory</code> of different colored balls, and there is a customer that wants <code style="user-select: auto;">orders</code> balls of <strong style="user-select: auto;">any</strong> color.</p>

<p style="user-select: auto;">The customer weirdly values the colored balls. Each colored ball's value is the number of balls <strong style="user-select: auto;">of that color&nbsp;</strong>you currently have in your <code style="user-select: auto;">inventory</code>. For example, if you own <code style="user-select: auto;">6</code> yellow balls, the customer would pay <code style="user-select: auto;">6</code> for the first yellow ball. After the transaction, there are only <code style="user-select: auto;">5</code> yellow balls left, so the next yellow ball is then valued at <code style="user-select: auto;">5</code> (i.e., the value of the balls decreases as you sell more to the customer).</p>

<p style="user-select: auto;">You are given an integer array, <code style="user-select: auto;">inventory</code>, where <code style="user-select: auto;">inventory[i]</code> represents the number of balls of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> color that you initially own. You are also given an integer <code style="user-select: auto;">orders</code>, which represents the total number of balls that the customer wants. You can sell the balls <strong style="user-select: auto;">in any order</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> total value that you can attain after selling </em><code style="user-select: auto;">orders</code><em style="user-select: auto;"> colored balls</em>. As the answer may be too large, return it <strong style="user-select: auto;">modulo </strong><code style="user-select: auto;">10<sup style="user-select: auto;">9 </sup>+ 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/05/jj.gif" style="width: 480px; height: 270px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> inventory = [2,5], orders = 4
<strong style="user-select: auto;">Output:</strong> 14
<strong style="user-select: auto;">Explanation:</strong> Sell the 1st color 1 time (2) and the 2nd color 3 times (5 + 4 + 3).
The maximum total value is 2 + 5 + 4 + 3 = 14.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> inventory = [3,5], orders = 6
<strong style="user-select: auto;">Output:</strong> 19
<strong style="user-select: auto;">Explanation: </strong>Sell the 1st color 2 times (3 + 2) and the 2nd color 4 times (5 + 4 + 3 + 2).
The maximum total value is 3 + 2 + 5 + 4 + 3 + 2 = 19.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= inventory.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= inventory[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= orders &lt;= min(sum(inventory[i]), 10<sup style="user-select: auto;">9</sup>)</code></li>
</ul>
</div>