<h2><a href="https://leetcode.com/problems/online-election/">911. Online Election</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two integer arrays <code style="user-select: auto;">persons</code> and <code style="user-select: auto;">times</code>. In an election, the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> vote was cast for <code style="user-select: auto;">persons[i]</code> at time <code style="user-select: auto;">times[i]</code>.</p>

<p style="user-select: auto;">For each query at a time <code style="user-select: auto;">t</code>, find the person that was leading the election at time <code style="user-select: auto;">t</code>. Votes cast at time <code style="user-select: auto;">t</code> will count towards our query. In the case of a tie, the most recent vote (among tied candidates) wins.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">TopVotedCandidate</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">TopVotedCandidate(int[] persons, int[] times)</code> Initializes the object with the <code style="user-select: auto;">persons</code> and <code style="user-select: auto;">times</code> arrays.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int q(int t)</code> Returns the number of the person that was leading the election at time <code style="user-select: auto;">t</code> according to the mentioned rules.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["TopVotedCandidate", "q", "q", "q", "q", "q", "q"]
[[[0, 1, 1, 0, 0, 1, 0], [0, 5, 10, 15, 20, 25, 30]], [3], [12], [25], [15], [24], [8]]
<strong style="user-select: auto;">Output</strong>
[null, 0, 1, 1, 0, 0, 1]

<strong style="user-select: auto;">Explanation</strong>
TopVotedCandidate topVotedCandidate = new TopVotedCandidate([0, 1, 1, 0, 0, 1, 0], [0, 5, 10, 15, 20, 25, 30]);
topVotedCandidate.q(3); // return 0, At time 3, the votes are [0], and 0 is leading.
topVotedCandidate.q(12); // return 1, At time 12, the votes are [0,1,1], and 1 is leading.
topVotedCandidate.q(25); // return 1, At time 25, the votes are [0,1,1,0,0,1], and 1 is leading (as ties go to the most recent vote.)
topVotedCandidate.q(15); // return 0
topVotedCandidate.q(24); // return 0
topVotedCandidate.q(8); // return 1

</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= persons.length &lt;= 5000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">times.length == persons.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= persons[i] &lt; persons.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= times[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">times</code> is sorted in a strictly increasing order.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">times[0] &lt;= t &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">10<sup style="user-select: auto;">4</sup></code> calls will be made to <code style="user-select: auto;">q</code>.</li>
</ul>
</div>