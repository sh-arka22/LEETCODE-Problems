<h2><a href="https://leetcode.com/problems/stone-game/">877. Stone Game</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Alice and Bob play a game with piles of stones. There are an <strong style="user-select: auto;">even</strong> number of piles arranged in a row, and each pile has a <strong style="user-select: auto;">positive</strong> integer number of stones <code style="user-select: auto;">piles[i]</code>.</p>

<p style="user-select: auto;">The objective of the game is to end with the most stones. The <strong style="user-select: auto;">total</strong> number of stones across all the piles is <strong style="user-select: auto;">odd</strong>, so there are no ties.</p>

<p style="user-select: auto;">Alice and Bob take turns, with <strong style="user-select: auto;">Alice starting first</strong>. Each turn, a player takes the entire pile of stones either from the <strong style="user-select: auto;">beginning</strong> or from the <strong style="user-select: auto;">end</strong> of the row. This continues until there are no more piles left, at which point the person with the <strong style="user-select: auto;">most stones wins</strong>.</p>

<p style="user-select: auto;">Assuming Alice and Bob play optimally, return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if Alice wins the game, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> if Bob wins</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> piles = [5,3,4,5]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> 
Alice starts first, and can only take the first 5 or the last 5.
Say she takes the first 5, so that the row becomes [3, 4, 5].
If Bob takes 3, then the board is [4, 5], and Alice takes 5 to win with 10 points.
If Bob takes the last 5, then the board is [3, 4], and Alice takes 4 to win with 9 points.
This demonstrated that taking the first 5 was a winning move for Alice, so we return true.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> piles = [3,7,2,3]
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= piles.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">piles.length</code> is <strong style="user-select: auto;">even</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= piles[i] &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">sum(piles[i])</code> is <strong style="user-select: auto;">odd</strong>.</li>
</ul>
</div>