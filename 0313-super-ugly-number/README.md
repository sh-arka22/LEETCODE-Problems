<h2><a href="https://leetcode.com/problems/super-ugly-number/">313. Super Ugly Number</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">super ugly number</strong> is a positive integer whose prime factors are in the array <code style="user-select: auto;">primes</code>.</p>

<p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code> and an array of integers <code style="user-select: auto;">primes</code>, return <em style="user-select: auto;">the</em> <code style="user-select: auto;">n<sup style="user-select: auto;">th</sup></code> <em style="user-select: auto;"><strong style="user-select: auto;">super ugly number</strong></em>.</p>

<p style="user-select: auto;">The <code style="user-select: auto;">n<sup style="user-select: auto;">th</sup></code> <strong style="user-select: auto;">super ugly number</strong> is <strong style="user-select: auto;">guaranteed</strong> to fit in a <strong style="user-select: auto;">32-bit</strong> signed integer.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 12, primes = [2,7,13,19]
<strong style="user-select: auto;">Output:</strong> 32
<strong style="user-select: auto;">Explanation:</strong> [1,2,4,7,8,13,14,16,19,26,28,32] is the sequence of the first 12 super ugly numbers given primes = [2,7,13,19].
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1, primes = [2,3,5]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> 1 has no prime factors, therefore all of its prime factors are in the array primes = [2,3,5].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= primes.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= primes[i] &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">primes[i]</code> is <strong style="user-select: auto;">guaranteed</strong> to be a prime number.</li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">primes</code> are <strong style="user-select: auto;">unique</strong> and sorted in <strong style="user-select: auto;">ascending order</strong>.</li>
</ul>
</div>