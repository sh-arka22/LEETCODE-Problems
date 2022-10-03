<h2><a href="https://leetcode.com/problems/minimum-time-to-make-rope-colorful/">1578. Minimum Time to Make Rope Colorful</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Alice has <code style="user-select: auto;">n</code> balloons arranged on a rope. You are given a <strong style="user-select: auto;">0-indexed</strong> string <code style="user-select: auto;">colors</code> where <code style="user-select: auto;">colors[i]</code> is the color of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> balloon.</p>

<p style="user-select: auto;">Alice wants the rope to be <strong style="user-select: auto;">colorful</strong>. She does not want <strong style="user-select: auto;">two consecutive balloons</strong> to be of the same color, so she asks Bob for help. Bob can remove some balloons from the rope to make it <strong style="user-select: auto;">colorful</strong>. You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">neededTime</code> where <code style="user-select: auto;">neededTime[i]</code> is the time (in seconds) that Bob needs to remove the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> balloon from the rope.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum time</strong> Bob needs to make the rope <strong style="user-select: auto;">colorful</strong></em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/13/ballon1.jpg" style="width: 404px; height: 243px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> colors = "abaac", neededTime = [1,2,3,4,5]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> In the above image, 'a' is blue, 'b' is red, and 'c' is green.
Bob can remove the blue balloon at index 2. This takes 3 seconds.
There are no longer two consecutive balloons of the same color. Total time = 3.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/13/balloon2.jpg" style="width: 244px; height: 243px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> colors = "abc", neededTime = [1,2,3]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The rope is already colorful. Bob does not need to remove any balloons from the rope.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/13/balloon3.jpg" style="width: 404px; height: 243px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> colors = "aabaa", neededTime = [1,2,3,4,1]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Bob will remove the ballons at indices 0 and 4. Each ballon takes 1 second to remove.
There are no longer two consecutive balloons of the same color. Total time = 1 + 1 = 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == colors.length == neededTime.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= neededTime[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">colors</code> contains only lowercase English letters.</li>
</ul>
</div>