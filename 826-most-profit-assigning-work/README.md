<h2><a href="https://leetcode.com/problems/most-profit-assigning-work/">826. Most Profit Assigning Work</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have <code style="user-select: auto;">n</code> jobs and <code style="user-select: auto;">m</code> workers. You are given three arrays: <code style="user-select: auto;">difficulty</code>, <code style="user-select: auto;">profit</code>, and <code style="user-select: auto;">worker</code> where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">difficulty[i]</code> and <code style="user-select: auto;">profit[i]</code> are the difficulty and the profit of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> job, and</li>
	<li style="user-select: auto;"><code style="user-select: auto;">worker[j]</code> is the ability of <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> worker (i.e., the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> worker can only complete a job with difficulty at most <code style="user-select: auto;">worker[j]</code>).</li>
</ul>

<p style="user-select: auto;">Every worker can be assigned <strong style="user-select: auto;">at most one job</strong>, but one job can be <strong style="user-select: auto;">completed multiple times</strong>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if three workers attempt the same job that pays <code style="user-select: auto;">$1</code>, then the total profit will be <code style="user-select: auto;">$3</code>. If a worker cannot complete any job, their profit is <code style="user-select: auto;">$0</code>.</li>
</ul>

<p style="user-select: auto;">Return the maximum profit we can achieve after assigning the workers to the jobs.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> difficulty = [2,4,6,8,10], profit = [10,20,30,40,50], worker = [4,5,6,7]
<strong style="user-select: auto;">Output:</strong> 100
<strong style="user-select: auto;">Explanation:</strong> Workers are assigned jobs of difficulty [4,4,6,6] and they get a profit of [20,20,30,30] separately.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> difficulty = [85,47,57], profit = [24,66,99], worker = [40,25,25]
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == difficulty.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == profit.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">m == worker.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n, m &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= difficulty[i], profit[i], worker[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>