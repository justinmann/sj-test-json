library "release-1.0:https://github.com/justinmann/sj-lib-json.git"

data : json.parse("{ \"member1\" : \"value1\", \"member2\" : \"value2\", \"member3\" : [ \"item1\", \"item2\", \"item3\"] }")
ifValid data {
    t : data["member3"]?.a[0]??
    debug.writeLine(t as string)
    debug.writeLine(t as string)
    debug.writeLine(data["member3"]?.a[0]?? as string)
    debug.writeLine(data["member3"]?.a?? as string)
    data.h?.each(^{
        debug.writeLine(_1 + " == " + _2.render())
    })
    data["member3"]?.a?.each(^{
        debug.writeLine(_ as string)
    })
}