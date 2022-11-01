<h2><a href="https://leetcode.com/problems/number-of-ways-of-cutting-a-pizza/">1444. Number of Ways of Cutting a Pizza</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a rectangular pizza represented as a <code style="user-select: auto;">rows x cols</code>&nbsp;matrix containing the following characters: <code style="user-select: auto;">'A'</code> (an apple) and <code style="user-select: auto;">'.'</code> (empty cell) and given the integer <code style="user-select: auto;">k</code>. You have to cut the pizza into <code style="user-select: auto;">k</code> pieces using <code style="user-select: auto;">k-1</code> cuts.&nbsp;</p>

<p style="user-select: auto;">For each cut you choose the direction: vertical or horizontal, then you choose a cut position at the cell boundary and cut the pizza into two pieces. If you cut the pizza vertically, give the left part of the pizza to a person. If you cut the pizza horizontally, give the upper part of the pizza to a person. Give the last piece of pizza to the last person.</p>

<p style="user-select: auto;"><em style="user-select: auto;">Return the number of ways of cutting the pizza such that each piece contains <strong style="user-select: auto;">at least</strong> one apple.&nbsp;</em>Since the answer can be a huge number, return this modulo 10^9 + 7.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/04/23/ways_to_cut_apple_1.png" style="width: 500px; height: 378px; user-select: auto;"></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pizza = ["A..","AAA","..."], k = 3
<strong style="user-select: auto;">Output:</strong> 3 
<strong style="user-select: auto;">Explanation:</strong> The figure above shows the three ways to cut the pizza. Note that pieces must contain at least one apple.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pizza = ["A..","AA.","..."], k = 3
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pizza = ["A..","A..","..."], k = 1
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= rows, cols &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">rows ==&nbsp;pizza.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">cols ==&nbsp;pizza[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">pizza</code> consists of characters <code style="user-select: auto;">'A'</code>&nbsp;and <code style="user-select: auto;">'.'</code> only.</li>
</ul></div>