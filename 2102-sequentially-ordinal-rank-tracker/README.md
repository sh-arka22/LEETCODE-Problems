<h2><a href="https://leetcode.com/problems/sequentially-ordinal-rank-tracker/">2102. Sequentially Ordinal Rank Tracker</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A scenic location is represented by its <code style="user-select: auto;">name</code> and attractiveness <code style="user-select: auto;">score</code>, where <code style="user-select: auto;">name</code> is a <strong style="user-select: auto;">unique</strong> string among all locations and <code style="user-select: auto;">score</code> is an integer. Locations can be ranked from the best to the worst. The <strong style="user-select: auto;">higher</strong> the score, the better the location. If the scores of two locations are equal, then the location with the <strong style="user-select: auto;">lexicographically smaller</strong> name is better.</p>

<p style="user-select: auto;">You are building a system that tracks the ranking of locations with the system initially starting with no locations. It supports:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><strong style="user-select: auto;">Adding</strong> scenic locations, <strong style="user-select: auto;">one at a time</strong>.</li>
	<li style="user-select: auto;"><strong style="user-select: auto;">Querying</strong> the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> <strong style="user-select: auto;">best</strong> location of <strong style="user-select: auto;">all locations already added</strong>, where <code style="user-select: auto;">i</code> is the number of times the system has been queried (including the current query).
	<ul style="user-select: auto;">
		<li style="user-select: auto;">For example, when the system is queried for the <code style="user-select: auto;">4<sup style="user-select: auto;">th</sup></code> time, it returns the <code style="user-select: auto;">4<sup style="user-select: auto;">th</sup></code> best location of all locations already added.</li>
	</ul>
	</li>
</ul>

<p style="user-select: auto;">Note that the test data are generated so that <strong style="user-select: auto;">at any time</strong>, the number of queries <strong style="user-select: auto;">does not exceed</strong> the number of locations added to the system.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">SORTracker</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">SORTracker()</code> Initializes the tracker system.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void add(string name, int score)</code> Adds a scenic location with <code style="user-select: auto;">name</code> and <code style="user-select: auto;">score</code> to the system.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">string get()</code> Queries and returns the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> best location, where <code style="user-select: auto;">i</code> is the number of times this method has been invoked (including this invocation).</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["SORTracker", "add", "add", "get", "add", "get", "add", "get", "add", "get", "add", "get", "get"]
[[], ["bradford", 2], ["branford", 3], [], ["alps", 2], [], ["orland", 2], [], ["orlando", 3], [], ["alpine", 2], [], []]
<strong style="user-select: auto;">Output</strong>
[null, null, null, "branford", null, "alps", null, "bradford", null, "bradford", null, "bradford", "orland"]

<strong style="user-select: auto;">Explanation</strong>
SORTracker tracker = new SORTracker(); // Initialize the tracker system.
tracker.add("bradford", 2); // Add location with name="bradford" and score=2 to the system.
tracker.add("branford", 3); // Add location with name="branford" and score=3 to the system.
tracker.get();              // The sorted locations, from best to worst, are: branford, bradford.
                            // Note that branford precedes bradford due to its <strong style="user-select: auto;">higher score</strong> (3 &gt; 2).
                            // This is the 1<sup style="user-select: auto;">st</sup> time get() is called, so return the best location: "branford".
tracker.add("alps", 2);     // Add location with name="alps" and score=2 to the system.
tracker.get();              // Sorted locations: branford, alps, bradford.
                            // Note that alps precedes bradford even though they have the same score (2).
                            // This is because "alps" is <strong style="user-select: auto;">lexicographically smaller</strong> than "bradford".
                            // Return the 2<sup style="user-select: auto;">nd</sup> best location "alps", as it is the 2<sup style="user-select: auto;">nd</sup> time get() is called.
tracker.add("orland", 2);   // Add location with name="orland" and score=2 to the system.
tracker.get();              // Sorted locations: branford, alps, bradford, orland.
                            // Return "bradford", as it is the 3<sup style="user-select: auto;">rd</sup> time get() is called.
tracker.add("orlando", 3);  // Add location with name="orlando" and score=3 to the system.
tracker.get();              // Sorted locations: branford, orlando, alps, bradford, orland.
                            // Return "bradford".
tracker.add("alpine", 2);   // Add location with name="alpine" and score=2 to the system.
tracker.get();              // Sorted locations: branford, orlando, alpine, alps, bradford, orland.
                            // Return "bradford".
tracker.get();              // Sorted locations: branford, orlando, alpine, alps, bradford, orland.
                            // Return "orland".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">name</code> consists of lowercase English letters, and is unique among all locations.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= name.length &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= score &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;">At any time, the number of calls to <code style="user-select: auto;">get</code> does not exceed the number of calls to <code style="user-select: auto;">add</code>.</li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">4 * 10<sup style="user-select: auto;">4</sup></code> calls <strong style="user-select: auto;">in total</strong> will be made to <code style="user-select: auto;">add</code> and <code style="user-select: auto;">get</code>.</li>
</ul>
</div>