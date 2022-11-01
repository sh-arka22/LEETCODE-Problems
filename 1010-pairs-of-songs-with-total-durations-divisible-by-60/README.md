<h2><a href="https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/">1010. Pairs of Songs With Total Durations Divisible by 60</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a list of songs where the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> song has a duration of <code style="user-select: auto;">time[i]</code> seconds.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of pairs of songs for which their total duration in seconds is divisible by</em> <code style="user-select: auto;">60</code>. Formally, we want the number of indices <code style="user-select: auto;">i</code>, <code style="user-select: auto;">j</code> such that <code style="user-select: auto;">i &lt; j</code> with <code style="user-select: auto;">(time[i] + time[j]) % 60 == 0</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> time = [30,20,150,100,40]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Three pairs have a total duration divisible by 60:
(time[0] = 30, time[2] = 150): total duration 180
(time[1] = 20, time[3] = 100): total duration 120
(time[1] = 20, time[4] = 40): total duration 60
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> time = [60,60,60]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> All three pairs have a total duration of 120, which is divisible by 60.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= time.length &lt;= 6 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= time[i] &lt;= 500</code></li>
</ul>
</div>