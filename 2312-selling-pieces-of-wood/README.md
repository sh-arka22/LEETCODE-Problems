<h2><a href="https://leetcode.com/problems/selling-pieces-of-wood/">2312. Selling Pieces of Wood</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two integers <code style="user-select: auto;">m</code> and <code style="user-select: auto;">n</code> that represent the height and width of a rectangular piece of wood. You are also given a 2D integer array <code style="user-select: auto;">prices</code>, where <code style="user-select: auto;">prices[i] = [h<sub style="user-select: auto;">i</sub>, w<sub style="user-select: auto;">i</sub>, price<sub style="user-select: auto;">i</sub>]</code> indicates you can sell a rectangular piece of wood of height <code style="user-select: auto;">h<sub style="user-select: auto;">i</sub></code> and width <code style="user-select: auto;">w<sub style="user-select: auto;">i</sub></code> for <code style="user-select: auto;">price<sub style="user-select: auto;">i</sub></code> dollars.</p>

<p style="user-select: auto;">To cut a piece of wood, you must make a vertical or horizontal cut across the <strong style="user-select: auto;">entire</strong> height or width of the piece to split it into two smaller pieces. After cutting a piece of wood into some number of smaller pieces, you can sell pieces according to <code style="user-select: auto;">prices</code>. You may sell multiple pieces of the same shape, and you do not have to sell all the shapes. The grain of the wood makes a difference, so you <strong style="user-select: auto;">cannot</strong> rotate a piece to swap its height and width.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> money you can earn after cutting an </em><code style="user-select: auto;">m x n</code><em style="user-select: auto;"> piece of wood</em>.</p>

<p style="user-select: auto;">Note that you can cut the piece of wood as many times as you want.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/04/27/ex1.png" style="width: 239px; height: 150px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> m = 3, n = 5, prices = [[1,4,2],[2,2,7],[2,1,3]]
<strong style="user-select: auto;">Output:</strong> 19
<strong style="user-select: auto;">Explanation:</strong> The diagram above shows a possible scenario. It consists of:
- 2 pieces of wood shaped 2 x 2, selling for a price of 2 * 7 = 14.
- 1 piece of wood shaped 2 x 1, selling for a price of 1 * 3 = 3.
- 1 piece of wood shaped 1 x 4, selling for a price of 1 * 2 = 2.
This obtains a total of 14 + 3 + 2 = 19 money earned.
It can be shown that 19 is the maximum amount of money that can be earned.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/04/27/ex2new.png" style="width: 250px; height: 175px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> m = 4, n = 6, prices = [[3,2,10],[1,4,2],[4,1,3]]
<strong style="user-select: auto;">Output:</strong> 32
<strong style="user-select: auto;">Explanation:</strong> The diagram above shows a possible scenario. It consists of:
- 3 pieces of wood shaped 3 x 2, selling for a price of 3 * 10 = 30.
- 1 piece of wood shaped 1 x 4, selling for a price of 1 * 2 = 2.
This obtains a total of 30 + 2 = 32 money earned.
It can be shown that 32 is the maximum amount of money that can be earned.
Notice that we cannot rotate the 1 x 4 piece of wood to obtain a 4 x 1 piece of wood.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 200</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= prices.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">prices[i].length == 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= h<sub style="user-select: auto;">i</sub> &lt;= m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= w<sub style="user-select: auto;">i</sub> &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= price<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;">All the shapes of wood <code style="user-select: auto;">(h<sub style="user-select: auto;">i</sub>, w<sub style="user-select: auto;">i</sub>)</code> are pairwise <strong style="user-select: auto;">distinct</strong>.</li>
</ul>
</div>