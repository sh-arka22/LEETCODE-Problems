<h2><a href="https://leetcode.com/problems/find-right-interval/">436. Find Right Interval</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of <code style="user-select: auto;">intervals</code>, where <code style="user-select: auto;">intervals[i] = [start<sub style="user-select: auto;">i</sub>, end<sub style="user-select: auto;">i</sub>]</code> and each <code style="user-select: auto;">start<sub style="user-select: auto;">i</sub></code> is <strong style="user-select: auto;">unique</strong>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">right interval</strong> for an interval <code style="user-select: auto;">i</code> is an interval <code style="user-select: auto;">j</code> such that <code style="user-select: auto;">start<sub style="user-select: auto;">j</sub> &gt;= end<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">start<sub style="user-select: auto;">j</sub></code> is <strong style="user-select: auto;">minimized</strong>. Note that <code style="user-select: auto;">i</code> may equal <code style="user-select: auto;">j</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an array of <strong style="user-select: auto;">right interval</strong> indices for each interval <code style="user-select: auto;">i</code></em>. If no <strong style="user-select: auto;">right interval</strong> exists for interval <code style="user-select: auto;">i</code>, then put <code style="user-select: auto;">-1</code> at index <code style="user-select: auto;">i</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> intervals = [[1,2]]
<strong style="user-select: auto;">Output:</strong> [-1]
<strong style="user-select: auto;">Explanation:</strong> There is only one interval in the collection, so it outputs -1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> intervals = [[3,4],[2,3],[1,2]]
<strong style="user-select: auto;">Output:</strong> [-1,0,1]
<strong style="user-select: auto;">Explanation:</strong> There is no right interval for [3,4].
The right interval for [2,3] is [3,4] since start<sub style="user-select: auto;">0</sub> = 3 is the smallest start that is &gt;= end<sub style="user-select: auto;">1</sub> = 3.
The right interval for [1,2] is [2,3] since start<sub style="user-select: auto;">1</sub> = 2 is the smallest start that is &gt;= end<sub style="user-select: auto;">2</sub> = 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> intervals = [[1,4],[2,3],[3,4]]
<strong style="user-select: auto;">Output:</strong> [-1,2,-1]
<strong style="user-select: auto;">Explanation:</strong> There is no right interval for [1,4] and [3,4].
The right interval for [2,3] is [3,4] since start<sub style="user-select: auto;">2</sub> = 3 is the smallest start that is &gt;= end<sub style="user-select: auto;">1</sub> = 3.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= intervals.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">intervals[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">6</sup> &lt;= start<sub style="user-select: auto;">i</sub> &lt;= end<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;">The start point of each interval is <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>