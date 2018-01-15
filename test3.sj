library "release-1.0:https://github.com/justinmann/sj-lib-json.git"

v1 : 1 as json.value
v2 : true as json.value
v3 : 1.0f as json.value
v4 : "hello" as json.value
v5 : ([v1, v2, v3, v4]) as json.value
v6 : ({ "foo" : v5, "bar" : "alpha" as json.value }) as json.value
debug.writeLine(v6.render())
debug.writeLine(v6.pretty())