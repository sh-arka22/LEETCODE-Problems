<h2><a href="https://leetcode.com/problems/max-value-of-equation/">1499. Max Value of Equation</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">points</code> containing the coordinates of points on a 2D plane, sorted by the x-values, where <code style="user-select: auto;">points[i] = [x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>]</code> such that <code style="user-select: auto;">x<sub style="user-select: auto;">i</sub> &lt; x<sub style="user-select: auto;">j</sub></code> for all <code style="user-select: auto;">1 &lt;= i &lt; j &lt;= points.length</code>. You are also given an integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum value of the equation </em><code style="user-select: auto;">y<sub style="user-select: auto;">i</sub> + y<sub style="user-select: auto;">j</sub> + |x<sub style="user-select: auto;">i</sub> - x<sub style="user-select: auto;">j</sub>|</code> where <code style="user-select: auto;">|x<sub style="user-select: auto;">i</sub> - x<sub style="user-select: auto;">j</sub>| &lt;= k</code> and <code style="user-select: auto;">1 &lt;= i &lt; j &lt;= points.length</code>.</p>

<p style="user-select: auto;">It is guaranteed that there exists at least one pair of points that satisfy the constraint <code style="user-select: auto;">|x<sub style="user-select: auto;">i</sub> - x<sub style="user-select: auto;">j</sub>| &lt;= k</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[1,3],[2,0],[5,10],[6,-10]], k = 1
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The first two points satisfy the condition |x<sub style="user-select: auto;">i</sub> - x<sub style="user-select: auto;">j</sub>| &lt;= 1 and if we calculate the equation we get 3 + 0 + |1 - 2| = 4. Third and fourth points also satisfy the condition and give a value of 10 + -10 + |5 - 6| = 1.
No other pairs satisfy the condition, so we return the max of 4 and 1.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[0,0],[3,0],[9,2]], k = 3
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation: </strong>Only the first two points have an absolute difference of 3 or less in the x-values, and give the value of 0 + 0 + |0 - 3| = 3.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= points.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">points[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">8</sup> &lt;= x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">8</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k &lt;= 2 * 10<sup style="user-select: auto;">8</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">x<sub style="user-select: auto;">i</sub> &lt; x<sub style="user-select: auto;">j</sub></code> for all <code style="user-select: auto;">1 &lt;= i &lt; j &lt;= points.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">x<sub style="user-select: auto;">i</sub></code> form a strictly increasing sequence.</li>
</ul>
</div>