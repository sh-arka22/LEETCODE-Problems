<h2><a href="https://leetcode.com/problems/maximum-number-of-visible-points/">1610. Maximum Number of Visible Points</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">points</code>, an integer <code style="user-select: auto;">angle</code>, and your <code style="user-select: auto;">location</code>, where <code style="user-select: auto;">location = [pos<sub style="user-select: auto;">x</sub>, pos<sub style="user-select: auto;">y</sub>]</code> and <code style="user-select: auto;">points[i] = [x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>]</code> both denote <strong style="user-select: auto;">integral coordinates</strong> on the X-Y plane.</p>

<p style="user-select: auto;">Initially, you are facing directly east from your position. You <strong style="user-select: auto;">cannot move</strong> from your position, but you can <strong style="user-select: auto;">rotate</strong>. In other words, <code style="user-select: auto;">pos<sub style="user-select: auto;">x</sub></code> and <code style="user-select: auto;">pos<sub style="user-select: auto;">y</sub></code> cannot be changed. Your field of view in <strong style="user-select: auto;">degrees</strong> is represented by <code style="user-select: auto;">angle</code>, determining how wide you can see from any given view direction. Let <code style="user-select: auto;">d</code> be the amount in degrees that you rotate counterclockwise. Then, your field of view is the <strong style="user-select: auto;">inclusive</strong> range of angles <code style="user-select: auto;">[d - angle/2, d + angle/2]</code>.</p>

<p style="user-select: auto;">
<video autoplay="" controls="" height="360" muted="" style="max-width: 100%; height: auto; user-select: auto;" width="480"><source src="https://assets.leetcode.com/uploads/2020/09/30/angle.mp4" type="video/mp4" style="user-select: auto;">Your browser does not support the video tag or this video format.</video>
</p>

<p style="user-select: auto;">You can <strong style="user-select: auto;">see</strong> some set of points if, for each point, the <strong style="user-select: auto;">angle</strong> formed by the point, your position, and the immediate east direction from your position is <strong style="user-select: auto;">in your field of view</strong>.</p>

<p style="user-select: auto;">There can be multiple points at one coordinate. There may be points at your location, and you can always see these points regardless of your rotation. Points do not obstruct your vision to other points.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum number of points you can see</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/30/89a07e9b-00ab-4967-976a-c723b2aa8656.png" style="width: 400px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[2,1],[2,2],[3,3]], angle = 90, location = [1,1]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The shaded region represents your field of view. All points can be made visible in your field of view, including [3,3] even though [2,2] is in front and in the same line of sight.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[2,1],[2,2],[3,4],[1,1]], angle = 90, location = [1,1]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> All points can be made visible in your field of view, including the one at your location.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/30/5010bfd3-86e6-465f-ac64-e9df941d2e49.png" style="width: 690px; height: 348px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[1,0],[2,1]], angle = 13, location = [1,1]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> You can only see one of the two points, as shown above.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= points.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">points[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">location.length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= angle &lt; 360</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= pos<sub style="user-select: auto;">x</sub>, pos<sub style="user-select: auto;">y</sub>, x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub> &lt;= 100</code></li>
</ul>
</div>