<h2><a href="https://leetcode.com/problems/minimum-operations-to-make-array-equal/">1551. Minimum Operations to Make Array Equal</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have an array <code style="user-select: auto;">arr</code> of length <code style="user-select: auto;">n</code> where <code style="user-select: auto;">arr[i] = (2 * i) + 1</code> for all valid values of <code style="user-select: auto;">i</code> (i.e.,&nbsp;<code style="user-select: auto;">0 &lt;= i &lt; n</code>).</p>

<p style="user-select: auto;">In one operation, you can select two indices <code style="user-select: auto;">x</code> and <code style="user-select: auto;">y</code> where <code style="user-select: auto;">0 &lt;= x, y &lt; n</code> and subtract <code style="user-select: auto;">1</code> from <code style="user-select: auto;">arr[x]</code> and add <code style="user-select: auto;">1</code> to <code style="user-select: auto;">arr[y]</code> (i.e., perform <code style="user-select: auto;">arr[x] -=1 </code>and <code style="user-select: auto;">arr[y] += 1</code>). The goal is to make all the elements of the array <strong style="user-select: auto;">equal</strong>. It is <strong style="user-select: auto;">guaranteed</strong> that all the elements of the array can be made equal using some operations.</p>

<p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code>, the length of the array, return <em style="user-select: auto;">the minimum number of operations</em> needed to make all the elements of arr equal.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> arr = [1, 3, 5]
First operation choose x = 2 and y = 0, this leads arr to be [2, 3, 4]
In the second operation choose x = 2 and y = 0 again, thus arr = [3, 3, 3].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 6
<strong style="user-select: auto;">Output:</strong> 9
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>