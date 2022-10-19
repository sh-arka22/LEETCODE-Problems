<h2><a href="https://leetcode.com/problems/reach-a-number/">754. Reach a Number</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are standing at position <code style="user-select: auto;">0</code> on an infinite number line. There is a destination at position <code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">You can make some number of moves <code style="user-select: auto;">numMoves</code> so that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">On each move, you can either go left or right.</li>
	<li style="user-select: auto;">During the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> move (starting from <code style="user-select: auto;">i == 1</code> to <code style="user-select: auto;">i == numMoves</code>), you take <code style="user-select: auto;">i</code> steps in the chosen direction.</li>
</ul>

<p style="user-select: auto;">Given the integer <code style="user-select: auto;">target</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> number of moves required (i.e., the minimum </em><code style="user-select: auto;">numMoves</code><em style="user-select: auto;">) to reach the destination</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = 2
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
On the 1<sup style="user-select: auto;">st</sup> move, we step from 0 to 1 (1 step).
On the 2<sup style="user-select: auto;">nd</sup> move, we step from 1 to -1 (2 steps).
On the 3<sup style="user-select: auto;">rd</sup> move, we step from -1 to 2 (3 steps).
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = 3
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
On the 1<sup style="user-select: auto;">st</sup> move, we step from 0 to 1 (1 step).
On the 2<sup style="user-select: auto;">nd</sup> move, we step from 1 to 3 (2 steps).
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">9</sup> &lt;= target &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">target != 0</code></li>
</ul>
</div>