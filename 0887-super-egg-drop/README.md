<h2><a href="https://leetcode.com/problems/super-egg-drop/">887. Super Egg Drop</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given <code style="user-select: auto;">k</code> identical eggs and you have access to a building with <code style="user-select: auto;">n</code> floors labeled from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">You know that there exists a floor <code style="user-select: auto;">f</code> where <code style="user-select: auto;">0 &lt;= f &lt;= n</code> such that any egg dropped at a floor <strong style="user-select: auto;">higher</strong> than <code style="user-select: auto;">f</code> will <strong style="user-select: auto;">break</strong>, and any egg dropped <strong style="user-select: auto;">at or below</strong> floor <code style="user-select: auto;">f</code> will <strong style="user-select: auto;">not break</strong>.</p>

<p style="user-select: auto;">Each move, you may take an unbroken egg and drop it from any floor <code style="user-select: auto;">x</code> (where <code style="user-select: auto;">1 &lt;= x &lt;= n</code>). If the egg breaks, you can no longer use it. However, if the egg does not break, you may <strong style="user-select: auto;">reuse</strong> it in future moves.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum number of moves</strong> that you need to determine <strong style="user-select: auto;">with certainty</strong> what the value of </em><code style="user-select: auto;">f</code> is.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> k = 1, n = 2
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation: </strong>
Drop the egg from floor 1. If it breaks, we know that f = 0.
Otherwise, drop the egg from floor 2. If it breaks, we know that f = 1.
If it does not break, then we know f = 2.
Hence, we need at minimum 2 moves to determine with certainty what the value of f is.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> k = 2, n = 6
<strong style="user-select: auto;">Output:</strong> 3
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> k = 3, n = 14
<strong style="user-select: auto;">Output:</strong> 4
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>