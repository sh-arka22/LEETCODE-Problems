<h2><a href="https://leetcode.com/problems/minimum-speed-to-arrive-on-time/">1870. Minimum Speed to Arrive on Time</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a floating-point number <code style="user-select: auto;">hour</code>, representing the amount of time you have to reach the office. To commute to the office, you must take <code style="user-select: auto;">n</code> trains in sequential order. You are also given an integer array <code style="user-select: auto;">dist</code> of length <code style="user-select: auto;">n</code>, where <code style="user-select: auto;">dist[i]</code> describes the distance (in kilometers) of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> train ride.</p>

<p style="user-select: auto;">Each train can only depart at an integer hour, so you may need to wait in between each train ride.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if the <code style="user-select: auto;">1<sup style="user-select: auto;">st</sup></code> train ride takes <code style="user-select: auto;">1.5</code> hours, you must wait for an additional <code style="user-select: auto;">0.5</code> hours before you can depart on the <code style="user-select: auto;">2<sup style="user-select: auto;">nd</sup></code> train ride at the 2 hour mark.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum positive integer</strong> speed <strong style="user-select: auto;">(in kilometers per hour)</strong> that all the trains must travel at for you to reach the office on time, or </em><code style="user-select: auto;">-1</code><em style="user-select: auto;"> if it is impossible to be on time</em>.</p>

<p style="user-select: auto;">Tests are generated such that the answer will not exceed <code style="user-select: auto;">10<sup style="user-select: auto;">7</sup></code> and <code style="user-select: auto;">hour</code> will have <strong style="user-select: auto;">at most two digits after the decimal point</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> dist = [1,3,2], hour = 6
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation: </strong>At speed 1:
- The first train ride takes 1/1 = 1 hour.
- Since we are already at an integer hour, we depart immediately at the 1 hour mark. The second train takes 3/1 = 3 hours.
- Since we are already at an integer hour, we depart immediately at the 4 hour mark. The third train takes 2/1 = 2 hours.
- You will arrive at exactly the 6 hour mark.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> dist = [1,3,2], hour = 2.7
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation: </strong>At speed 3:
- The first train ride takes 1/3 = 0.33333 hours.
- Since we are not at an integer hour, we wait until the 1 hour mark to depart. The second train ride takes 3/3 = 1 hour.
- Since we are already at an integer hour, we depart immediately at the 2 hour mark. The third train takes 2/3 = 0.66667 hours.
- You will arrive at the 2.66667 hour mark.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> dist = [1,3,2], hour = 1.9
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> It is impossible because the earliest the third train can depart is at the 2 hour mark.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == dist.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= dist[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= hour &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;">There will be at most two digits after the decimal point in <code style="user-select: auto;">hour</code>.</li>
</ul>
</div>