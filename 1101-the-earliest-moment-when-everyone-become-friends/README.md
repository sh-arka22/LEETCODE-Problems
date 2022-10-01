<h2><a href="https://leetcode.com/problems/the-earliest-moment-when-everyone-become-friends/">1101. The Earliest Moment When Everyone Become Friends</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are n people in a social group labeled from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>. You are given an array <code style="user-select: auto;">logs</code> where <code style="user-select: auto;">logs[i] = [timestamp<sub style="user-select: auto;">i</sub>, x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>]</code> indicates that <code style="user-select: auto;">x<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">y<sub style="user-select: auto;">i</sub></code> will be friends at the time <code style="user-select: auto;">timestamp<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;">Friendship is <strong style="user-select: auto;">symmetric</strong>. That means if <code style="user-select: auto;">a</code> is friends with <code style="user-select: auto;">b</code>, then <code style="user-select: auto;">b</code> is friends with <code style="user-select: auto;">a</code>. Also, person <code style="user-select: auto;">a</code> is acquainted with a person <code style="user-select: auto;">b</code> if <code style="user-select: auto;">a</code> is friends with <code style="user-select: auto;">b</code>, or <code style="user-select: auto;">a</code> is a friend of someone acquainted with <code style="user-select: auto;">b</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the earliest time for which every person became acquainted with every other person</em>. If there is no such earliest time, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> logs = [[20190101,0,1],[20190104,3,4],[20190107,2,3],[20190211,1,5],[20190224,2,4],[20190301,0,3],[20190312,1,2],[20190322,4,5]], n = 6
<strong style="user-select: auto;">Output:</strong> 20190301
<strong style="user-select: auto;">Explanation:</strong> 
The first event occurs at timestamp = 20190101 and after 0 and 1 become friends we have the following friendship groups [0,1], [2], [3], [4], [5].
The second event occurs at timestamp = 20190104 and after 3 and 4 become friends we have the following friendship groups [0,1], [2], [3,4], [5].
The third event occurs at timestamp = 20190107 and after 2 and 3 become friends we have the following friendship groups [0,1], [2,3,4], [5].
The fourth event occurs at timestamp = 20190211 and after 1 and 5 become friends we have the following friendship groups [0,1,5], [2,3,4].
The fifth event occurs at timestamp = 20190224 and as 2 and 4 are already friends anything happens.
The sixth event occurs at timestamp = 20190301 and after 0 and 3 become friends we have that all become friends.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> logs = [[0,2,0],[1,0,1],[3,0,3],[4,1,2],[7,3,1]], n = 4
<strong style="user-select: auto;">Output:</strong> 3
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= logs.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">logs[i].length == 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= timestamp<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub> &lt;= n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">x<sub style="user-select: auto;">i</sub> != y<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;">All the values <code style="user-select: auto;">timestamp<sub style="user-select: auto;">i</sub></code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;">All the pairs <code style="user-select: auto;">(x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>)</code> occur at most one time in the input.</li>
</ul>
</div>