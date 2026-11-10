# TCS NQT: Numerical Ability (Core Maths) Type-Wise Master Question Bank

This document breaks down **every single variation** asked in TCS NQT Numerical Ability.
For each variation: **Type Identification $\to$ Shortcut Formula $\to$ TCS Standard Question $\to$ Step-by-Step Solution & Trap**.

---

# SECTION 1: PERCENTAGES

---

### Type 1.1: Price - Consumption - Expenditure (Inverse Variation)
* **The Scenario:** Price of a commodity increases or decreases by $r\%$. By what percentage must consumption be reduced/increased to keep total expenditure constant?
* **Shortcut Formula:**
  $$\text{Reduction in Consumption \%} = \left(\frac{r}{100 + r}\right) \times 100\% \quad (\text{if price increases})$$
  $$\text{Increase in Consumption \%} = \left(\frac{r}{100 - r}\right) \times 100\% \quad (\text{if price decreases})$$
* **TCS Practice Question:**
  The price of sugar increases by $25\%$. By what percentage must a household reduce its consumption of sugar so that the expenditure on sugar remains unchanged?
* **Solution:**
  Here $r = 25$.
  $$\text{Reduction} = \frac{25}{100 + 25} \times 100 = \frac{25}{125} \times 100 = \frac{1}{5} \times 100 = \mathbf{20\%}$$
  *Trap to avoid:* Never say $25\%$ reduction! An increase from 100 to 125 means going back from 125 to 100 is a drop of 25 on a base of 125, which is $20\%$.

---

### Type 1.2: Successive Percentage Change (Net Effective %)
* **The Scenario:** A quantity changes by $a\%$ and then by $b\%$.
* **Shortcut Formula:**
  $$\text{Net Change \%} = a + b + \frac{a \times b}{100}$$
  *(Use positive sign for increase/profit and negative sign for decrease/discount).*
* **TCS Practice Question:**
  A person's salary was first increased by $20\%$ and subsequently decreased by $20\%$. What is the net percentage change in his salary?
* **Solution:**
  $a = +20, b = -20$.
  $$\text{Net Change} = 20 - 20 + \frac{(20)(-20)}{100} = 0 - \frac{400}{100} = \mathbf{-4\%} \quad (\text{i.e. } 4\% \text{ decrease})$$

---

### Type 1.3: Examination / Pass-Fail Marks
* **The Scenario:** Candidate A gets $x\%$ marks and fails by $m$ marks. Candidate B gets $y\%$ marks and gets $n$ marks more than the passing marks. Find maximum marks and pass percentage.
* **Shortcut Formula:**
  $$\text{Total Maximum Marks} = \frac{m + n}{y - x} \times 100$$
* **TCS Practice Question:**
  In an examination, Rahul scored $30\%$ and failed by 15 marks. Priya scored $40\%$ and obtained 35 marks more than the minimum passing marks. Find the passing percentage.
* **Solution:**
  Difference in percentage: $40\% - 30\% = 10\%$
  Difference in actual marks: $35 - (-15) = 50$ marks.
  $$10\% = 50 \implies \text{Total Marks } (100\%) = 500$$
  Passing marks = $30\% \text{ of } 500 + 15 = 150 + 15 = 165$.
  $$\text{Passing Percentage} = \frac{165}{500} \times 100 = \mathbf{33\%}$$

---

### Type 1.4: Population & Depreciation (Compounding Growth/Decay)
* **The Scenario:** Initial value $P$, changing at rate $r\%$ per year for $n$ years.
* **Shortcut Formula:**
  $$\text{Value after } n \text{ years} = P \left(1 \pm \frac{r}{100}\right)^n$$
  $$\text{Value } n \text{ years ago} = \frac{P}{\left(1 \pm \frac{r}{100}\right)^n}$$
* **TCS Practice Question:**
  The population of a city grows at $10\%$ per annum. If its present population is $133,100$, what was the population 3 years ago?
* **Solution:**
  $P = 133,100, r = 10, n = 3$.
  $$\text{Population 3 yrs ago} = \frac{133,100}{\left(1 + \frac{10}{100}\right)^3} = \frac{133,100}{(1.1)^3} = \frac{133,100}{1.331} = \mathbf{100,000}$$

---

### Type 1.5: Election & Voting Variations
* **The Scenario:** In an election between two candidates, $x\%$ of votes were invalid, and the winner got $y\%$ of the valid votes and won by a majority of $M$ votes.
* **TCS Practice Question:**
  In an election between two candidates, $10\%$ of voters did not cast their votes and $10\%$ of votes cast were declared invalid. The successful candidate got $54\%$ of the valid votes and won by a majority of 1620 votes. Find the total number of voters enrolled.
* **Solution:**
  Let enrolled voters = $V$.
  Voted = $0.90 \times V$.
  Valid votes = $0.90 \times (0.90 V) = 0.81 V$.
  Winner gets $54\%$ of valid votes $\implies$ Loser gets $46\%$ of valid votes.
  Difference (majority) = $54\% - 46\% = 8\%$ of valid votes.
  $$0.08 \times (0.81 V) = 1620$$
  $$0.0648 V = 1620 \implies V = \frac{1620}{0.0648} = \mathbf{25,000}$$

---

# SECTION 2: PROFIT, LOSS & DISCOUNT

---

### Type 2.1: Equal Selling Price with Equal Gain% and Loss%
* **The Scenario:** Two articles are sold at the SAME selling price (SP). One at a gain of $x\%$, other at a loss of $x\%$.
* **Shortcut Rule:**
  There is **ALWAYS a net loss**.
  $$\text{Net Loss \%} = \frac{x^2}{100}\%$$
* **TCS Practice Question:**
  A trader sells two laptops for ₹24,000 each. On one he gains $20\%$ and on the other he loses $20\%$. What is his net gain or loss percent, and overall loss in rupees?
* **Solution:**
  1. Percentage loss:
     $$\text{Net Loss \%} = \frac{20^2}{100} = \frac{400}{100} = \mathbf{4\% \text{ Loss}}$$
  2. Total SP = $24,000 + 24,000 = ₹48,000$.
     Total SP is $96\%$ of total CP.
     $$\text{Total CP} = \frac{48,000}{0.96} = ₹50,000$$
     $$\text{Total Loss in ₹} = 50,000 - 48,000 = \mathbf{₹2,000}$$

---

### Type 2.2: Relation Between Cost Price (CP) and Marked Price (MP)
* **The Scenario:** A merchant gives a discount of $D\%$ on the Marked Price and still makes a profit of $P\%$.
* **Shortcut Ratio:**
  $$\frac{\text{MP}}{\text{CP}} = \frac{100 + P}{100 - D}$$
* **TCS Practice Question:**
  A shopkeeper allows a discount of $10\%$ on the marked price of a watch and still earns a profit of $26\%$. By what percentage is the marked price higher than the cost price?
* **Solution:**
  $$\frac{\text{MP}}{\text{CP}} = \frac{100 + 26}{100 - 10} = \frac{126}{90} = \frac{14}{10} = 1.4$$
  Marked Price is $40\%$ higher than CP $\implies \mathbf{40\%}$.

---

### Type 2.3: Dishonest Shopkeeper / Faulty Weights
* **The Scenario:** A merchant claims to sell at Cost Price but uses a false weight of $W_{\text{used}}$ instead of true weight $W_{\text{true}}$.
* **Shortcut Formula:**
  $$\text{Gain \%} = \left(\frac{\text{Error}}{\text{True Weight} - \text{Error}}\right) \times 100\% = \left(\frac{W_{\text{true}} - W_{\text{used}}}{W_{\text{used}}}\right) \times 100\%$$
* **TCS Practice Question:**
  A dishonest grocer sells rice at cost price but uses a faulty weight of 900 grams for a 1 kg weight. What is his percentage profit?
* **Solution:**
  Error = $1000 - 900 = 100\text{ g}$. True base paid by shopkeeper is $900\text{ g}$.
  $$\text{Profit \%} = \frac{100}{900} \times 100 = \frac{1}{9} \times 100 = \mathbf{11.11\%} \quad \left(11\frac{1}{9}\%\right)$$

---

### Type 2.4: Successive Discounts (Equivalent Single Discount)
* **The Scenario:** Successive discounts of $d_1\%$ and $d_2\%$.
* **Shortcut Formula:**
  $$\text{Equivalent Discount \%} = d_1 + d_2 - \frac{d_1 \times d_2}{100}$$
* **TCS Practice Question:**
  What single discount is equivalent to two successive discounts of $20\%$ and $15\%$?
* **Solution:**
  $$\text{Discount} = 20 + 15 - \frac{20 \times 15}{100} = 35 - 3 = \mathbf{32\%}$$

---

# SECTION 3: TIME AND WORK & PIPES-CISTERNS

---

### Type 3.1: Individual Times Given $\to$ Combined Time
* **Formula:**
  If A does work in $A$ days and B in $B$ days:
  $$\text{Time together} = \frac{A \times B}{A + B}$$
  *Best method for $\ge 3$ people:* **LCM Method** (Take LCM of days as total units of work, find 1-day work units/efficiency).
* **TCS Practice Question:**
  A can complete a piece of work in 12 days and B in 18 days. In how many days will they complete the work working together?
* **Solution:**
  $\text{LCM}(12, 18) = 36$ units (Total Work).
  * A's efficiency = $36 / 12 = 3$ units/day.
  * B's efficiency = $36 / 18 = 2$ units/day.
  Combined efficiency = $3 + 2 = 5$ units/day.
  $$\text{Days} = \frac{36}{5} = \mathbf{7.2 \text{ days}} \quad \left(7\frac{1}{5} \text{ days}\right)$$

---

### Type 3.2: Worker Leaves Midway
* **The Scenario:** A and B start work together, but one leaves after $d$ days, or leaves $k$ days *before completion*.
* **TCS Practice Question:**
  A can do a task in 20 days and B in 30 days. They start working together, but A leaves 5 days before the task is completed. In how many total days was the task completed?
* **Solution (Golden Shortcut):**
  If someone leaves $k$ days **before completion**, imagine forcing them to work those extra $k$ days and **add** their work to the total!
  $\text{Total Work} = \text{LCM}(20, 30) = 60$ units.
  * A's efficiency = $60 / 20 = 3$ units/day.
  * B's efficiency = $60 / 30 = 2$ units/day.
  If A stayed the last 5 days, A would have done: $5 \times 3 = 15$ extra units.
  New Total Work = $60 + 15 = 75$ units.
  Both worked for the entire duration:
  $$\text{Total Days} = \frac{75}{3 + 2} = \frac{75}{5} = \mathbf{15 \text{ days}}$$

---

### Type 3.3: Working on Alternate Days
* **The Scenario:** A and B work on alternate days, starting with A.
* **TCS Practice Question:**
  A can do a work in 10 days and B in 15 days. If they work on alternate days with A starting on the first day, in how many days will the work finish?
* **Solution:**
  Total Work = $\text{LCM}(10, 15) = 30$ units.
  * Day 1 (A): 3 units.
  * Day 2 (B): 2 units.
  1 cycle (2 days) = $3 + 2 = 5$ units.
  Number of 2-day cycles to reach 30 units = $30 / 5 = 6$ full cycles.
  $$\text{Total Days} = 6 \text{ cycles} \times 2 \text{ days/cycle} = \mathbf{12 \text{ days}}$$

---

### Type 3.4: Men-Women-Days Equivalence ($M_1 D_1 H_1 / W_1$)
* **Shortcut Formula:**
  $$\frac{M_1 \times D_1 \times H_1}{W_1} = \frac{M_2 \times D_2 \times H_2}{W_2}$$
* **TCS Practice Question:**
  12 men can complete a project in 18 days working 8 hours a day. How many days will 16 men take to complete double the work working 9 hours a day?
* **Solution:**
  $$\frac{12 \times 18 \times 8}{1} = \frac{16 \times D_2 \times 9}{2}$$
  $$1728 = 72 \times D_2 \implies D_2 = \frac{1728}{72} = \mathbf{24 \text{ days}}$$

---

### Type 3.5: Pipes with an Emptying Leak
* **TCS Practice Question:**
  A pipe can fill a cistern in 8 hours. Due to a leak in the bottom, it takes 10 hours to fill the cistern. When the cistern is full, in how many hours will the leak empty it?
* **Solution:**
  $\text{LCM}(8, 10) = 40$ units capacity.
  * Inlet rate = $+40 / 8 = +5$ units/hr.
  * Net rate with leak = $+40 / 10 = +4$ units/hr.
  Leak rate = Net rate - Inlet rate = $4 - 5 = -1$ unit/hr.
  $$\text{Time to empty} = \frac{40}{1} = \mathbf{40 \text{ hours}}$$

---

# SECTION 4: SPEED, TIME AND DISTANCE

---

### Type 4.1: Average Speed for Equal Distance
* **Shortcut Formula:**
  If a journey covers equal distance at speed $x$ km/h and return journey at speed $y$ km/h:
  $$\text{Average Speed} = \frac{2xy}{x + y}$$
* **TCS Practice Question:**
  A car travels from city A to city B at 60 km/h and returns from B to A at 40 km/h. What is the average speed of the car for the entire journey?
* **Solution:**
  $$\text{Avg Speed} = \frac{2 \times 60 \times 40}{60 + 40} = \frac{4800}{100} = \mathbf{48 \text{ km/h}}$$
  *Trap to avoid:* Never take arithmetic mean $\frac{60 + 40}{2} = 50$!

---

### Type 4.2: Trains Passing Moving Object / Platform
* **Key Principles:**
  * Distance when passing a pole/man = Length of Train ($L$).
  * Distance when passing a platform/bridge = Length of Train + Length of Platform ($L_T + L_P$).
  * Opposite direction relative speed = $S_1 + S_2$.
  * Same direction relative speed = $|S_1 - S_2|$.
  * Conversion: $1 \text{ km/h} = \frac{5}{18} \text{ m/s}$.
* **TCS Practice Question:**
  A train 180 meters long is running at 72 km/h. How many seconds will it take to pass a platform 120 meters long?
* **Solution:**
  Speed in m/s = $72 \times \frac{5}{18} = 20 \text{ m/s}$.
  Total Distance = $180 + 120 = 300\text{ m}$.
  $$\text{Time} = \frac{\text{Distance}}{\text{Speed}} = \frac{300}{20} = \mathbf{15 \text{ seconds}}$$

---

### Type 4.3: Boats and Streams (Upstream vs Downstream)
* **Formulas:**
  Let speed of boat in still water = $u$, speed of stream = $v$.
  * Downstream Speed ($D$) = $u + v$
  * Upstream Speed ($U$) = $u - v$
  * $u = \frac{D + U}{2}, \quad v = \frac{D - U}{2}$
* **TCS Practice Question:**
  A boat travels 24 km downstream in 2 hours and 24 km upstream in 4 hours. What is the speed of the boat in still water and the speed of the current?
* **Solution:**
  $D = 24 / 2 = 12 \text{ km/h}$.
  $U = 24 / 4 = 6 \text{ km/h}$.
  $$\text{Boat Speed } u = \frac{12 + 6}{2} = \mathbf{9 \text{ km/h}}$$
  $$\text{Current Speed } v = \frac{12 - 6}{2} = \mathbf{3 \text{ km/h}}$$

---

### Type 4.4: Late and Early Departure Variation
* **The Scenario:** Walking at speed $S_1$ reaches $t_1$ minutes late. Walking at speed $S_2$ reaches $t_2$ minutes early.
* **Shortcut Formula:**
  $$\text{Distance} = \frac{S_1 \times S_2}{|S_1 - S_2|} \times \Delta t_{\text{hours}}$$
* **TCS Practice Question:**
  If a student walks at 4 km/h, he reaches school 10 minutes late. If he walks at 5 km/h, he reaches 5 minutes early. Find the distance to his school.
* **Solution:**
  $S_1 = 4, S_2 = 5$.
  Time difference = 10 mins late to 5 mins early = $10 + 5 = 15 \text{ minutes} = \frac{15}{60} = \frac{1}{4} \text{ hr}$.
  $$\text{Distance} = \frac{4 \times 5}{|5 - 4|} \times \frac{1}{4} = \frac{20}{1} \times \frac{1}{4} = \mathbf{5 \text{ km}}$$

---

# SECTION 5: RATIO, PROPORTION & MIXTURES

---

### Type 5.1: Removal and Replacement (Repeated Dilution)
* **Shortcut Formula:**
  If a vessel contains $C$ units of pure liquid, and $x$ units are drawn out and replaced with water $n$ times:
  $$\text{Remaining Pure Liquid} = C \left(1 - \frac{x}{C}\right)^n$$
* **TCS Practice Question:**
  A container contains 80 litres of pure milk. 8 litres are taken out and replaced with water. This process is repeated 2 more times (total 3 times). How much pure milk remains in the container?
* **Solution:**
  $C = 80, x = 8, n = 3$.
  $$\text{Milk left} = 80 \left(1 - \frac{8}{80}\right)^3 = 80 \left(1 - \frac{1}{10}\right)^3 = 80 \times (0.9)^3 = 80 \times 0.729 = \mathbf{58.32 \text{ litres}}$$

---

### Type 5.2: Coins in a Bag Ratio
* **TCS Practice Question:**
  A bag contains coins of ₹1, 50 paise, and 25 paise in the ratio $3 : 4 : 8$. If the total value of all coins is ₹240, find the number of 50-paise coins.
* **Solution:**
  Let number of coins be $3x, 4x, 8x$.
  Total value in ₹:
  $$(3x \times 1) + (4x \times 0.50) + (8x \times 0.25) = 240$$
  $$3x + 2x + 2x = 240 \implies 7x = 240$$
  *(If ratio was $3 : 4 : 8$ with ₹210 total)*:
  $$7x = 210 \implies x = 30$$
  $$\text{Number of 50-paise coins} = 4x = 4 \times 30 = \mathbf{120 \text{ coins}}$$

---

# SECTION 6: SIMPLE & COMPOUND INTEREST

---

### Type 6.1: Difference Between CI and SI for 2 and 3 Years
* **Shortcut Formulas:**
  $$\text{Difference for 2 years } (D_2) = P \left(\frac{R}{100}\right)^2$$
  $$\text{Difference for 3 years } (D_3) = P \left(\frac{R}{100}\right)^2 \left(\frac{300 + R}{100}\right)$$
* **TCS Practice Question:**
  The difference between compound interest and simple interest on a certain sum of money for 2 years at $10\%$ per annum is ₹150. Find the principal sum.
* **Solution:**
  $$150 = P \left(\frac{10}{100}\right)^2 = P \left(\frac{1}{100}\right) \implies P = 150 \times 100 = \mathbf{₹15,000}$$

---

### Type 6.2: Sum Doubles / Triples in $N$ Years
* **Simple Interest Rule:**
  If a sum becomes $k$ times in $T$ years:
  $$R = \frac{(k - 1) \times 100}{T}$$
* **Compound Interest Rule (Rule of Multipliers):**
  If a sum becomes $k$ times in $T$ years under CI, it becomes $k^m$ times in $m \times T$ years.
* **TCS Practice Question:**
  A sum of money placed at compound interest doubles itself in 5 years. In how many years will it amount to 8 times itself?
* **Solution:**
  Here $k = 2, T = 5 \text{ years}$.
  We want it to become $8 = 2^3$ times.
  Here $m = 3$.
  $$\text{Time required} = m \times T = 3 \times 5 = \mathbf{15 \text{ years}}$$
