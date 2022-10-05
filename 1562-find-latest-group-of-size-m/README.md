<h2><a href="https://leetcode.com/problems/find-latest-group-of-size-m/">1562. Find Latest Group of Size M</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array <code style="user-select: auto;">arr</code> that represents a permutation of numbers from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">You have a binary string of size <code style="user-select: auto;">n</code> that initially has all its bits set to zero. At each step <code style="user-select: auto;">i</code> (assuming both the binary string and <code style="user-select: auto;">arr</code> are 1-indexed) from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>, the bit at position <code style="user-select: auto;">arr[i]</code> is set to <code style="user-select: auto;">1</code>.</p>

<p style="user-select: auto;">You are also given an integer <code style="user-select: auto;">m</code>. Find the latest step at which there exists a group of ones of length <code style="user-select: auto;">m</code>. A group of ones is a contiguous substring of <code style="user-select: auto;">1</code>'s such that it cannot be extended in either direction.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the latest step at which there exists a group of ones of length <strong style="user-select: auto;">exactly</strong></em> <code style="user-select: auto;">m</code>. <em style="user-select: auto;">If no such group exists, return</em> <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [3,5,1,2,4], m = 1
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> 
Step 1: "00<u style="user-select: auto;">1</u>00", groups: ["1"]
Step 2: "0010<u style="user-select: auto;">1</u>", groups: ["1", "1"]
Step 3: "<u style="user-select: auto;">1</u>0101", groups: ["1", "1", "1"]
Step 4: "1<u style="user-select: auto;">1</u>101", groups: ["111", "1"]
Step 5: "111<u style="user-select: auto;">1</u>1", groups: ["11111"]
The latest step at which there exists a group of size 1 is step 4.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [3,1,5,4,2], m = 2
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> 
Step 1: "00<u style="user-select: auto;">1</u>00", groups: ["1"]
Step 2: "<u style="user-select: auto;">1</u>0100", groups: ["1", "1"]
Step 3: "1010<u style="user-select: auto;">1</u>", groups: ["1", "1", "1"]
Step 4: "101<u style="user-select: auto;">1</u>1", groups: ["1", "111"]
Step 5: "1<u style="user-select: auto;">1</u>111", groups: ["11111"]
No group of size 2 exists during any step.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == arr.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr[i] &lt;= n</code></li>
	<li style="user-select: auto;">All integers in <code style="user-select: auto;">arr</code> are <strong style="user-select: auto;">distinct</strong>.</li>
</ul>
</div>