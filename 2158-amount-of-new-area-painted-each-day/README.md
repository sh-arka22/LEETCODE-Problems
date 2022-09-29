<h2><a href="https://leetcode.com/problems/amount-of-new-area-painted-each-day/">2158. Amount of New Area Painted Each Day</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a long and thin painting that can be represented by a number line. You are given a <strong style="user-select: auto;">0-indexed</strong> 2D integer array <code style="user-select: auto;">paint</code> of length <code style="user-select: auto;">n</code>, where <code style="user-select: auto;">paint[i] = [start<sub style="user-select: auto;">i</sub>, end<sub style="user-select: auto;">i</sub>]</code>. This means that on the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> day you need to paint the area <strong style="user-select: auto;">between</strong> <code style="user-select: auto;">start<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">end<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;">Painting the same area multiple times will create an uneven painting so you only want to paint each area of the painting at most <strong style="user-select: auto;">once</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an integer array </em><code style="user-select: auto;">worklog</code><em style="user-select: auto;"> of length </em><code style="user-select: auto;">n</code><em style="user-select: auto;">, where </em><code style="user-select: auto;">worklog[i]</code><em style="user-select: auto;"> is the amount of <strong style="user-select: auto;">new</strong> area that you painted on the </em><code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code><em style="user-select: auto;"> day.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2022/02/01/screenshot-2022-02-01-at-17-16-16-diagram-drawio-diagrams-net.png" style="height: 300px; width: 620px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> paint = [[1,4],[4,7],[5,8]]
<strong style="user-select: auto;">Output:</strong> [3,3,1]
<strong style="user-select: auto;">Explanation:</strong>
On day 0, paint everything between 1 and 4.
The amount of new area painted on day 0 is 4 - 1 = 3.
On day 1, paint everything between 4 and 7.
The amount of new area painted on day 1 is 7 - 4 = 3.
On day 2, paint everything between 7 and 8.
Everything between 5 and 7 was already painted on day 1.
The amount of new area painted on day 2 is 8 - 7 = 1. 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img src="https://assets.leetcode.com/uploads/2022/02/01/screenshot-2022-02-01-at-17-17-45-diagram-drawio-diagrams-net.png" style="width: 604px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> paint = [[1,4],[5,8],[4,7]]
<strong style="user-select: auto;">Output:</strong> [3,3,1]
<strong style="user-select: auto;">Explanation:</strong>
On day 0, paint everything between 1 and 4.
The amount of new area painted on day 0 is 4 - 1 = 3.
On day 1, paint everything between 5 and 8.
The amount of new area painted on day 1 is 8 - 5 = 3.
On day 2, paint everything between 4 and 5.
Everything between 5 and 7 was already painted on day 1.
The amount of new area painted on day 2 is 5 - 4 = 1. 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img src="https://assets.leetcode.com/uploads/2022/02/01/screenshot-2022-02-01-at-17-19-49-diagram-drawio-diagrams-net.png" style="width: 423px; height: 275px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> paint = [[1,5],[2,4]]
<strong style="user-select: auto;">Output:</strong> [4,0]
<strong style="user-select: auto;">Explanation:</strong>
On day 0, paint everything between 1 and 5.
The amount of new area painted on day 0 is 5 - 1 = 4.
On day 1, paint nothing because everything between 2 and 4 was already painted on day 0.
The amount of new area painted on day 1 is 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= paint.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">paint[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= start<sub style="user-select: auto;">i</sub> &lt; end<sub style="user-select: auto;">i</sub> &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>