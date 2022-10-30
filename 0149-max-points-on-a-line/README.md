<h2><a href="https://leetcode.com/problems/max-points-on-a-line/">149. Max Points on a Line</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of <code style="user-select: auto;">points</code> where <code style="user-select: auto;">points[i] = [x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>]</code> represents a point on the <strong style="user-select: auto;">X-Y</strong> plane, return <em style="user-select: auto;">the maximum number of points that lie on the same straight line</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/25/plane1.jpg" style="width: 300px; height: 294px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[1,1],[2,2],[3,3]]
<strong style="user-select: auto;">Output:</strong> 3
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/25/plane2.jpg" style="width: 300px; height: 294px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]
<strong style="user-select: auto;">Output:</strong> 4
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= points.length &lt;= 300</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">points[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;">All the <code style="user-select: auto;">points</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>