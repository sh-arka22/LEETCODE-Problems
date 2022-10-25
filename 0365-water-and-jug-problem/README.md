<h2><a href="https://leetcode.com/problems/water-and-jug-problem/">365. Water and Jug Problem</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two jugs with capacities <code style="user-select: auto;">jug1Capacity</code> and <code style="user-select: auto;">jug2Capacity</code> liters. There is an infinite amount of water supply available. Determine whether it is possible to measure exactly <code style="user-select: auto;">targetCapacity</code> liters using these two jugs.</p>

<p style="user-select: auto;">If <code style="user-select: auto;">targetCapacity</code> liters of water are measurable, you must have <code style="user-select: auto;">targetCapacity</code> liters of water contained <strong style="user-select: auto;">within one or both buckets</strong> by the end.</p>

<p style="user-select: auto;">Operations allowed:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Fill any of the jugs with water.</li>
	<li style="user-select: auto;">Empty any of the jugs.</li>
	<li style="user-select: auto;">Pour water from one jug into another till the other jug is completely full, or the first jug itself is empty.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> jug1Capacity = 3, jug2Capacity = 5, targetCapacity = 4
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> The famous <a href="https://www.youtube.com/watch?v=BVtQNK_ZUJg&amp;ab_channel=notnek01" target="_blank" style="user-select: auto;">Die Hard</a> example 
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> jug1Capacity = 2, jug2Capacity = 6, targetCapacity = 5
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> jug1Capacity = 1, jug2Capacity = 2, targetCapacity = 3
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= jug1Capacity, jug2Capacity, targetCapacity &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>