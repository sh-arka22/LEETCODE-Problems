<h2><a href="https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/">1011. Capacity To Ship Packages Within D Days</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A conveyor belt has packages that must be shipped from one port to another within <code style="user-select: auto;">days</code> days.</p>

<p style="user-select: auto;">The <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> package on the conveyor belt has a weight of <code style="user-select: auto;">weights[i]</code>. Each day, we load the ship with packages on the conveyor belt (in the order given by <code style="user-select: auto;">weights</code>). We may not load more weight than the maximum weight capacity of the ship.</p>

<p style="user-select: auto;">Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within <code style="user-select: auto;">days</code> days.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> weights = [1,2,3,4,5,6,7,8,9,10], days = 5
<strong style="user-select: auto;">Output:</strong> 15
<strong style="user-select: auto;">Explanation:</strong> A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
1st day: 1, 2, 3, 4, 5
2nd day: 6, 7
3rd day: 8
4th day: 9
5th day: 10

Note that the cargo must be shipped in the order given, so using a ship of capacity 14 and splitting the packages into parts like (2, 3, 4, 5), (1, 6, 7), (8), (9), (10) is not allowed.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> weights = [3,2,2,4,1,4], days = 3
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> A ship capacity of 6 is the minimum to ship all the packages in 3 days like this:
1st day: 3, 2
2nd day: 2, 4
3rd day: 1, 4
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> weights = [1,2,3,1,1], days = 4
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
1st day: 1
2nd day: 2
3rd day: 3
4th day: 1, 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= days &lt;= weights.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= weights[i] &lt;= 500</code></li>
</ul></div>