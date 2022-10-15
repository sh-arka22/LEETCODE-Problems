<h2><a href="https://leetcode.com/problems/maximize-distance-to-closest-person/">849. Maximize Distance to Closest Person</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array representing a row of <code style="user-select: auto;">seats</code> where <code style="user-select: auto;">seats[i] = 1</code> represents a person sitting in the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> seat, and <code style="user-select: auto;">seats[i] = 0</code> represents that the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> seat is empty <strong style="user-select: auto;">(0-indexed)</strong>.</p>

<p style="user-select: auto;">There is at least one empty seat, and at least one person sitting.</p>

<p style="user-select: auto;">Alex wants to sit in the seat such that the distance between him and the closest person to him is maximized.&nbsp;</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">that maximum distance to the closest person</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/10/distance.jpg" style="width: 650px; height: 257px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> seats = [1,0,0,0,1,0,1]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation: </strong>
If Alex sits in the second open seat (i.e. seats[2]), then the closest person has distance 2.
If Alex sits in any other open seat, the closest person has distance 1.
Thus, the maximum distance to the closest person is 2.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> seats = [1,0,0,0]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation: </strong>
If Alex sits in the last seat (i.e. seats[3]), the closest person is 3 seats away.
This is the maximum distance possible, so the answer is 3.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> seats = [0,1]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= seats.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">seats[i]</code>&nbsp;is <code style="user-select: auto;">0</code> or&nbsp;<code style="user-select: auto;">1</code>.</li>
	<li style="user-select: auto;">At least one seat is <strong style="user-select: auto;">empty</strong>.</li>
	<li style="user-select: auto;">At least one seat is <strong style="user-select: auto;">occupied</strong>.</li>
</ul>
</div>