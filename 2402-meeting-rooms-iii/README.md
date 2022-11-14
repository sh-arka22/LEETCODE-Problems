<h2><a href="https://leetcode.com/problems/meeting-rooms-iii/">2402. Meeting Rooms III</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer <code style="user-select: auto;">n</code>. There are <code style="user-select: auto;">n</code> rooms numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>.</p>

<p style="user-select: auto;">You are given a 2D integer array <code style="user-select: auto;">meetings</code> where <code style="user-select: auto;">meetings[i] = [start<sub style="user-select: auto;">i</sub>, end<sub style="user-select: auto;">i</sub>]</code> means that a meeting will be held during the <strong style="user-select: auto;">half-closed</strong> time interval <code style="user-select: auto;">[start<sub style="user-select: auto;">i</sub>, end<sub style="user-select: auto;">i</sub>)</code>. All the values of <code style="user-select: auto;">start<sub style="user-select: auto;">i</sub></code> are <strong style="user-select: auto;">unique</strong>.</p>

<p style="user-select: auto;">Meetings are allocated to rooms in the following manner:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">Each meeting will take place in the unused room with the <strong style="user-select: auto;">lowest</strong> number.</li>
	<li style="user-select: auto;">If there are no available rooms, the meeting will be delayed until a room becomes free. The delayed meeting should have the <strong style="user-select: auto;">same</strong> duration as the original meeting.</li>
	<li style="user-select: auto;">When a room becomes unused, meetings that have an earlier original <strong style="user-select: auto;">start</strong> time should be given the room.</li>
</ol>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the <strong style="user-select: auto;">number</strong> of the room that held the most meetings. </em>If there are multiple rooms, return<em style="user-select: auto;"> the room with the <strong style="user-select: auto;">lowest</strong> number.</em></p>

<p style="user-select: auto;">A <strong style="user-select: auto;">half-closed interval</strong> <code style="user-select: auto;">[a, b)</code> is the interval between <code style="user-select: auto;">a</code> and <code style="user-select: auto;">b</code> <strong style="user-select: auto;">including</strong> <code style="user-select: auto;">a</code> and <strong style="user-select: auto;">not including</strong> <code style="user-select: auto;">b</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2, meetings = [[0,10],[1,5],[2,7],[3,4]]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>
- At time 0, both rooms are not being used. The first meeting starts in room 0.
- At time 1, only room 1 is not being used. The second meeting starts in room 1.
- At time 2, both rooms are being used. The third meeting is delayed.
- At time 3, both rooms are being used. The fourth meeting is delayed.
- At time 5, the meeting in room 1 finishes. The third meeting starts in room 1 for the time period [5,10).
- At time 10, the meetings in both rooms finish. The fourth meeting starts in room 0 for the time period [10,11).
Both rooms 0 and 1 held 2 meetings, so we return 0. 
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, meetings = [[1,20],[2,10],[3,5],[4,9],[6,8]]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong>
- At time 1, all three rooms are not being used. The first meeting starts in room 0.
- At time 2, rooms 1 and 2 are not being used. The second meeting starts in room 1.
- At time 3, only room 2 is not being used. The third meeting starts in room 2.
- At time 4, all three rooms are being used. The fourth meeting is delayed.
- At time 5, the meeting in room 2 finishes. The fourth meeting starts in room 2 for the time period [5,10).
- At time 6, all three rooms are being used. The fifth meeting is delayed.
- At time 10, the meetings in rooms 1 and 2 finish. The fifth meeting starts in room 1 for the time period [10,12).
Room 0 held 1 meeting while rooms 1 and 2 each held 2 meetings, so we return 1. 
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= meetings.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">meetings[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= start<sub style="user-select: auto;">i</sub> &lt; end<sub style="user-select: auto;">i</sub> &lt;= 5 * 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">start<sub style="user-select: auto;">i</sub></code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>