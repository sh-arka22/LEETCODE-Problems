<h2><a href="https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/">1526. Minimum Number of Increments on Subarrays to Form a Target Array</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">target</code>. You have an integer array <code style="user-select: auto;">initial</code> of the same size as <code style="user-select: auto;">target</code> with all elements initially zeros.</p>

<p style="user-select: auto;">In one operation you can choose <strong style="user-select: auto;">any</strong> subarray from <code style="user-select: auto;">initial</code> and increment each value by one.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of operations to form a </em><code style="user-select: auto;">target</code><em style="user-select: auto;"> array from </em><code style="user-select: auto;">initial</code>.</p>

<p style="user-select: auto;">The test cases are generated so that the answer fits in a 32-bit integer.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = [1,2,3,2,1]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> We need at least 3 operations to form the target array from the initial array.
[<strong style="user-select: auto;"><u style="user-select: auto;">0,0,0,0,0</u></strong>] increment 1 from index 0 to 4 (inclusive).
[1,<strong style="user-select: auto;"><u style="user-select: auto;">1,1,1</u></strong>,1] increment 1 from index 1 to 3 (inclusive).
[1,2,<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>,2,1] increment 1 at index 2.
[1,2,3,2,1] target array is formed.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = [3,1,1,2]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> [<strong style="user-select: auto;"><u style="user-select: auto;">0,0,0,0</u></strong>] -&gt; [1,1,1,<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>] -&gt; [<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>,1,1,2] -&gt; [<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>,1,1,2] -&gt; [3,1,1,2]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = [3,1,5,4,2]
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> [<strong style="user-select: auto;"><u style="user-select: auto;">0,0,0,0,0</u></strong>] -&gt; [<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>,1,1,1,1] -&gt; [<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>,1,1,1,1] -&gt; [3,1,<strong style="user-select: auto;"><u style="user-select: auto;">1,1,1</u></strong>] -&gt; [3,1,<strong style="user-select: auto;"><u style="user-select: auto;">2,2</u></strong>,2] -&gt; [3,1,<strong style="user-select: auto;"><u style="user-select: auto;">3,3</u></strong>,2] -&gt; [3,1,<strong style="user-select: auto;"><u style="user-select: auto;">4</u></strong>,4,2] -&gt; [3,1,5,4,2].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>