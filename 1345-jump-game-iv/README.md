<h2><a href="https://leetcode.com/problems/jump-game-iv/">1345. Jump Game IV</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of&nbsp;integers <code style="user-select: auto;">arr</code>, you are initially positioned at the first index of the array.</p>

<p style="user-select: auto;">In one step you can jump from index <code style="user-select: auto;">i</code> to index:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">i + 1</code> where:&nbsp;<code style="user-select: auto;">i + 1 &lt; arr.length</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">i - 1</code> where:&nbsp;<code style="user-select: auto;">i - 1 &gt;= 0</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">j</code> where: <code style="user-select: auto;">arr[i] == arr[j]</code> and <code style="user-select: auto;">i != j</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of steps</em> to reach the <strong style="user-select: auto;">last index</strong> of the array.</p>

<p style="user-select: auto;">Notice that you can not jump outside of the array at any time.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [100,-23,-23,404,100,23,23,23,3,404]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> You need three jumps from index 0 --&gt; 4 --&gt; 3 --&gt; 9. Note that index 9 is the last index of the array.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [7]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> Start index is the last index. You do not need to jump.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [7,6,9,6,9,6,9,7]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> You can jump directly from index 0 to index 7 which is last index of the array.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">8</sup> &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">8</sup></code></li>
</ul>
</div>