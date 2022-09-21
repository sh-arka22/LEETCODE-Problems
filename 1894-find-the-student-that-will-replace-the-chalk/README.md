<h2><a href="https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk/">1894. Find the Student that Will Replace the Chalk</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> students in a class numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>. The teacher will give each student a problem starting with the student number <code style="user-select: auto;">0</code>, then the student number <code style="user-select: auto;">1</code>, and so on until the teacher reaches the student number <code style="user-select: auto;">n - 1</code>. After that, the teacher will restart the process, starting with the student number <code style="user-select: auto;">0</code> again.</p>

<p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">chalk</code> and an integer <code style="user-select: auto;">k</code>. There are initially <code style="user-select: auto;">k</code> pieces of chalk. When the student number <code style="user-select: auto;">i</code> is given a problem to solve, they will use <code style="user-select: auto;">chalk[i]</code> pieces of chalk to solve that problem. However, if the current number of chalk pieces is <strong style="user-select: auto;">strictly less</strong> than <code style="user-select: auto;">chalk[i]</code>, then the student number <code style="user-select: auto;">i</code> will be asked to <strong style="user-select: auto;">replace</strong> the chalk.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">index</strong> of the student that will <strong style="user-select: auto;">replace</strong> the chalk</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> chalk = [5,1,5], k = 22
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation: </strong>The students go in turns as follows:
- Student number 0 uses 5 chalk, so k = 17.
- Student number 1 uses 1 chalk, so k = 16.
- Student number 2 uses 5 chalk, so k = 11.
- Student number 0 uses 5 chalk, so k = 6.
- Student number 1 uses 1 chalk, so k = 5.
- Student number 2 uses 5 chalk, so k = 0.
Student number 0 does not have enough chalk, so they will have to replace it.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> chalk = [3,4,1,2], k = 25
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation: </strong>The students go in turns as follows:
- Student number 0 uses 3 chalk so k = 22.
- Student number 1 uses 4 chalk so k = 18.
- Student number 2 uses 1 chalk so k = 17.
- Student number 3 uses 2 chalk so k = 15.
- Student number 0 uses 3 chalk so k = 12.
- Student number 1 uses 4 chalk so k = 8.
- Student number 2 uses 1 chalk so k = 7.
- Student number 3 uses 2 chalk so k = 5.
- Student number 0 uses 3 chalk so k = 2.
Student number 1 does not have enough chalk, so they will have to replace it.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">chalk.length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= chalk[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>