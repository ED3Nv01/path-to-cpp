```widgets
type: clock
```

```contributionGraph
title: CONTRIBUTIONS
graphType: default
dateRangeValue: 179
dateRangeType: LATEST_DAYS
startOfWeek: 0
showCellRuleIndicators: true
titleStyle:
  textAlign: center
  fontSize: 20px
  fontWeight: normal
dataSource:
  type: PAGE
  value: ""
  dateField: {}
  filters: []
fillTheScreen: false
enableMainContainerShadow: false
cellStyleRules: []

```

----


--- start-multi-column: ID_rh17
```column-settings
Number of Columns: 1
Largest Column: standard
Border: disabled
```

```ad-done
title: update v0.0.1 Init
```

1. <mark style="background: #CACFD9A6;">Add</mark>: ANSI Standard colors support
2. <mark style="background: #CACFD9A6;">Add</mark>: Grpahics Mode support
3. <mark style="background: #CACFD9A6;">Add</mark>: 256 Colors support
4. <mark style="background: #CACFD9A6;">Add</mark>: RGB Colors support

--- end-multi-column

----


```ad-todo
title: TODO

----

1. [ ] **Replace loops with `find` or `at`**
~~~cpp
auto it = Cseq.find(C);
if (it != Cseq.end()) return it->second + "m";
~~~

----

2. [ ]  **Bug managment**
~~~cpp
if (it == Cseq.end()) {
    std::cerr << "Invalid color: " << C << ". Using reset." << std::endl;
    return "0m";
}
~~~

----

3. [ ] **declare constants in values that doesn't change**
~~~cpp
std::string drawRGB(bool background, const std::map<std::string, std::string>& color)
~~~

----

4. [ ] Change RGB function to a structs

----

5. [ ] Use constants for magic values
~~~cpp
constexpr const char* BACKGROUND_256 = "48;5;";
constexpr const char* FOREGROUND_256 = "38;5;";
~~~

----
```




