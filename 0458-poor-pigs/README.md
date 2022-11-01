<h2><a href="https://leetcode.com/problems/poor-pigs/">458. Poor Pigs</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">buckets</code> buckets of liquid, where <strong style="user-select: auto;">exactly one</strong> of the buckets is poisonous. To figure out which one is poisonous, you feed some number of (poor) pigs the liquid to see whether they will die or not. Unfortunately, you only have <code style="user-select: auto;">minutesToTest</code> minutes to determine which bucket is poisonous.</p>

<p style="user-select: auto;">You can feed the pigs according to these steps:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">Choose some live pigs to feed.</li>
	<li style="user-select: auto;">For each pig, choose which buckets to feed it. The pig will consume all the chosen buckets simultaneously and will take no time. Each pig can feed from any number of buckets, and each bucket can be fed from by any number of pigs.</li>
	<li style="user-select: auto;">Wait for <code style="user-select: auto;">minutesToDie</code> minutes. You may <strong style="user-select: auto;">not</strong> feed any other pigs during this time.</li>
	<li style="user-select: auto;">After <code style="user-select: auto;">minutesToDie</code> minutes have passed, any pigs that have been fed the poisonous bucket will die, and all others will survive.</li>
	<li style="user-select: auto;">Repeat this process until you run out of time.</li>
</ol>

<p style="user-select: auto;">Given <code style="user-select: auto;">buckets</code>, <code style="user-select: auto;">minutesToDie</code>, and <code style="user-select: auto;">minutesToTest</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> number of pigs needed to figure out which bucket is poisonous within the allotted time</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> buckets = 4, minutesToDie = 15, minutesToTest = 15
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> We can determine the poisonous bucket as follows:
At time 0, feed the first pig buckets 1 and 2, and feed the second pig buckets 2 and 3.
At time 15, there are 4 possible outcomes:
- If only the first pig dies, then bucket 1 must be poisonous.
- If only the second pig dies, then bucket 3 must be poisonous.
- If both pigs die, then bucket 2 must be poisonous.
- If neither pig dies, then bucket 4 must be poisonous.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> buckets = 4, minutesToDie = 15, minutesToTest = 30
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> We can determine the poisonous bucket as follows:
At time 0, feed the first pig bucket 1, and feed the second pig bucket 2.
At time 15, there are 2 possible outcomes:
- If either pig dies, then the poisonous bucket is the one it was fed.
- If neither pig dies, then feed the first pig bucket 3, and feed the second pig bucket 4.
At time 30, one of the two pigs must die, and the poisonous bucket is the one it was fed.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= buckets &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;=&nbsp;minutesToDie &lt;=&nbsp;minutesToTest &lt;= 100</code></li>
</ul>
</div>