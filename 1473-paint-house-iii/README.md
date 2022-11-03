<h2><a href="https://leetcode.com/problems/paint-house-iii/">1473. Paint House III</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a row of <code style="user-select: auto;">m</code> houses in a small city, each house must be painted with one of the <code style="user-select: auto;">n</code> colors (labeled from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>), some houses that have been painted last summer should not be painted again.</p>

<p style="user-select: auto;">A neighborhood is a maximal group of continuous houses that are painted with the same color.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example: <code style="user-select: auto;">houses = [1,2,2,3,3,2,1,1]</code> contains <code style="user-select: auto;">5</code> neighborhoods <code style="user-select: auto;">[{1}, {2,2}, {3,3}, {2}, {1,1}]</code>.</li>
</ul>

<p style="user-select: auto;">Given an array <code style="user-select: auto;">houses</code>, an <code style="user-select: auto;">m x n</code> matrix <code style="user-select: auto;">cost</code> and an integer <code style="user-select: auto;">target</code> where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">houses[i]</code>: is the color of the house <code style="user-select: auto;">i</code>, and <code style="user-select: auto;">0</code> if the house is not painted yet.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">cost[i][j]</code>: is the cost of paint the house <code style="user-select: auto;">i</code> with the color <code style="user-select: auto;">j + 1</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum cost of painting all the remaining houses in such a way that there are exactly</em> <code style="user-select: auto;">target</code> <em style="user-select: auto;">neighborhoods</em>. If it is not possible, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> houses = [0,0,0,0,0], cost = [[1,10],[10,1],[10,1],[1,10],[5,1]], m = 5, n = 2, target = 3
<strong style="user-select: auto;">Output:</strong> 9
<strong style="user-select: auto;">Explanation:</strong> Paint houses of this way [1,2,2,1,1]
This array contains target = 3 neighborhoods, [{1}, {2,2}, {1,1}].
Cost of paint all houses (1 + 1 + 1 + 1 + 5) = 9.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> houses = [0,2,1,2,0], cost = [[1,10],[10,1],[10,1],[1,10],[5,1]], m = 5, n = 2, target = 3
<strong style="user-select: auto;">Output:</strong> 11
<strong style="user-select: auto;">Explanation:</strong> Some houses are already painted, Paint the houses of this way [2,2,1,2,2]
This array contains target = 3 neighborhoods, [{2,2}, {1}, {2,2}]. 
Cost of paint the first and last house (10 + 1) = 11.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> houses = [3,1,2,3], cost = [[1,1,1],[1,1,1],[1,1,1],[1,1,1]], m = 4, n = 3, target = 3
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> Houses are already painted with a total of 4 neighborhoods [{3},{1},{2},{3}] different of target = 3.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == houses.length == cost.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == cost[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target &lt;= m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= houses[i] &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= cost[i][j] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>